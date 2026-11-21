# Next steps — open investigation

## Current boot blocker: deactivate_dual_object_pair null-vtable (HEAP OVERLAP)

The clean committed candidate boot-loops (~55–70×/25s). Root chain traced:

`deactivate_dual_object_pair` (origVA 0x104f9392, packed 0x106caace) reads a **null 2nd
vtable pointer** `*(P+8)=*(0x805527d8)=0`, dispatches `((vtbl)0)[3].fn` → `call @0` → reset.

- `P = 0x805527d0` is a `cls_105a0828` object (vtable 0x105a0828 at P+4, valid).
- `P+8` is written by **two** constructors that **overlap in heap memory**: the `cls_1059e430`
  object at `0x80552754` (whose `field_0x84` == P+8) *and* `cls_105a0828_new`.
- Stock's **last** write to P+8 is `cls_105a0828_new` @0x1043d506 (valid vtable); the
  candidate's last write is `cls_1059e430_new`'s clear loop @packed 0x1067fe54 (**zero**).
  So whichever constructs last wins, and the two objects should **not** occupy the same bytes.
- `cls_1059e430_new` (origVA 0x10427d7a) clear loop is VERIFIED faithful. So the bug is the
  **overlapping allocation**, not the ctor.

### The allocator
RTOS fixed-size memory **pools**: `heap_alloc`(0x10459e10) → `get_system_heap`(0x10459b3e,
pool-array pointer global **0x8002f088**) → `mempool_get_block`(0x10459b70, unit 127). Pool
descriptor = `poolbase + idx*0x14`; **block size = `(short)*(desc+0xc)` (16-bit)**. A wrong
pool block-size (too small) → adjacent blocks collide → the overlap. The 16-bit read is a
**B-2 short-split** risk (a 32-bit pool-size store emitted as truncated halves).

### Concrete next step
Dump the pool-descriptor block sizes at `*(0x8002f088)` (a **deterministic** global, unlike the
non-deterministic heap objects — heap addresses vary run-to-run due to IRQ timing, so audit via
globals or within a single run) **stock vs candidate** and find the mis-sized pool. Then find the
pool-init function that writes that descriptor's `+0xc` and check for a dropped/short-split store.

Tooling: `FRN_WRWATCH=<hex>[,len]` now logs the caller `rp` (qemu-frn commit c6c72dd) + 2M cap +
flush — use it on `0x8002f088` / the pool descriptor to find the setup, or on `mempool_get_block`
returns. `FRN_WRWATCH`/`FRN_SNAP` only see stores via the slow path; the FULLREGS fifo+grep
method is the reliable fallback for arbitrary SDRAM writes.

## Tools (committed)
- `scripts/find_missplits.py` — detects decompiler-shredded functions (117 genuine; delay-slot-aware).
- `scripts/harvest_asm.py` — byte-faithful harvest of fcc-can't-recompile fns (symbolic call targets).
  Only `initialize_rtos_kernel` is a genuine permanent asm case; mis-splits should re-decompile to C.
