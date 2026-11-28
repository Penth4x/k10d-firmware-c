# Fujitsu FR (FR60Lite / Milbeaut MB91683) — architecture primer

Reference for reading this camera's machine code when comparing decompiled C against the
original disassembly. FR is obscure; **every fact here is triangulated across three
independent FR implementations — our `frdis.py` decoder (which decodes the real
`FWDC162B.BIN`), the Ghidra SLEIGH spec (`k10d-re/ghidra_fujitsu_fr/data/languages/`:
`fr.sinc` semantics, `fr.cspec` ABI), and the qemu-frn emulator (the runtime oracle) —
not from recollection.** If something is not stated here, do not assume it.

## Core
- **Big-endian.** 32-bit registers `r0`–`r15`. Instructions are **16-bit** (2 bytes); a few
  carry an immediate and are 4 or 6 bytes (`ldi:20` = 4, `ldi:32` = 6).
- ROM is mapped at VA **`0x10000000`** (file offset = VA − `0x10000000`).
- Loads/stores come in three widths: **word (32-bit)** `ld`/`st`, **halfword (16-bit)**
  `lduh`/`sth`, **byte (8-bit)** `ldub`/`stb`.
- C type sizes (from `fr.cspec`): `char`=1, `short`/`wchar`=2, `int`/`long`/pointer/`float`=4,
  `long long`/`double`=8. Alignment: 1→1, 2→2, 4→4, 8→4. So an array of the wrong element
  type strides by the wrong number of bytes — see B-12 below.

## Registers with special roles
| reg | role | how you recognize it |
|-----|------|----------------------|
| `r15` | **stack pointer (SP)** | `ld @r15+,rN` (pop), `st rN,@-r15` (push), `@(r15,N)` stack slots (N scaled ×4), `addsp`, `enter`/`leave` |
| `r14` | **frame pointer (FP)** | `@(r14,disp)` frame-local access — **disp is scaled by width** (see below) |
| `r13` | **index base** for `@(r13,rj)` | `ld/lduh/ldub/st/sth/stb @(r13,rj)` — **unscaled** |
| `r12` | **call-target register (idiom, not hardwired)** | `ldi:32 #addr,r12` then `call @r12` — any reg can be a target, but the compiler uses r12 |
| `rp` | **return-address register (dedicated, not a general reg)** | `call`/`call:d` set `rp = address of the next instruction`; `ret` returns via `rp`. Linkage does not consume a general register. |
| `ps` | program status (CCR/ILM/flags) | `mov ps,rN` / `mov rN,ps`, `ld @r15+,ps` |

Calling convention (from `fr.cspec` — authoritative, not inferred):
**arguments in `r4,r5,r6,r7`** (r4 = 1st, r5 = 2nd, r6 = 3rd, r7 = 4th); further args on the
stack. **Return value in `r4`** (a 5–8-byte / 64-bit return uses the pair `r4:r5`). When you
map a call's arguments, read the arg *register*, not the textual order: a value in `r4` is the
1st argument, `r5` the 2nd, and so on.

**Register save conventions (from `fr.cspec`) — read this before claiming a "saved value":**
- **Callee-saved (preserved across a call): `r8, r9, r10, r11, r14`.** A value sitting in one
  of these across a `call` is *expected to survive* — that is the ABI, **not** evidence of a
  special "save the return value" pattern. Do not invent a data-flow finding from it.
- **Caller-saved / scratch: `r4,r5,r6,r7` (args/return) and the other low temporaries** — these
  may be clobbered by a call, so the compiler reloads them afterward if still needed.
(This is the exact trap behind the earlier `r10` false finding: `r10` was just a callee-saved
temp, correctly preserved; it was not a hidden return-value save.)

## Delay slots — the thing most easily misread
Delayed transfer instructions carry a **`:d`** suffix: `call:d`, `jmp:d`, `ret:d`, and the
delayed branch family (`bra:d`, `beq:d`, `bne:d`, … — decoder hi-nibble `0xF`; the plain,
non-delayed branches are hi-nibble `0xE`).

**The single instruction immediately after a delayed transfer is its DELAY SLOT, and it
executes BEFORE control transfers.** Consequences you must apply:
- A register written in the delay slot of a `call:d` **is already set when the callee runs**,
  so that value is an **argument to THAT call**, not to a later one. Do **not** conclude a
  delay-slot `ldi`/`mov` "belongs to the next call" because it is printed after the call line
  — that is backwards.
- The saved return address / fall-through is the instruction **after** the delay slot.

Example (verified): `call:d @r12` / `ldi:8 #0x64,r5` — r5 is set to 0x64 **for the function
in r12**; the decompiler rendering that call's 2nd argument as `100` is correct.

