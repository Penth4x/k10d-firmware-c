#!/usr/bin/env python3
"""detect_struct_b12.py — the STRUCT-FIELD B-12 sub-class (sibling of the global B-12 sweep).

Pattern: a struct field declared uint32_t/uint16_t is assigned from a BYTE-typed source
(`*(uint8_t*)...`, `(uint8_t)...`, a char/byte/uint8_t local). On the FR (big-endian) this
compiles to a WIDE store that zero-extends the byte: the semantic byte lands at the field's
LSB (+width-1), leaving the field's base byte (what byte-reading consumers like test_flag_clear
read at obj+off) = 0. The original firmware did a BYTE store. Exactly the cls_105a023c_new
field_0x1c mask bug (MENU LAYER-4).

Heuristic (reports CANDIDATES for manual review; a wide field legitimately holding a 0..255
count is a false positive):
  - resolve the destination struct from a `(cls_XXX *)expr)->field_0xNN` cast or a typed local,
  - the field is declared uint32_t or uint16_t in structs.h,
  - the RHS is byte-narrowed: `*(uint8_t *)`, `*(byte *)`, `(uint8_t)`, `(byte)`, `(char)`.
Prints file:line, struct.field, declared width, and the RHS."""
import os, re, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(ROOT, "cpu", "src"); HDR = os.path.join(ROOT, "cpu", "include", "structs.h")

# 1. struct field widths: {struct: {field: width_bytes}}
widths = {}
cur = None
wmap = {'uint8_t':1,'int8_t':1,'char':1,'byte':1,'uint16_t':2,'int16_t':2,'ushort':2,
        'uint32_t':4,'int32_t':4,'uint':4,'int':4,'undefined4':4}
for ln in open(HDR, encoding='latin-1'):
    m = re.match(r'\s*typedef struct (\w+) \{', ln)
    if m: cur = m.group(1); widths[cur] = {}; continue
    if cur and re.match(r'\s*\}', ln): cur = None; continue
    if cur:
        fm = re.match(r'\s*(\w+)\s+(field\w+)\s*;', ln)
        if fm and fm.group(1) in wmap: widths[cur][fm.group(2)] = wmap[fm.group(1)]

BYTE_RHS = re.compile(r'=\s*(\*\(\s*(uint8_t|byte)\s*\*\)|\(\s*(uint8_t|byte|char)\s*\))')
# ((cls_X *)expr)->field = <byte>   OR   (cls_X *)param)->field = <byte>
CAST_FIELD = re.compile(r'\(\s*(cls_\w+)\s*\*\s*\)[^;]*?\)->(field\w+)\s*(=\s*[^;]+);')
BYTE_LOCAL_DECL = re.compile(r'^\s*(uint8_t|int8_t|char|byte|undefined1)\s+([\w,\s]+);')
# already-fixed idiom: the field is the target of an explicit byte-store `*(uint8_t *)&(...)->field ='
FIXED = re.compile(r'\*\(\s*(uint8_t|byte)\s*\*\s*\)\s*&')

hits = []
for dp,_,fns in os.walk(SRC):
    for f in sorted(fns):
        if not f.endswith('.c'): continue
        p = os.path.join(dp,f)
        text = open(p, encoding='latin-1').read()
        # byte-typed locals declared in this file (crude, file-scoped)
        blocals = set()
        for dm in BYTE_LOCAL_DECL.finditer(text):
            for nm in dm.group(2).split(','):
                nm = nm.strip().split('[')[0].strip('* ')
                if re.match(r'^\w+$', nm): blocals.add(nm)
        for i, ln in enumerate(text.splitlines(), 1):
            if '->' not in ln or '=' not in ln: continue
            for cm in CAST_FIELD.finditer(ln):
                st, fld, rhs = cm.group(1), cm.group(2), cm.group(3)
                w = widths.get(st, {}).get(fld)
                if not (w and w >= 2): continue
                if FIXED.search(ln[:cm.start()]): continue          # already byte-store fixed
                rv = rhs.split('=',1)[1].strip().rstrip(';').strip()
                byte_src = bool(BYTE_RHS.search(rhs)) or (rv in blocals)
                if byte_src:
                    hits.append((os.path.relpath(p,SRC), i, f"{st}.{fld}", w, rhs.strip()[:60]))

print(f"=== struct-field B-12 candidates (byte source -> uint16/32 field): {len(hits)} ===")
for rel,i,fld,w,rhs in hits:
    print(f"  {rel}:{i}  {fld} (u{w*8})  {rhs}")
