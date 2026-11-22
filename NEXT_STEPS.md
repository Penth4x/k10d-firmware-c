# Next steps — open investigation

Boot advances through distinct root causes; each fix reveals the next. Five classes fixed &
committed this session (B-9, B-10, B-3b, B-11, plus git reconciliation). Current frontier below.

## FIXED this session (committed, not pushed)
1. **B-9** pointer-arith scaling (17 fns) — `&field + idx` instead of `(int)&field + idx` overran
   clear/copy loops and zeroed adjacent vtables. (deactivate boot-loop.) `scripts/classify_scaling.py`.
2. **B-10** 64-bit shift ≥32 = masked no-op — fcc compiled `CONCAT44(hi,lo)>>0x20` as `hi|lo`
   (wild ptr) in `app_obj_factory`. Fixed by dropping the 64-bit intermediate.
3. **B-3b** dropped syscall arg — `check_task_state_transition` (int #0x40) takes r5 = the task
   start-arg; declared 1-arg, so the `-3` temp became the arg → `ui_task_body_common(-3)` crash.
   Fixed the arity (funcs.h + syscall_traps.h + kernel_diag_taskstack passes param_1).
4. **B-11** un-relocated rodata dispatch table — the cpucom/ui_task5 `{value,handler}` table at
   0x105a7e24..0x105a7f64 kept original fn-ptrs; packed ui_task5_body dispatched into original code
   → derail. `scripts/find_rodata_fnptrs.py` (finder) + `scripts/gen_rodata_fnptrs.py` (gated
   relocator). NOTE: a blanket relocation of all 3422 candidate ptrs REGRESSES boot (data words that
   equal a function origVA) — relocation is gated on `CONFIRMED_TABLES`.

## Current boot blocker #5: garbage vtable in a cpucom context object
FRN_NO_REBOOT single-cycle trace halts in PACKED `cpucom_ctx_resubmit` (packed 0x106c511a, +0x56):
```c
iVar3 = (((vtbl_entry*)(*param_1))[13].fn)((int)((vtbl_entry*)(*param_1))[13].adj + (int)param_1);
```
`*param_1` (the context object's vtable pointer) reads **0x01000000** (garbage), so slot [13] at
vtable+0x68 reads `fn = @0x01000068 = 0xffffffff` → `jmp 0xffffffff` → reset.

`param_1` = the cpucom context = `*(int*)(ui_task5_param + 0x30)` (from `ui_task5_body`:
`cpucom_ctx_resubmit((int*)(*(int*)(param_1+0x30)), (void*)(param_1+4))`). So the context object's
vtable slot holds 0x01000000 instead of a real class vtable. 0x01000000 is a specific value (not
random) — likely a flag/constant mis-stored as the vtable, or a B-1/B-10-style field corruption in
the context's constructor, OR the context pointer itself (`*(ui_task5_param+0x30)`) is wrong.

### Concrete next step
Trace back: (a) what is `param_1` (the context addr) and is it a valid object? (b) who wrote
0x01000000 to `*param_1` (the vtable slot) — find `W4 @<ctx> =0x01000000` and its PC; (c) check that
constructor stock-vs-candidate. Also verify ui_task5_param (the task start-arg, now object+4 after
B-3b) and its +0x30 field are correct. Same method: `FRN_NO_REBOOT=1 FRN_FT=<fifo>`, grep the PC and
the `W4 @addr` writes.

## Tools (committed)
- `scripts/find_rodata_fnptrs.py` — un-relocated rodata fn-ptrs (3422 in 435 tables; vtables.asm is
  incomplete). `scripts/gen_rodata_fnptrs.py` — gated per-pointer relocator (CONFIRMED_TABLES).
- `scripts/classify_scaling.py` — B-9 detector (0 now). `scripts/find_missplits.py`,
  `scripts/harvest_asm.py`, `scripts/gen_syscall_traps.py`.

## Open class work (deferred — needs a smarter finder)
B-11 is widespread: 3422 un-relocated fn-ptrs in 435 rodata tables, most not on the early-boot path.
Relocating one-table-at-a-time (as the emulator reaches each) is slow (~2 min/build). A batched
safe finder = trace which rodata words are READ and then become the next PC (origVA) → those are
confirmed called-and-derailing fn-ptrs, relocate exactly those. Build that before grinding tables.

## Emulator forensics (reliable method)
`FRN_NO_REBOOT=1` (qemu-frn) halts at the FIRST wild jump (pc<0x1000) → single-cycle trace. Pair
with `FRN_FT=<file>`; grep `W4 @0xADDR` for stores, `PC=0x<packed>` for a function's run. Map
packed↔origVA via firmware.map + `@k10d … @ 0x<origVA>` headers. Disassemble the CANDIDATE at the
PACKED addr: `python3 -c "import frdis; frdis.FW=open('cpu/out/candidate_FWDC162B.BIN','rb').read(); frdis.run(LO,HI)"`
(from /home/memorai/k10d-re). `W1063B` build warnings flag B-10 sites.