**To read a `call:d`'s arguments, look at the argument registers AS OF ITS OWN DELAY SLOT —
not at an earlier instruction.** This matters most with two delayed calls close together,
because each call's first-argument setup often lives in that call's delay slot. Worked example
(verified against the real disasm):
```
call:d @r12        ; call A
mov r9,r4          ; delay slot of A  -> A's 1st arg r4 = r9
                   ; (after A returns, r4 = A's return value, call it V)
mov r4,r5          ; r5 = V
ldi:32 #...,r12    ; load B's address
call:d @r12        ; call B
mov r10,r4         ; delay slot of B  -> B's 1st arg r4 = r10   (NOT V!)
```
So B is called with `(r4 = r10, r5 = V)`. A common mistake is to carry r4 = V forward from
`mov r4,r5` and report B's 1st arg as V — but B's delay slot `mov r10,r4` overwrites r4 with
r10 before B runs. Always trace the arg register down to, and including, the delay slot of the
exact call you are describing.

## Addressing modes
| form | meaning | scaling |
|------|---------|---------|
| `@rj` | register indirect | — |
| `@r15+` | post-increment (pop) | — |
| `@-r15` | pre-decrement (push) | — |
| `@(r13,rj)` | base `r13` + index `rj` | **unscaled** — effective offset is the raw `rj` byte count |
| `@(r14,disp)` | frame-local, signed 8-bit disp | **scaled by access width**: `ld` disp×4, `lduh` disp×2, `ldub` disp×1 |
| `@(r15,N)` | stack slot, unsigned 4-bit N | ×4 (word) |

**Arithmetic immediates do NOT scale — only addressing modes do.** `addn #N,Ri` and `add #N,Ri` compute `Ri = Ri + N` with the raw 4-bit immediate (0–15); there is no ×4/×width multiply. Scaling by the access width happens ONLY inside the `@(r14,disp)`/`@(r15,N)` addressing modes above. So a loop index advanced by `addn #4,r8` strides **4 bytes**, not 16 — if four per-iteration checks are at `base+0x88,+0x8c,+0x90,+0x94` with `addn #4` between them, that is a 4-byte stride and matches a C that reads `+0x88,+0x8c,+0x90,+0x94`. Do not read `addn #N` as `+N×4`.

The `@(r13,rj)` **unscaled** index is the heart of the **B-12 stride** bug class: the C
`(&DAT)[i]` strides by `sizeof(decl)`, but the asm index `rj` is a **raw byte offset** — if
the table is byte/halfword data wrongly declared `uint32_t`, the strides disagree. Always
check the declared element width against the load/store width actually used.

## Sign vs zero extension (a common decompile divergence)
**Every load is UNSIGNED (zero-extended):** `ld`, `lduh`, `ldub` all zero-extend. There is no
signed-load opcode. A *signed* byte/halfword value is produced by an **explicit** following
`extsb` / `extsh` (and `extub`/`extuh` zero-extend). So:
- `ldub @rj,ri` alone → `ri = (uint8)` zero-extended. C should read `(uint)*(byte*)…`.
- `ldub …` **then** `extsb ri` → signed byte. C should read `(int)*(char*)…`.
When the C's signedness disagrees with the presence/absence of an `extsb`/`extsh`, that is a
real finding. When it agrees, it is not.

## Idioms worth recognizing (so you don't flag them as bugs)
- **Constant build:** `ldi:8` loads an 8-bit value (zero-extended); larger constants use
  `ldi:20` / `ldi:32`. `ldi:8 #0x64,r5` sets r5 = 0x64 exactly.
- **Call target:** `ldi:32 #addr,r12` + `call @r12` (or `call:d @r12`) is one logical call to
  `addr`; the `ldi:32` is just materializing the address.
- **Divide** is a multi-instruction sequence: `div0s`/`div0u`, `div1`×n, `div2`/`div3`/`div4s`.
  **Multiply:** `mul`/`mulu` (32→64 via MDH/MDL), `mulh`/`muluh` (16-bit). One C `/` or `*`
  can expand to several instructions — not a bug.
- **Register-window / block ops:** `enter`/`leave` (frame), `ldm0`/`ldm1`/`stm0`/`stm1`
  (multi-register load/store), `dmov` (direct-address move via r13/stack). These move several
  registers/words in one instruction.
- **Bit ops on memory:** `bandl/bandh/borl/borh/beorl/beorh/btstl/btsth #n,@ri` operate on a
  nibble of the byte at `@ri`.

## When to raise a FINDING vs stay silent
We compile the decompiled C with `fcc911s`, which is **not** the original build compiler, so
compare fcc-asm (and the original disasm) for **equivalence, not identity**. Benign and
**not** findings: register allocation, instruction scheduling, idiom/peephole choices,
equivalent addressing. Real findings (the decompiled C does **not** faithfully represent the
machine code): a different operation, a wrong offset/width/mask/immediate, a missing or extra
memory access or side effect, mismatched sign/zero extension, or control flow that differs.
