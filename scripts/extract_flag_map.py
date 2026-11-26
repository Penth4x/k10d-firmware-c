#!/usr/bin/env python3
"""extract_flag_map.py <VA> — decode a cmp-cascade event dispatcher that calls set_flg_obj,
and print the ground-truth (event_code -> flag_offset, pattern) mapping recovered from the
ORIGINAL disasm, so a merged-case (B-15) function can be reconstructed without fabricating.

Models the common idiom: a chain of `ldi #code,rX; cmp rX,r5; beq target` (r5=param_2=event
code) where each target does `... r4=param_1+off ...; ldi #pat,r5; call set_flg_obj`. Tracks
the branch SENSE via the emulator's cond() numbering (op_b: 2=EQ, 3=NE, 4=C/<unsigned,
5=NC/>=unsigned, from `cmp A,B` computing B-A). Emits each leaf's event code, the flag object
offset (r4 = param_1 + off), the r5 pattern, and any guard compare at the leaf. Leaves it to a
human to write the C, but removes the arithmetic guesswork. NOT a full decompiler — prints
RAW LEAVES for anything it can't fold, so you never silently trust a bad fold."""
import sys, os, re, bisect
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import frdis
SETFLG = 0x104596cc
VAs = sorted(frdis.VA2NAME)

def extent(va):
    i = bisect.bisect_right(VAs, va); return VAs[i] if i < len(VAs) else va + 0x800

def main(va):
    end = extent(va); pc = va; ins = []
    while pc < end:
        w = frdis.r16(pc); txt, sz = frdis.dis1(pc); ins.append((pc, w, sz, txt)); pc += sz
    idx = {p: i for i, (p, _, _, _) in enumerate(ins)}
    # pass 1: list the equality dispatch edges: cmp #code,r5 (via rX) then beq target
    print(f"=== {frdis.VA2NAME.get(va,hex(va))} @ {va:08x} ===")
    print("  -- dispatch edges (cmp against r5=param_2) --")
    regconst = {}
    for i, (p, w, sz, txt) in enumerate(ins):
        m = re.match(r'ldi:\d+ #(0x[0-9a-f]+),(r\d+)$', txt)
        if m: regconst[m.group(2)] = int(m.group(1), 16)
        m2 = re.match(r'cmp (r\d+),r5$', txt)  # compares r5 (param_2) with regX
        if m2 and m2.group(1) in regconst:
            code = regconst[m2.group(1)]
            # the following branch
            if i+1 < len(ins):
                nb = ins[i+1]; opb = (nb[1] >> 8) & 0xf; hi4 = (nb[1] >> 12) & 0xf
                if hi4 in (0xE, 0xF):
                    td = nb[1] & 0xff; disp = td-0x100 if td & 0x80 else td
                    tgt = nb[0] + 2 + disp*2
                    sense = {2: 'EQ', 3: 'NE', 4: 'LTu', 5: 'GEu', 6: 'N', 7: 'P'}.get(opb, f'op{opb}')
                    print(f"    @{p:08x} cmp code=0x{code:x}  branch[{sense}] -> {tgt:08x}")
    # pass 2: for each dispatch edge target, walk FORWARD to the set_flg_obj call on that path,
    # tracking r5 (pattern) and r4 offset. Follow unconditional bra; stop at a conditional branch
    # (mark MANUAL) or the call. This recovers the PER-CASE pattern, not the shared-call blind value.
    print("  -- per-edge forward trace to set_flg_obj (code -> offset, pattern) --")
    def off_r4(seg):
        # detect r4 = param_1 + off from either `ldi #off,r12; addn r4,r12; mov r12,r4` or `addn #off,r4`
        for k,(p2,w2,s2,t2) in enumerate(seg):
            ma = re.match(r'addn #(0x[0-9a-f]+|\d+),r4$', t2)
            if ma: return int(ma.group(1),0)
            ml = re.match(r'ldi:\d+ #(0x[0-9a-f]+),r12$', t2)
            if ml and k+2<len(seg) and 'addn r4,r12' in seg[k+1][3] and 'mov r12,r4' in seg[k+2][3]:
                return int(ml.group(1),16)
        return 0  # r4 = param_1 (offset 0)
    def trace(start):
        pc=start; r5=None; steps=0; seg=[]
        while steps<40:
            if pc not in idx: return ('OOR',None,None)
            i=idx[pc]; p,w,sz,txt=ins[i]; seg.append(ins[i])
            mp=re.match(r'ldi:\d+ #(0x[0-9a-f]+),r5$',txt)
            if mp: r5=int(mp.group(1),16)
            # set_flg_obj call?
            if re.match(r'call(:d)? @r12',txt):
                # delay slot may set r5
                if ':d' in txt and idx.get(pc+sz) is not None:
                    dp=re.match(r'ldi:\d+ #(0x[0-9a-f]+),r5$',ins[idx[pc+sz]][3])
                    if dp: r5=int(dp.group(1),16)
                return ('CALL', off_r4(seg), r5)
            hi4=(w>>12)&0xf; opb=(w>>8)&0xf
            if hi4 in (0xE,0xF):
                td=w&0xff; disp=td-0x100 if td&0x80 else td; tgt=pc+2+disp*2
                if opb==0:  # unconditional bra (follow; exec delay slot first if :d)
                    if hi4==0xF and idx.get(pc+sz) is not None:
                        dt=re.match(r'ldi:\d+ #(0x[0-9a-f]+),r5$',ins[idx[pc+sz]][3])
                        if dt: r5=int(dt.group(1),16)
                        d2=off_r4([ins[idx[pc+sz]]])  # delay slot may also set offset
                    pc=tgt; steps+=1; continue
                else:
                    return ('COND@%08x'%pc, off_r4(seg), r5)  # branch-dependent -> manual
            pc+=sz; steps+=1
        return ('LOOP',None,r5)
    for i,(p,w,sz,txt) in enumerate(ins):
        m=re.match(r'ldi:\d+ #(0x[0-9a-f]+),(r\d+)$',txt)
    # redo edge scan to drive the trace
    regconst={}
    for i,(p,w,sz,txt) in enumerate(ins):
        m=re.match(r'ldi:\d+ #(0x[0-9a-f]+),(r\d+)$',txt)
        if m: regconst[m.group(2)]=int(m.group(1),16)
        m2=re.match(r'cmp (r\d+),r5$',txt)
        if m2 and m2.group(1) in regconst and i+1<len(ins):
            code=regconst[m2.group(1)]; nb=ins[i+1]; opb=(nb[1]>>8)&0xf; hi4=(nb[1]>>12)&0xf
            if hi4 in (0xE,0xF) and opb==2:  # EQ edge
                td=nb[1]&0xff; disp=td-0x100 if td&0x80 else td; tgt=nb[0]+2+disp*2
                kind,off,pat=trace(tgt)
                ps=f"0x{pat:x}" if pat is not None else "?"
                os_=f"param_1+0x{off:x}" if off is not None else "?"
                tag='' if kind=='CALL' else f"  <<{kind} — MANUAL>>"
                print(f"    code=0x{code:<8x} -> obj={os_:16} pattern={ps}{tag}")

if __name__ == '__main__':
    main(int(sys.argv[1], 16))
