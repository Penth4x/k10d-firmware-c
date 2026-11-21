# K10D: shutter release → readout → develop (findings)

These are notes on how firmware 1.31 (`FWDC162B.BIN`) takes a picture, from the
shutter handshake up to the review image. Each item is tagged:
- **[emu]**: observed in `qemu-system-frn -M k10d` with stock 1.31;
- **[static]**: read from the disassembly or decompile;
- **[inf]**: inference.

Nothing here was tested on a camera. Function names are this tree's current names. Each
cited name was checked against `master` (`cpu/include/funcs.h`).

The emulator runs relied on local experiment hooks that are not published: forcing port
lines, one-shot vectors and stub done-interrupts. Two real emulator bugs found on the way
are fixed in a separate PR on `Penth4x/qemu` (see the last section). These notes were
prepared with the help of an AI agent.

## 1. Shutter release handshake
The main CPU does not start an exposure on S2 by itself. The control CPU drives it.

1. **[emu]** S1 (button record `fe..`) arms external INT ch0: ENIR `0x39` goes `0x02 → 0x03`.
   External INT ch k = vector 30+k, so ch1 = vec31 = the CPUCOM attention line.
2. **[emu]** Release: the control CPU raises input line `0x01` of port `0x50000106` and pulses INT0 (vec30).
   - The ISR posts event `0x40001`. The capture task (task 7, object `0x8052c328`) gets flag bit `0x20`.
   - It checks the line (`call_with_second_field`). The line must read 1. A low line aborts with `0xd0000d`.
   - Then event `0xd0000f` runs `execute_capture_sequence` `0x1041bd7e`.
3. **[emu]** The drive sequencer `0x1040fbc8` runs about 19 reload-timer ticks on channel 2 (`0x5c002020`).
   - It then waits on `0x805329bc+0x1c` bit 1. Status letter `'C'` (`0xa0001`) sets it.
   - Next it waits for line `0x01` to drop.
   - Then it waits for bit 2, which status letter `'I'` (`0xa0010`) sets.
4. **[emu]** Then, in order:
   - `configure_exposure_state` (event `0xd00002`);
   - the timing-generator parameters over serial channel 2;
   - `configure_sensor_readout_channels` `0x10420934`;
   - two 500 ms waits for IRQ source `0x8000001a` = **vec32** (`hw_irq_source_demux` case `0x10`).

## 2. Sensor readout DMA
- **[emu]** Four channels at `0x4000c240/c340/c440/c540`, programmed by helpers around `0x10456a5e`.

  | offset | value | note |
  |---|---|---|
  | `+0` | `0xca9` | control, written last |
  | `+2` | `0xce` / `0xcc` | alternating per channel |
  | `+4` | `0x160` | |
  | `+8` | destination | SDRAM address without the top bit |

- **[emu]** Destinations: A `0x890d1000`, B `0x898234f0`, C = A+`0x7b0`, D = B−`0x7b0`.
  `0x7b0` = 3936/2, and 3936 is the line pitch used below.
- **[emu]** The firmware never polls DMA status. It only waits for vec32.
- Capture events seen on the mode controller: `d00002, d00003, d00004, d00006, d0000c, d00001, d0000e`.
  `d00006` is the normal end of `execute_capture_sequence`, not an error.

## 3. Image pipeline task
- **[emu/static]** Task 21 runs `dispatch_event_queue_items` `0x105143f8` (object `0x804aa2ec`, eventflag at `+0x34c`). The flag bits are:

  | bit | meaning |
  |---|---|
  | `0x01` | kick (`set_flag_at_offset_0x34c`) |
  | `0x08` | gate |
  | `0x10` | init |
  | `0x20` / `0x40` | replies to `0x800003` / `0x800004` |

- **[emu]** The kick comes from `configure_exposure_state`, at the *start* of a capture.
  - That is before `alloc_first_ring_entry` creates the ring entry for the shot.
  - So in the emulator, shot N is processed when shot N+1 starts.
  - The mode-exit path also kicks it: `release_mode_entry_objects` sets mode flag `0x200`, which leads to `process_mode_event_flags_10418c04`.
  - **[inf]** On hardware another completion event probably re-kicks it. `dispatch_event_by_id_10514056` re-kicks on `0x600001`, `0xa0000x`, `0xc00003`, `0x10f000x` and others. Which one fires is not identified.

## 4. Pre-process engine at `0x400d0000` [emu]
| reg | value | meaning [inf] |
|---|---|---|
| `0x14` | `0x090d1000` | source = readout buffer A |
| `0x10` / `0x12` | `0x520` / `0x7a0` | lines / width per field |
| `0x20` | `0xf60` (3936) | line pitch |
| `0x24` / `0x28` / `0x2c` | `0x0eacee00` / `0x0ead1c20` / `0x0f995200` | destinations |
| `0x48..0x4e` | `0x100` ×4 | per-channel gains (unity) |
| `0x04` | `0x8000` | start, also the IRQ enable read by the ISR |

- Done IRQ = **vec42**, `check_and_acknowledge_irq_source_104fae56`. It needs:
  - `0x400d0006` bit15 (acked by writing it back);
  - `0x400d0004` bit15.

  It then posts `0x80000014`.
- After this, imgproc op C (already modelled) runs 0xf40×0xa40 = **3904×2624** from `0x090d1000` to `0x0eacee00`.

## 5. Develop engine `0x40128000` / `0x40100000` [emu/static]
- Task 10 (`build_and_send_struct` → `configure_sensor_readout_params_104f3de0`):
  - loads tables into `0x40103000–0x4010cfff` (3×2048, 256, 4096 and 4096 entries);
  - enables IRQ source `0x80000001` (`set_irq_enable_bit(..., 0x300)` → `0x40128002`);
  - starts the engine with `0x40100000 = 1` and `0x40128100` bit14.
- Done IRQ = **vec34**, demux case `0x12` (`clock_tick_post_a`). Status is `0x40128004 & 0x301` (acked by writing back), and enable is `0x40128002`.
- Handler `set_two_flags_on_object_104f3d8e`: bit `0x100` → event `0x200001`(1), bit `0x200` → event `0x200001`(0).
  **[emu]** Reporting `0x100` lets task 10 finish. Reporting `0x200` (or `0x301`) makes it restart develop forever.

## 6. After develop [emu]
- Task 11 (`build_and_send_two_param_blocks_105044a6`) drives rc0/rc1 (`0x40020000` / `0x400f0000`):
  - 640×428 and 320×428 (review);
  - 160×120 and 80×120, then a 160×120 interleave (thumbnail).

  Completions: `0x300001` → bit 1 and `0x300002` → bit 2 of its flag at `+0x2c` (`set_flag_on_param_one` `0x105040d0`).
- The JPEG / card-write stage does **not** start yet. Candidates:
  - **[inf]** armed vectors that are never delivered: vec36 (`clock_tick_post_c`, DMA channel status `0x4000cX10/12`), vec37, vec38 and vec44;
  - a pipeline step waiting for one of the re-kick events above.

## Emulator fixes needed to reproduce (separate qemu PR)
- **Reload timer.** TMCSR bit0 is TRG, a write-only trigger. Treating it as a run level
  retriggered the one-shot, so the release sequencer `0x1040fbc8` never finished.
  Also, `frn_ic` must count even without `FRN_FT`.
- **Resolution converter.** Channels whose address register is 0 must be skipped.
  Otherwise the review op writes to SDRAM `0x80000000` and wipes the IRQ handler table
  at `0x8001de28`.
