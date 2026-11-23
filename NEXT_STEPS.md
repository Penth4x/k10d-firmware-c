# Next steps — open investigation (handoff)

## Where boot is now
The candidate **no longer crashes/reboots** — it now **spins** (runs continuously, never reaches the
menu). codiff: stock ~160–207k fn-entries (reaches menu) vs candidate ~4–7M (spinning) in the same
wall. The spin is a task **blocked in `realos_rcv_mbx` (mailbox receive)** whose message never
arrives, so the dispatcher idles and the timer ISR fires repeatedly (first structural divergence at
fn-entry **1903**: `timer_interrupt_handler → get_lens_update_status(act_tsk) → rtos_dispatch_entry →
act_tsk_syscall_dispatcher → increment_timeout_counter`). That block is a **symptom** of the spin.

This matches a **handover/yield deadlock** seen before (d310): the currently-running task never
reaches a hand-over point, so the operational tasks it should feed stay blocked waiting on events
(flag/mailbox) that are never produced. The producer = whatever path is supposed to send/notify but
never completes its setup/handover. (Prior "76M insns" progress was bogus — garbage execution after a
crash counted by the weak-era NO_REBOOT. Use codiff function/arg/mem, never instruction counts.)

## FIXED this session (committed, NOT pushed — Andrew pulls/pushes)
firmware-c (master):
1. **B-11 (reloc class)** `297af7dd` — generators refuse to relocate instruction immediates (ldi:32
   operands). 6 bad `confirmed_fnptrs` dropped (165→159); they had corrupted a `call` in
   `parse_float_string_to_fixed` → the `ec_configure`→call-0 cascade. Boot 730k→6.7M.
2. **B-9 (scaling)** `a464c6fa` — `settings_load_from_flash` dest `&DAT_8001ded8 + iVar2` scaled ×4
   (DAT is uint32_t*); the 0x344-byte settings copy overshot ~3× and smeared data across the EC
   objects (`cls_1059f284.field_0x3c` corrupted → ec_configure dispatch through garbage → 313× reboot
   loop). Added the missing `(char*)` cast. **This cleared the crash/reboot.**
3. **build-integrity** `20fe8572` — removed `USES_64_BIT` (funcs.h declares 60 uint64_t functions so
   every file needs the type; the per-file gate only "worked" via stale objs). 64-bit typedefs now
   unconditional; build.sh **strips W1450B** and surfaces every other warning prominently
   (out/warnings.txt). **W1549B "used before set" now surfaces the incoming-register class for free.**
4. **tooling** `3fe48a77` — boot_diff/codiff FIFO-stream (disk-safe), codiff `CAND`/`MAP` env override.
5. **harvest** `rtos_dispatch_entry` — uITRON context switch harvested to byte-faithful asm
   (`cpu/gen/`); it read 15 incoming registers → fcc saved garbage. Real fix, did NOT clear the spin.

qemu-frn (frn-publish):
- `ece677db` — **reset-vector reboot trap** (FRN_NO_REBOOT halts on re-entry to 0x10008000, not just
  out-of-range) + **FRN_UNINIT** uninitialized-SDRAM-read detector (stock = 0 uninit reads; it watches
  SDRAM memory only — register-level uninit is invisible to it).

## NEXT: the boot spin (handover / mailbox wait)
Register-level arg-diffs are all **benign** (verified): `heap_alloc_2 r5` unused; `r6=86d4≠86d0` is a
+4 stack-local offset in the heap-alloc subtree (mempool_get_block has an unused `uintptr_t sp;`,
restored on return); `r7` is caller-saved. The divergence is in **memory/scheduling state, not
registers** — codiff REGS can't see it.
1. Find the mailbox/flag `realos_rcv_mbx` (0x100111b0) polls (window `FRN_FT_PC` at it with mem), then
   **write-watch it** (`FRN_WRWATCH`) in stock vs candidate: stock's producer sends/notifies there,
   the candidate's doesn't. The missing write identifies the producer that should have run but didn't.
2. Then trace up: is the producer a task never created/activated, or the running app-main task never
   reaching its post-init handover (d310's "last-active task never yields")? Decode the candidate's
   hottest non-idle PC and the app-main post-init handover step. **+0x3c forcing is BANNED.**

## Limited audit — 26 on-path incoming-register (W1549B) functions (harvest as needed)
Of 367 incoming-register functions in the tree, 26 are on the executed path (rest unreachable =
harvesting them is churn). Harvest one, re-codiff, repeat (BESTIARY workflow). Top on-path:
`initialize_rtos_kernel_state_1000eb54/eb68` (98/97), `kernel_timeout_queue_insert` (19),
`allocate_kernel_task_slot` (10), `dispatch_context_switch`, `rtos_sched_start_gate`,
`find_free_tcb/queue_slot` (×several), `rtos_dispatch_tail_restore`, `restore_interrupt_stack_frame`,
`check_task_state_transition`, `cre_tsk_insert_setup`, `firmware_update_handler`.
NOTE: some compile to **accidentally-correct** code (e.g. `return_r4_passthrough_1053706c` → bare
`RET`, returns incoming r4). Check the generated asm / re-codiff before harvesting — don't harvest blind.

## Tools
- `scripts/codiff.sh` — THE differential. `WALL=` time-bounded; `REGS=1` arg diff; `FIRST=0` full
  landscape; `KEEP=<dir>` saves fnseq/rseq; `CAND=`/`MAP=` override to diff a backed-up candidate.
  Compare FUNCTIONS/ARGS/MEM, never raw PC/instruction counts (candidate runs packed addrs).
- `FRN_NO_REBOOT=1 FRN_DERAIL=1` — single-cycle, halts at first crash OR reboot, dumps last 64 PCs.
- `FRN_UNINIT=1` — flags first read of never-written SDRAM. `FRN_WRWATCH=<hex>[,LEN]` — write-watch.
- `FRN_FT_PC=<hex> FRN_FT_WIN=<n> FRN_FT_FULLREGS=1` — windowed full-regs+mem trace at a PC.
- `scripts/harvest_asm.py <fn>` — byte-faithful asm for un-recompilable fns (own mis-split check).
- Pre-harvest candidate backup: `/tmp/k10d-run/backup-18-07-bfix/` (B-9 fix, pre-harvest). Current
  `cpu/out/candidate_FWDC162B.BIN` = post-harvest.
