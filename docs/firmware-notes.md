# K10D 1.31 firmware notes

Analysis notes that complement the C tree: the updater and its integrity rules, the boot block,
the MODSET / debug-menu path, the switch record, the main ↔ `0xC0000`-CPU link around a release,
the capture-pipeline image tables, and the `0xC0000` CPU's AF-assist path.

Conventions:

- Main addresses are VAs (`file offset + 0x10000000`). The `0xC0000` partition (`dsp/` here) is
  `file offset − 0x800000 + 0xC0000`.
- Function names in backticks are the current names in this tree (grep the `@k10d … @ 0x…`
  headers). Many are model-proposed and do not describe the function; the address is the anchor.
- **Static** = read from the decompile / listing. **Emulator** = observed with stock 1.31 in
  `qemu-system-frn -M k10d`. **Inference** = indirect evidence only. Nothing here was tested on
  a camera.
- No firmware bytes or table values are reproduced; `scripts/dump_image_tables.py` extracts the
  image tables from your own `FWDC162B.BIN`.

---

## Image layout

| file range | maps to | contents |
|---|---|---|
| `0x000000–0x000100` | `0x10000000` | header: model `0x1A5` (= 421) @`0x10`, version `0x011F0013` @`0x1C`, main sum-compensation word @`0xFC` |
| `0x000100–0x022814` | `0x10000100` | low code, incl. the RAM flasher (file `0x8154–0x9706` → RAM `0x80000448`, entry `0x8000067E`) |
| `0x0F0000–0x100000` | `0x100F0000` | boot block: reset vector, SD recovery loader + its own flasher |
| `0x100000–0x360000` | `0x10100000` | resources |
| `0x360000–~0x547200` | `0x10360000` | application code |
| `~0x547200–0x800000` | | rodata / strings / tables; `0xFF` padding `0x6223B9–0x7D0004` |
| `0x800000–0x840000` | `0x000C0000` | `0xC0000` CPU image; reset `0xD55BA`, vectors `0xFFC00` |

**Initialised data (static).** `initialize_rtos_kernel` @`0x10008000` copies `0x10830` bytes from
file `0x11FE4` to RAM `0x800042EC` (`.data`) and zeroes `.bss` from `0x80014B18` (+`0x4697C`). So
for `0x800042EC–0x80014B1B`: **file = (RAM − 0x80000000) + 0xDCF8.** Useful for resolving
pointer arrays the C reads from SDRAM.

**Clocks / RAM (static + inference).** The memory controller init @`0x100F031C` (base
`0x40070000`) writes an address mask of `0x07FFFFFF`, which suggests 128 MB at
`0x80000000–0x87FFFFFF`. Boot-block reload timers (`0x100F0A1E`, `0x100F1C5E`, `0x100F1CB0`) fit
a ≈66 MHz peripheral clock if their units are 1 ms / 50 µs (the ratios also fit 132 MHz).

---

## Updater (static)

### Files and checks

`select_string_and_enable_display` @`0x1046A2B4` loads the update file by variant, and requires
the exact size:

| variant | file | size | content |
|---|---|---|---|
| 3 | `C:\FWDC162D.BIN` | `0x800000` | main only |
| 4 | `C:\FWDC162C.BIN` | `0x40000` | `0xC0000` CPU only |
| 5 | `C:\FWDC162B.BIN` | `0x840000` | both |

Per section (0 = main, 1 = `0xC0000` CPU):

1. **Markers**, `check_table_entry_match` @`0x1046861C`. The model word (main `0x10` /
   CPU `0x800060`) must equal the camera model. At main `0x1F8, 0xFFFF0, 0x7FFFF8` and CPU
   `0x800070, 0x837FF8, 0x83FBF0` there must be `model*0x10001` followed by `0xA55A5AA5`. The
   offset tables are at `0x105A8008` and `0x105A8010`.
2. **Word sum**, `check_array_sum_is_zero` @`0x1046869C`. The 32-bit big-endian word sum over
   `[0,0x800000)` / `[0x800000,0x840000)` must be 0. The check is **skipped** if the
   compensation word (`0xFC` / `0x80007C`) is `0xFFFFFFFF`. The tables are at `0x105A8028/30/38`.
   This is the same rule `scripts/overlay_fr.py` implements.
3. **Version**, `check_param2_or_offset_limit` @`0x104686F2`. For the main section, the
   installed version must be ≤ file word `0x1C`, so there are no downgrades. The CPU section has
   no guard.

