# Next steps — open investigation

Boot advanced from the ~5.3M-insn deactivate boot-loop to **~76M insns** this session (14×), through
six distinct root causes. Each fix revealed the next. All fixes committed (not pushed).

## FIXED this session (committed)
1. **B-9** pointer-arith scaling (17 fns) — `&field + idx` overran clear loops, zeroed adjacent vtables.
2. **B-10** 64-bit shift ≥32 = masked no-op — `CONCAT44(hi,lo)>>0x20` → `hi|lo` wild ptr (app_obj_factory).
3. **B-3b** dropped syscall arg — `check_task_state_transition` r5 (task start-arg) not passed → task(-3).
4. **B-11** un-relocated rodata dispatch tables — packed code derailed into original firmware code.
   Batched, emulator-confirmed relocation: `scripts/find_called_fnptrs.py` (read-then-executed = a real
   called fn-ptr) → `scripts/confirmed_fnptrs.txt` → `scripts/gen_rodata_fnptrs.py`. 165 relocated.
   NOTE: 3 dual-use words (0x105f923c/924c/92cc) are read as DATA by cls_105f9250_new — EXCLUDEd.
   NOTE: a blanket relocation of all 3422 candidates regresses boot.
5. **B-12** vtable this-adjustment is 16-bit, was typed `int32_t` — every multiple-inheritance dispatch
   moved `this` by a wild amount. One header line (`int16_t adj`). **Biggest single win: +1.8M insns.**

## Current boot blocker #6: stack-pointer corruption (~76M insns)
`init_object_with_two_ids_1052b824` (packed ~0x1074d7xx) runs its epilogue
`leave; ld @r15+,sr1; ldm1 #0xf; ret` with **r15 (SP) = 0x10647e0e** — which is `build_mode_config_block
+0x96`, **inside the packed code region, not a valid SDRAM stack**. It pops garbage (rp=0xccc0a5c4),
`ret` jumps there, and execution runs linearly through unmapped 0xccc…0xd52a memory until the timeout.
So SP was corrupted to a packed-code address somewhere before 76M.

FRN_NO_REBOOT did NOT catch this (it only halts on pc<0x1000; this is a HIGH wild jump).

### Concrete next steps
1. **Extend FRN_NO_REBOOT** (qemu `target/frn/op_helper.c`) to also halt when `pc` leaves
   `[0x10000000, 0x10900000] ∪ [0x80000000, 0x88000000]` (valid code ∪ SDRAM). Then a single-cycle
   trace stops AT the bad `ret`/jump instead of running millions of garbage insns.
2. Trace where `r15` became 0x10647e0e: a stack overflow (task stack too small / wrong size), a
   task-switch restoring a bad SP from a TCB, or a wild SP write. Grep the trace for the SP transition
   (`W4 @<TCB+sp_off>` or an `ldi`/`mov` into r15). Reaching 76M suggests the firmware may be near a
   running main-loop state, so this could be a deep/rare path.

## Tools (committed)
- `scripts/find_called_fnptrs.py` + `confirmed_fnptrs.txt` + `gen_rodata_fnptrs.py` — batched B-11
  relocation (emulator-confirmed, dual-use EXCLUDE). `scripts/find_rodata_fnptrs.py` — raw finder
  (3422 candidates in 435 tables; most not on the boot path).
- `scripts/classify_scaling.py` (B-9, reports 0), `find_missplits.py`, `harvest_asm.py`,
  `gen_syscall_traps.py`.

## Workflow for B-11 (recurring as boot advances)
Each FRN_NO_REBOOT trace that ends in a packed→original derail:
`python3 scripts/find_called_fnptrs.py <trace>` (accumulates confirmed addrs) →
`python3 scripts/gen_rodata_fnptrs.py` → rebuild → re-trace. If a relocation regresses an EARLIER
point, bisect confirmed_fnptrs.txt to find the dual-use word and add it to the EXCLUDE set.

## Emulator forensics
`FRN_NO_REBOOT=1 FRN_FT=<file>` single-cycle. grep `W4 @0xADDR` stores, `PC=0x<packed>` runs. Map
packed↔origVA via firmware.map + `@k10d … @ 0x<origVA>`. Candidate disasm at the PACKED addr:
`python3 -c "import frdis; frdis.FW=open('cpu/out/candidate_FWDC162B.BIN','rb').read(); frdis.run(LO,HI)"`
(from /home/memorai/k10d-re). `W1063B` build warnings flag B-10 sites.
