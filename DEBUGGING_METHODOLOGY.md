# K10D firmware-c — Differential Debugging Methodology

The goal is a **faithful recompile**: the candidate (`cpu/out/candidate_FWDC162B.BIN`) must
behave like stock `FWDC162B.BIN`. Stock is the oracle. Every bug is a point where the
candidate's behavior diverges from stock. **Do not mask symptoms; find the divergence and make
the candidate match stock.**

The emulator is `/home/memorai/qemu-frn/build/qemu-system-frn -machine k10d -bios <bin> -display none -serial null -monitor none`.
FR is **big-endian**, 16-bit instructions. VA→file offset = VA − 0x10000000.

---

## Rule 0 — Strong tools are DEFAULT-ON. Never infer from weak proxies first.

Every candidate run gets uninitialized-read and derail detection on, because there is no reason
not to. Reaching for selector/task-id inference, hand-decoded opcodes, or a static-disassembly
"story" *before* running the purpose-built differential tools is the mistake that wastes hours
(and builds confident-but-wrong narratives that then have to be retracted).

```bash
FRN_UNINIT=1                         # candidate-only reads of SDRAM never written since power-on,
                                     #   reported AT the read = the root divergence, not the crash
FRN_CODECHECK=scripts/code_targets.txt  # indirect call/jmp/ret to a non-entry/non-returnsite = derail
```

Both of these, and the function-set diff, must be **diffed against stock** — stock makes some
benign uninit reads and the CODECHECK target list has gaps (legit return sites it lacks will
false-positive). **Only a candidate-ONLY signal is a real divergence.** Always confirm the signal
does NOT also fire in stock before trusting it (validate the oracle on a known-good input).

---

## The procedure (in order)

1. **Oracle first — pick an execution-based success signal, not an inferred one.**
   For "does the menu render?": watch the render functions actually execute, don't infer from a
   scheduler value.
   ```bash
   FRN_DISAS_LO=0x1046b7dc FRN_DISAS_HI=0x1046b840   # screen_mgr_task / screen_mgr_render window
   ```
   Confirm it is discriminating: fires in stock, not in the broken candidate.

2. **Function-SET diff (name-resolved, handles packed→orig).** What path does the candidate
   fail to reach (stock-only), and what wrong path does it take (candidate-only)?
   ```bash
   REGS=0 WALL=140 bash <scratch>/codiff_mine.sh     # fnseq diff via harness2/fnseq.py + catalog
   # then: comm -13/-23 over sort -u of traces/stock.fnseq and traces/cand.fnseq
   ```
   Empty candidate-only + thin stock-only (leaf math helpers) ⇒ the divergence is **inside** a
   shared function (wrong data/width/count), not a missing call.

3. **FRN_UNINIT on the candidate**, grouped by reader PC and by address. The **earliest** read
   is closest to the root; the **highest-volume** reader is often the load-bearing consumer.
   Resolve each reader + its caller (`rp`) to a function (catalog `functions.va`, or parse the
   Softune `firmware.map` for packed addresses). Then trace back to the missing WRITE.

4. **Register-sequence diff** (`REGS=1 codiff_mine.sh` → `fnseq.py rdiff`) finds the first point
   register state diverges. **Caveat:** it is noisy — it flags leftover (non-argument) registers
   and interrupt-timing jitter (`timer_interrupt_handler` appearing at a slightly different
   instruction). Before trusting an `ARG-DIFF`, confirm the register is actually an argument the
   callee uses, and that the divergence propagates (e.g. reaches the real allocator), rather than
   dying as a dead register.