The three entry flows are `run_sequential_check_chain` @`0x104681E0` (D),
`run_sequential_state_machine_104682dc` @`0x104682DC` (C) and `firmware_flash_execute`
@`0x104683E2` (B). Each runs load → markers + sum → version → … → `CALL 0x8000067E`.

`scripts/fw_verify.py verify FILE [--ref STOCK]` checks all of the above offline. With `--ref` it
also lists the changed ranges and flags edits to the boot block, the installed flasher and the
header.

### What the flasher writes

- **The installed flasher runs, not the file's.** `copy_564_bytes_to_sram` @`0x100080F4` and
  `copy_rodata_to_sram_10008114` @`0x10008114` copy it from flash
  `0x10008154–0x10009705` to RAM just before the call. An update file's flasher and dispatch only
  matter for the *next* update.
- The RAM flasher (entry `0x8000067E`, R4 = variant, R5 = mode) makes up to 3 tries. Per sector it compares first, and only
  erases (AMD command set), programs and re-verifies if the sector differs.
- **Mode 0** (the user path, MENU + power with `FWDC162*.BIN`) writes
  `0x10010000–0x100EFFFF`, then `0x10100000–0x107FFFFF` (skipping `0x107E0000`), then
  `0x10000000`, `0x10002000` and `0x10008000–0x1000FFFF`. **The boot block `0x100F0000` is not
  written.**
- **Mode 1** also writes `0x10004000` and, last, the boot block. `0x10006000` and `0x107E0000`
  are never written by either mode; they hold per-unit data (see MODSET below).
- Mode 1 is reached via `fwupdate_mode_flag_test` @`0x104685F4` (port byte @obj+`0x10` & mask
  @+`0x1C` == 0). It goes through `run_update_task_loop` @`0x10467E18`,
  `run_update_state_machine` @`0x10468070` and `run_sequential_state_machine_10467f2c`, with no
  prompt and no version guard. The file names are XOR-`0xB4` at `0x105A7FD8/E8/F8`, formatted
  with the model number by `populate_struct_with_obfuscated_bytes` @`0x10467B06`:
  `C:\KB421.BIN` (main), `KB421B.BIN` (both), `KB421C.BIN` (CPU). The selector input is not
  identified.
- **CPU window.** In the B and C paths (not D), `loop_process_blocks_with_checks` @`0x1046851A`
  sends the CPU image *before* the main flasher runs: 32 × 8 KB over the serial link (cmd
  `0xF0`, `loop_write_32_blocks` @`0x104689E0`). It then reads it back with
  `wait_and_copy_buffer_block` @`0x10468ABA` and compares with `compare_two_sram_blocks`
  @`0x1046872C`.

### Boot-block SD recovery (static)

`init_subsystem_and_enter_loop` @`0x100F0808` runs before `JMP 0x10008000`. It reads two
inputs: `check_bit6_after_call` @`0x100F08A8` needs port `0x50000107` bit 6 LOW, and
`check_bit3_after_call` @`0x100F08C4` needs port `0x50000106` bit 3 HIGH. If both hold, it reads
raw SD sectors (1, then `0x4000` = 8 MB, not a FAT file) to `0x84000000`
(`write_buffer_in_chunks_100f0a94`). It checks the model and markers
(`check_sram_block_magic` @`0x100F08E0`, table `0x100F2024`) and jumps to the boot-block flasher
(`0x80000002`), which writes the mode-1 sector list. Only the boot code reads these two bits,
so they are probably board straps or jig lines rather than a button combo (inference). The
sector layout is unknown.

---

## MODSET.TXT and the debug menu

**Emulator:** stock 1.31 honours `C:\MODSET.TXT` if MENU is held at power-on (and no update file
is on the card). `[OPEN_DEBUG_MENU]` opens the debug menu.

**Static:** the file name is XOR-`0x29` at `0x105B2FC8` (`modset_file_exists_check`
@`0x1048734E`). The tokeniser is `modset_tokenise` @`0x10487418`: `[TOKEN]`, and `!` or `;`
starts a comment. `match_service_token` @`0x10487614` maps tokens to indices, and
`service_op_dispatch` @`0x10487A9C` executes them. KB number = `get_kernel_object_id`
@`0x1045929A` = `0x1A5` = 421.

