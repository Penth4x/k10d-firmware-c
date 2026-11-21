# Next steps — open investigation

## RESOLVED: deactivate_dual_object_pair null-vtable crash — root was B-9, NOT a heap overlap
Fixed in commit `15f0adc9 fix(B-9) …` (see BESTIARY.md B-9). The earlier "heap overlap /
embedded-vs-separate / pool-block-size" theory in this file was **wrong** and is retracted. The
FRN_NO_REBOOT single-cycle trace (below) showed what really happened:

- `P` (cls_105a0828 @ 0x805527d0, 0x12c) is a single **multiply-derived** object; its secondary-base
  vtable slot is at `P+8` (0x805527d8). Construction correctly set `P+8 = 0x105a08b8`.
- Then `cls_1059e430_new`'s clear loop — a **B-9 pointer-arith scaling** bug — overran *its own*
  0x104 object (six stores used `&field + idx` instead of `(int)&field + idx`, so the 0x10 index
  scaled to a 0x40 stride) and zeroed `P+8`. `deactivate_dual_object_pair` then read `*(P+8)=0` as a
  vtable, dispatched slot [3] → `call @0` → reset (the ~55-70×/25s boot-loop).
- Fix: byte-address all such stores (17 functions tree-wide, `scripts/classify_scaling.py`).
- Verified: P+8 now stays 0x105a08b8; deactivate dispatches cleanly; boot advances ~208K insns.

## Current boot blocker: null vtable in `app_obj_factory` (origVA 0x104957de, packed 0x1063219e)
FRN_NO_REBOOT single-cycle trace halts at packed **0x1063274c** (+0x5ae, near the function end):
```c
(((vtbl_entry*)(*(int *)((int)pvVar7 + 0xc)))[27].fn)(... pvVar7 ...);
```
`*(pvVar7 + 0xc)` (the object's vtable pointer) reads **0** → slot [27] is at vtable+27*8 = `0xd8`,
so it reads `fn @0xd8 = 0`, `adj @0xdc = 0` → `call @0` → reset. (The trace's `R4 @0x000000d8 =0` /
`@0x000000dc =0` are exactly those vtable-slot reads off a null base.)

`app_obj_factory` is a big `switch` that allocates one of ~0x18 object kinds (each a
`alloc_*_object` / `cls_*_new`), takes the high word `pvVar7 = uVar14 >> 0x20` as the built object,
then dispatches slot [27] of its vtable@+0xc. Note the `pvVar7 == 0` branch calls
`console_printf(&DAT_105b5158, …)` — an error path the firmware doesn't expect to hit — and then
dereferences `pvVar7` anyway. So either the allocation returned a bad/0 object, the wrong `switch`
case ran, or the constructor that built this object left vtable@+0xc unset (a B-6 null-vtable, or a
dropped-store / wrong-offset write in that specific constructor).

### Concrete next step
On the FRN_NO_REBOOT single-cycle trace: walk **back** from 0x1063274c to find (a) the `switch`
selector value, (b) which `alloc_*_object`/`cls_*_new` ran, and (c) `pvVar7` and `*(pvVar7+0xc)`.
Then audit that constructor: does stock write a vtable at the object's +0xc, and does the candidate?
Compare the constructor's vtable-install store stock-vs-candidate (likely B-6 null-vtable or a
mis-offset/dropped store). Same forensic method as B-9: `FRN_NO_REBOOT=1 FRN_FT=<fifo>` → grep the
packed PC + the `W4 @<objaddr+0xc>` write.

## Tools (committed)
- `scripts/classify_scaling.py` — B-9 detector: finds unguarded `*(T*)(&ptr->field + idx)` and
  classifies by loop increment (byte-stride/mixed ⇒ bug; idx++ ⇒ intended array walk). Now reports 0.
- `scripts/find_missplits.py` — decompiler-shredded functions (117 genuine; delay-slot-aware).
- `scripts/harvest_asm.py` — byte-faithful harvest of fcc-can't-recompile fns. Only
  `initialize_rtos_kernel` is a genuine permanent asm case.

## Emulator forensics (reliable method)
`FRN_NO_REBOOT=1` (qemu-frn) halts at the FIRST wild jump (pc<0x1000) so the trace is a **single
boot cycle** — this is what finally let the deactivate crash be isolated (the boot-loop confounded
every prior multi-cycle trace). Pair with `FRN_FT=<file>` for a PC+reg+mem trace; grep `W4 @0xADDR`
for stores, `PC=0x<packed>` for a function's execution. `FRN_WRWATCH` still only fires for very wide
ranges (>16MB) — the fifo+grep method remains the fallback.