5. **Only now** read the decompiled source of the pinned function (`cpu/src/.../*.c`, which *is*
   the FR decompiler's output) and compare its logic against stock. Use the catalog / decompile
   to understand code — **not** qemu op-byte narration (that's for confirming a behavioral
   divergence, not for decoding an instruction).

---

## Recurring bug classes (recompile-fidelity)

- **Wrong-width read/write (byte field declared `uint32_t`).** A byte flag at `+0xNN` read as a
  word pulls in the uninitialized bytes after it and, big-endian, mis-tests the flag. A wrong
  width is *never* benign even if one caller ignores the result — fix it, and **grep the class**
  (the fix for the write side does not fix the read side; e.g. B-12's `cls_105a023c_new` write
  fix left `obj_flag_1c_get`'s word read broken). Read a byte field byte-wide:
  `*(uint8_t *)&param_1->field_0xNN`.
- **Dropped argument / reused-register mislabel.** The decompiler relabels a reused register;
  a call ends up passing the wrong value (often `param_1` instead of the just-allocated struct).
  Confirm with the register trace that the callee actually *receives* the wrong value.
- **Count/size stomp → over-iterate / over-read.** An iterator loops a wrong count and reads past
  the real array into uninitialized SDRAM or allocator metadata. Distinguish over-iteration from
  init-skip by **comparing the iteration count stock vs candidate** (identical count ⇒ not a
  count bug).

---

## Traps that cost time this project (do not repeat)

- Concluding a root from a single ic-snapshot near a late-firing event, then retracting. Measure
  the full window; FRN_FT runs fewer ips so a wall-clock FT window reaches far less instruction
  count than a plain run — never read "hang" from an FT window ending early.
- Building a static-disassembly narrative about a function **without first checking it executes**.
  (The `rtos_context_switch` LDUH theory was wrong: that function never runs in stock or candidate
  during boot.)
- Trusting a checker (CODECHECK/UNINIT) without diffing stock — false positives from an
  incomplete target list or from stock's own benign reads.
- Flip-flopping on big-endian high/low halves from reasoning alone. When you catch yourself
  reversing a conclusion, stop reasoning and read the actual bytes / let the interpreter narrate
  register values.

---

## Build management (READ BEFORE BUILDING — do not double-build)

`cpu/build.sh` has **incremental compilation** (only `.c` whose `.obj` is older than the source,
build.sh line 21) but **always relinks the full object set**, and the **link alone takes 8+ minutes**
(`fplnks.exe` over thousands of objects). So a one-file edit ≈ seconds compile + **8+ min link** +
overlay ≈ **~10 minutes** — budget for it, and **batch multiple verified fixes into one build** since
every build pays the full link. The **~1 hour** cost is a *clean* rebuild only (the `cpu/out/obj/*.obj`
cache deleted → every file recompiles). Nothing in build.sh deletes the cache; don't delete it unless
you want a full rebuild.

**Two builds must never run at once.** They race on the shared `cpu/out/obj/` object set and on
wineserver — a stale assembler from build A can overwrite an object while build B links, corrupting
the image. So:

1. **Before starting a build, check nothing is already building** — and check for the REAL binaries,
   not just the wrappers. `FLNK911S.EXE`/`FASM911S.EXE`/`fcc911s.exe` are thin wrappers that spawn the
   actual tools `fplnks.exe` / `fasm.exe` / `fcpp.exe`; those can be orphaned and keep running after a
   wrapper is killed, so grep for both:
   ```bash
   ps -eo pid,args | grep -iE 'build\.sh|FASM911|FLNK911|fcc911s|F2MS|fplnks|fcpp' | grep -viE 'winedevice|wineserver|grep'
   ```
   Non-empty ⇒ a build is in progress (or an orphaned linker survives). Do NOT start another — watch or
   clean up first. An orphaned `fplnks.exe` racing a new build corrupts the link.

2. **Watch an in-progress build:** tail its log; the phase markers are `[1] compile`, `[2] assemble`,
   `[3] link`, `[4] S-records + overlay`. It's done when it prints `-> .../candidate_FWDC162B.BIN`
   and `candidate_FWDC162B.BIN`'s mtime updates. Launch builds with `run_in_background` and read the
   task output file; do not block a foreground shell on them.

3. **Stop a build PROPERLY (never `pkill`/`killall` — those are colony-wide and the toolguard blocks
   them):**
   - `TaskStop` the build's task id (kills the `bash cpu/build.sh` shell), THEN
   - kill any orphaned wine children **by explicit PID**: `kill -9 <pid>` for each of `FASM911S.EXE` /
     `FLNK911S.EXE` / `start.exe` / `fcc911s.exe` / `F2MS` **AND the real tools `fplnks.exe` / `fcpp.exe`
     / `fasm.exe`** left in the `ps` list. Killing only the wrapper leaves `fplnks.exe` running (orphaned,
     reparented to init) — that is exactly how 3 linkers ended up racing. Re-run the `ps` grep until it is
     empty. Leave `winedevice.exe` and `wineserver` (shared wine daemons) alone.
   - A link killed before phase [4] leaves `candidate_FWDC162B.BIN` untouched (the overlay never ran),
     so the on-disk image stays whatever the last *complete* build produced — check its mtime.

## Fix + verify

1. Edit `cpu/src/.../*.c`. Comments describe *current* code; the "why/history" goes in the commit
   message, not the source.
2. Build incrementally (see Build management above):
   `SOFTUNE=/home/memorai/k10d-re/softune FW131=/home/memorai/k10d-re/FWDC162B.BIN bash cpu/build.sh`.
   Success ends with `-> out/candidate_FWDC162B.BIN`; a real compile warning/error is surfaced in the
   `!!!! COMPILER WARNINGS / ERRORS` block (W1450B "long long" is suppressed noise). Prompts/strings
   are compiled in, so the firmware must be rebuilt — a restart is not enough.
3. Re-run the oracle (step 1) on the new candidate. Confirm the targeted divergence is gone AND
   no new candidate-only UNINIT/derail appeared.
4. Commit with the Ferro identity, **no `Co-Authored-By`**, no push without Andrew's sign-off.