| idx | token | action | writes |
|---|---|---|---|
| 0 | `DEBUG_MODE EN/DIS` | `debug_flag_writer_0x1c` @`0x1043586C`, then save | main flash |
| 1–3 | `CFDOOR_OPEN`, `WRITE_CF_VNDR`, `SCRIPT_EN_MODE` | same pattern | main flash |
| 4 | `USR_DAT_CLEAR` | | yes |
| 9 | `EEPROM_LOAD` | saves `C:\BACKUP.EEP`, then loads `C:\KB421.EEP` | **EEPROM** |
| 10 | `EEPROM_STORE` | dumps EEPROM to `C:\KB421.EEP` | none found |
| 0xB / 0xC | `CPU_ROM_STORE` / `DSP_ROM_STORE` | `C:\KB421CPU.BIN` / `C:\KB421DSP.BIN` | read |
| 0x10 / 0x11 | `DSP_ADJ_DAT_READ` / `WRITE` | `C:\KB421.ADJ` | WRITE: yes |
| 0x14 | `LENS_CPU_FIRMUP` (hidden) | | lens |
| 0x15 | `OPEN_DEBUG_MENU` (hidden) | opens the menu directly | no |
| 0x16 | `SW_DEBUG_MENU EN/DIS` (hidden) | | main flash |

- **The debug flags live in main flash.** The save (`save_settings_with_lock` @`0x1046D876` →
  `invoke_virtual_methods_on_object_array` @`0x10483A46`) rewrites the per-unit sectors
  `0x10006000` / `0x107E0000`. The flash writer (`dispatch_param_based_on_check` @`0x1044443A` and
  siblings) copies the sector to RAM `0x8001EF80`, patches it, and erases + programs only if it
  differs.
- **EEPROM_STORE is read-only.** `write_card_data_in_chunks` @`0x1046DA70` sends link cmd `0x80`,
  then cmd `0x62` reads in chunks of `0x20` words (`call_subroutine_and_flag_on_error`
  @`0x1046F362`), then `0x81`. On the CPU side `0x80`–`0x83` only set flag bits in `0x3C333`, and
  the `0x62` handler only reads. File format: one row per 16 words, `":%04X"` (word address),
  then `"%02X%02X"` per word (high byte, low byte).
- **EEPROM READ/WRITE page** (`serialize_exposure_params_to_buffer` @`0x1048A0EC`, which draws
  that page): ADDRESS = EEPROM word index, DATA = 16 bits. READ → cmd `0x62`, 1 word. WRITE → cmd
  `0x63`, then `0x64` (reload EEPROM → RAM). The command table is at `0x105A72FC`.
