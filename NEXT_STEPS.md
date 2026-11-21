# Next steps — open investigation

Boot progresses further with each fix. Two root-cause classes fixed & committed this session
(B-9, B-10); the current blocker (#3) is a register-allocation cascade that needs careful analysis.

## RESOLVED #1: deactivate_dual_object_pair null-vtable — B-9 pointer-arith scaling (commit 15f0adc9)
`cls_1059e430_new`'s clear loop used `&field + idx` (scaled by sizeof) instead of `(int)&field +
idx`, overrunning its 0x104 object 4× and zeroing P+8 (the adjacent cls_105a0828 object's secondary
vtable). Swept 17 functions tree-wide (`scripts/classify_scaling.py`). The earlier "heap overlap"
theory was wrong (artifact of reading the boot-loop's final state) — retracted. See BESTIARY B-9.

## RESOLVED #2: app_obj_factory null-vtable — B-10 64-bit-shift miscompile (commit 8fd38ac8)
FR masks shift COUNT to 5 bits, so `lsl/lsr #0x20` (shift by 32) are no-ops. Ghidra's
`uVar14 = CONCAT44(hi,lo); pvVar7 = (void*)(uVar14 >> 0x20)` (unreliable 64-bit modelling) compiled
to `pvVar7 = hi | lo` → wild pointer `0xea4a4bd8` → null-vtable crash. Fix: drop the 64-bit
intermediate, use a plain `void *objResult` set to each case's real object (matches stock: object =
r4→r8). fcc flags every B-10 site with `W1063B shift count is too large`, but **not all are bugs**
(a spurious `(ulonglong)<32bit> >> 0x20` is cancelled by the same masked no-op → accidentally
correct). See BESTIARY B-10. TODO(class): build-wide `W1063B` sweep to classify the other sites.

## Current boot blocker #3: ui_task_body_common param = -3 (REGISTER-ALLOCATION CASCADE — hardest class)
FRN_NO_REBOOT single-cycle trace halts at `ui_task_body_common` (origVA 0x1045a16a, packed
0x1080a348): `param_1 = 0xfffffffd (-3)` → dispatches `*(param_1 + 0x10)` as a vtable →
`call @garbage` → reset.

**Mechanism (fully traced, NOT yet fixed):**
- `kernel_diag_taskstack` (origVA 0x1045a0b2, packed 0x107874c8) returns a bool but computes its
  internal `iVar1 = -3` temp. **Candidate fcc allocates that temp to R5** (`ldi #0xfd,r5; extsb r5`);
  **stock uses R0** (`ldi #0xfd,r0`) and does `mov r4,r5`, leaving `r5 = param_1 (= object + 4)`.
- A user-mode task-creation path relies on `r5` still holding that object after the
  `kernel_diag_taskstack` call, and passes it as the `sta_tsk` **stacd** (start arg). Stock gets the
  object; the candidate gets `-3`. The -3 flows unchanged through the void caller
  `call_helper_with_offset_10492a5c` (0x10492a5c) and ancestors into the cre/sta_tsk syscall
  (kernel PC 0x1000d3fe stores `W4 @TCB+0x24 = r8 = 0xfffffffd`, task body r4 = 0x1080a348, tskid=2).
- When the task runs, `param_1 = -3` → crash. The intended arg is the singleton object
  (`get_or_create_singleton_object_10492ade() + 4`).

**Why it's hard:** every function is individually correct; the bug is an *inter-function register
dependency* the original relied on (object live in r5 across a call) that the recompile's different
register allocation doesn't reproduce. `r5` is caller-saved, so this was always fragile in the
original.

**Fix approaches (unsettled — analyze, don't rush):**
1. Find the user-mode function that calls `sta_tsk` and `kernel_diag_taskstack` on this path; its
   decompiled C likely reads the start-arg from a stale/incoming register (B-3 `__frv_reg_unset(5)` /
   `caller_r5`). Recover the real arg (the object) and pass it explicitly. Use `stock.rseq` to walk
   the cre_tsk caller chain (the B-3 method from the bestiary).
2. If the function boundary is the problem (object-construction + task-creation split across a call
   that clobbers r5), the mis-split may need rejoining.
NOT a quick C edit — verify against stock before touching.

## Tools (committed)
- `scripts/classify_scaling.py` — B-9 detector (byte-stride/mixed ⇒ bug; idx++ ⇒ array walk). 0 now.
- `scripts/find_missplits.py` — decompiler-shredded functions (117 genuine; delay-slot-aware).
- `scripts/harvest_asm.py` — byte-faithful harvest of fcc-can't-recompile fns (only
  `initialize_rtos_kernel` is a genuine permanent asm case).

## Emulator forensics (reliable method)
`FRN_NO_REBOOT=1` (qemu-frn) halts at the FIRST wild jump (pc<0x1000) → a **single-cycle** trace;
this is what let all three blockers be isolated (the boot-loop confounds multi-cycle traces). Pair
with `FRN_FT=<file>` for a PC+reg+mem trace; grep `W4 @0xADDR` for stores, `PC=0x<packed>` for a
function's run. Map packed↔origVA via firmware.map + the `@k10d … @ 0x<origVA>` source headers.
Disassemble the CANDIDATE at the **packed** addr (overlay leaves original bytes at origVA — TOOL-2):
`python3 -c "import frdis; frdis.FW=open('cpu/out/candidate_FWDC162B.BIN','rb').read(); frdis.run(LO,HI)"`
(from /home/memorai/k10d-re). `W1063B` build warnings flag every B-10 candidate site.