- **Menu pages (emulator):** 1 DEBUG MODE / CARDDOOR / WRITE CARD VNDR / SCRIPT EN / USR DAT CLEAR
  / DUMMY RELEASE (OK here writes flash); 2 SWITCH TEST / RELEASE AGING / LENS COM CHECK / AF
  PINT DISP / DSP ADJ DAT READ + WRITE; 3 EEPROM LOAD / SAVE / READ-WRITE, CPU ROM SAVE, DSP ROM
  SAVE. The repeated-release routine is `run_sensor_readout_sequence` @`0x1046F9E4` ("RELEASE
  TIMES %4d / %4d").

---

## SWITCH TEST: the 'A' button record (emulator)

The record is 9 bytes, active-low. Each bit was found by clearing it and watching the SWITCH TEST
screen (which shows a press one record late).

| byte | bit | switch |
|---|---|---|
| 0 | `0x01` | SWS (shutter half-press, S1) |
| 0 | `0x02` | SWR (full press, S2) |
| 0 | `0x08` | AFSTART |
| 0 | `0x20` | CARDDET |
| 2 | `0x01` / `0x02` / `0x04` / `0x08` | AEL / GREEN / PRV / DOOR (card door) |
| 2 | `0x10` / `0x20` | INFO / DISP |
| 2 | `0x80` | XV or AVSET (both light together) |
| 3 | `0x01` / `0x02` / `0x04` / `0x08` / `0x10` | 4-way R / L / D / U / OK |
| 3 | `0x80` | MENU |
| 4 | `0x01` | FLPOP (flash pop-up) |
| 4 | `0x80` | AEB |
| 5 | `0x01` / `0x04` / `0x08` / `0x40` | RAW / SR / FUNC / ERASE |

Value fields (not decoded bit by bit): byte 1 → TILT; bytes 3 (`0x20–0x40`), 4 (`0x02–0x20`) and
5 (`0x10–0x20`) → AFMD / MODE / AEMD; byte 6 (`0x10`, `0x20`) → AC; bytes 7–8 → FDL / RDL dial
counters.

---

## Main ↔ `0xC0000` CPU around a release (emulator + static)

- **Status letters.** `settings_cmd_to_index` @`0x1045E83A` dispatches incoming letters (table
  `0x105A5E06`). Runtime listener table (settings manager `0x8054D7BC+0x1AC`): `C`, `I` →
  `0x805329C0`; `H`, `B` → mode control `0x804A7E24`; `X` → `0x804A9828`; `A` (button record)
  → screen manager `0x804A9940`. The other letters are stored as records and polled. For
  example, `@` (4-byte payload, case `0x0F`) is polled by `0x104F2482`.
- **Release handshake.** The main CPU does not start a capture on its own:
  1. S1 arms external INT ch0 (ENIR `0x39`: `0x02 → 0x03`). INT ch *k* = vector 30 + *k*; ch1
     (vec 31) is the link "attention" line.
  2. The `0xC0000` CPU raises input bit `0x01` of port `0x50000106` and pulses INT0 (vec 30). The
     ISR posts event `0x40001` to the capture task (object `0x8052C328`, flag bit `0x20`). The
     task checks that the line reads 1, then posts event `0xD0000F`, which runs
     `execute_capture_sequence` @`0x1041BD7E`. A low line at INT0 aborts (`0xD0000D`).
  3. `handle_event_0x2e` @`0x1040FBC8` then steps a 19-tick sequence on reload-timer ch2
     (reload `0x50` / `0x6E` / `0x8C` / `10` by step), with GPIO flag +`0x44`. It looks like the
     mirror/drive sequencer (inference). After it, the task waits on `0x805329BC+0x1C` bit 1
     (letter `C`), then for the line to drop, then for bit 2 (letter `I`).
  4. Then come `configure_exposure_state` (`0xD00002`), sensor-timing parameters over the
     serial channel, `measure_and_calibrate_sensor_timing`, 4 readout DMA channels (capture obj
     +`0xD4…0xE0`), and two 500 ms waits for IRQ source `0x8000001A` = **vector 32**
     (`hw_irq_source_demux` case `0x10`).
- **Debug-menu dummy release.** SWR sends link `Cmd 02` payload `01 00` (builder
  `send_data_via_cpucom` @`0x10463D82`). Task 35 then loops in `0x1046F9E4` until bit `0x80` of
  record byte 0 (item 4, table `0x105A6638`) is set by a `@` record. In shooting mode, a full
  press sends no link command at all.

---

## Image pipeline: tone curves and colour matrices (static)

- **Entry.** Event `0x600001` (`process_event_0x600001`) →
  `update_state_dependent_params` @`0x104ECB04` (obj, settings = ctx+`0x80`, …, exif =
  ctx+`0x120`).
- **Settings struct.** `populate_exposure_event_struct` @`0x105102E2` builds it from
  `settings_getter` @`0x10428CA2` (byte at obj+`0x98`+id):
  - +`0x38` = prop `0x50` (Image Tone): 0 → bank A4, else → bank CC. +`0x60` (job+`0x8C5`) → bank
    7C.
  - Per tone, +4 / +8 / +`0xC` = props `0x59/0x5A/0x58` (tone 0) or `0x56/0x57/0x55` (tone ≠ 0).
  - Values are 0..6 with centre 3 (`map_mode_to_state` @`0x104A24FC`; the extended-bracketing
    mapping is in `dispatch_status_code_by_index` @`0x105124F0`).
  - From the data, +8 indexes the tone curves (Contrast) and +`0xC` the matrices (Saturation).
    +4 is probably Sharpness (inference).
- **Banks.** Each bank is 9 slot pointer arrays indexed by ISO group, each pointing to a parameter
  object with per-step ROM tables. The objects are `.bss`, filled by unit 290
  (`init_four_sram_structs` @`0x1052FC84` …).
- **Tone curves (slot 2).** `0x1053072C` copies a 4096-entry u8 LUT (12-bit in → 8-bit out) into
  the HW buffer from `0x1044EF8A`. The pointer arrays (indexed by Contrast step) are at
  `0x80014744` (A4), `0x80014760` (CC) and `0x8001477C` (7C). They point into one contiguous ROM
  block of 15 curves × 4 KB at `0x1060F05A–0x1061E059`; 7C reuses A4/CC curves except its centre
  step. For RAW-like jobs, the A4 and CC curves for the current step are also copied
  (XOR-scrambled) into the maker note at exif+`0x2C` / +`0x102C`.
- **WB-dependent table.** `0x1053076C` → HW buffer `0x1044EF82` picks one of 10 4 KB tables at
  `0x1060303C…0x1060D03C`, selected by min(WB gains). It is probably highlight/clip compensation
  (inference).
- **Colour matrices (slot 8).** 3×3 int16, 256 = 1.0, ROM `0x105FB354–0x105FB9E9`. The pointer
  arrays are at `0x80013A0C` (A4, 42 = 6 × 7), `0x80013AB4` (CC, 42) and `0x800139D8` (7C, 13);
  index = *k*·7 + step. `apply_wb_gain_matrix` (`0x1044E67C` is the writer) optionally
  multiplies in a Q13 matrix, re-normalises the diagonals and scales by a gain before writing.
- **Not tone curves.** `apply_tone_curve_lut` @`0x1052C3A4` resamples the 256-bin playback
  histograms (`0x8001ACBC/B0BC/B4BC/B8BC`, 640×480) into bar heights. The u8 LUTs at
  `0x105C3B20–0x105C3F1F` belong to the display / converter. The slot-1 tables at
  `0x105FDE54–0x10602E53` (5 × 2048 u16) are level-dependent gains.

`scripts/dump_image_tables.py FWDC162B.BIN OUTDIR` writes `tone_curves.csv` and
`matrices.txt`, plus `tone_curves.png` if matplotlib is installed.

---

## `0xC0000` CPU: internal-flash AF assist (static)

Module map: `0xC0080–0xCA7xx` AE / exposure and main→CPU post-handlers; **AF `0xCB500–0xD55xx`**
(RAM `0x3CB00–0x3CFFF`); strobe / charge `0xDB2xx–0xDBAxx`; release-time strobe
`0xEB000–0xED8xx`.

- **ASIC bus.** It is a 4-bit bus on port 0: `0xE30EC(reg,val)` full write, `0xE31D6` nibble
  write, `0xE304E` read, with shadows at `0x3C001+reg`.
- **Session.** `0xCB5DE` runs `0xCB63E` (setup / permission), then loops over `0xCCB24`,
  `0xD0E62`, `0xCB9F0` / `0xCB842` and `0xCE11E(0)` until `0x3CE08 & 1`.
- **Gate.** `0xD0CD0` returns 1 iff `0x3F2DA != 0`, `0x3C036` bit 0 is clear (flash up,
  inference), `0x3CE01` bit 0 is clear (lens not driving) and `0x3CE04` bit 3 is clear.
- **Arming.** Low-light arming `0xD0358` compares per-sensor levels with `0x3F2DC` (internal) or
  `0x3F48C` (external).
- **Pulse loop.** `0xD0D76` runs at the top of each integration-loop iteration (`0xCEFF6`). It
  uses width `0x3F2DA` and interval `0x3F2DB`, with optional ramp `0x3F4B1/0x3F4B5`, and ends at
  `0x3F2DD + 8` pulses. The primitive `0xD0FA6(width)` pulses reg `0xB` bit 2. The delay
  `0xD57A4` uses reload timer ch1; both clock branches work out to ≈1 µs per unit (inference).
- **EEPROM-backed parameters.** `0xE9E8A` copies EEPROM words `0..0x3FF` to RAM `0x3EC00`, so
  RAM = `0x3EC00 + 2·word`, with the even address as the high byte.

  | RAM | EEPROM word | meaning |
  |---|---|---|
  | `0x3F2D8` | `0x36C` hi | bit `0x80` = force assist |
  | `0x3F2DA` | `0x36D` hi | pulse width; 0 disables internal assist |
  | `0x3F2DB` | `0x36D` lo | pulse interval |
  | `0x3F2DC` | `0x36E` hi | low-light threshold |
  | `0x3F2DD` | `0x36E` lo | pulse count − 8 |

  `0x3F400–0x3F4BF` and `0x3F500–0x3F51F` are firmware constants (from ROM `0xFFA00`), not
  EEPROM. The load has no checksum.
- **Service commands.** Dispatcher `0xD64CA` → `0xD6552`: `0x60` / `0x61` RAM read / write,
  `0x62` / `0x63` EEPROM read / write (`0xD6800` / `0xD685A`), `0x64` reload EEPROM → RAM, `0x65`
  word `0x3FA` = 0, `0x66` reset AE adjust, `0x67` / `0x68` lens-side read / write. On the main
  side, these are sent by the debug-menu EEPROM page and by EEPROM_STORE / EEPROM_LOAD.
