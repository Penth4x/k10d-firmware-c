/* @k10d copy_rodata_table_to_sram @ 0x104ab14a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a 32-entry table of 32-bit values from ROM to SDRAM.
 * summary:
 *   The function performs a straight-line copy of 32 consecutive 32-bit words from the ROM
 *   region (0x105b8d3c-0x105b8dc8) to the SDRAM region (0x800490e0-0x8004916c). There are
 *   no function calls, conditional branches, or MMIO operations. The source data is
 *   interleaved in groups of four, suggesting a structured table layout, but the specific
 *   semantic role of the data cannot be determined from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_rodata_table_to_sram(void)

{
  _DAT_800490e0/*SDRAM*/ = _DAT_105b8d3c/*ROM*/;
  _DAT_800490e4/*SDRAM*/ = _DAT_105b8d60/*ROM*/;
  _DAT_800490e8/*SDRAM*/ = _DAT_105b8d84/*ROM*/;
  _DAT_800490ec/*SDRAM*/ = _DAT_105b8da8/*ROM*/;
  _DAT_800490f0/*SDRAM*/ = _DAT_105b8d40/*ROM*/;
  _DAT_800490f4/*SDRAM*/ = _DAT_105b8d64/*ROM*/;
  _DAT_800490f8/*SDRAM*/ = _DAT_105b8d88/*ROM*/;
  _DAT_800490fc/*SDRAM*/ = _DAT_105b8dac/*ROM*/;
  _DAT_80049100/*SDRAM*/ = _DAT_105b8d44/*ROM*/;
  _DAT_80049104/*SDRAM*/ = _DAT_105b8d68/*ROM*/;
  _DAT_80049108/*SDRAM*/ = _DAT_105b8d8c/*ROM*/;
  _DAT_8004910c/*SDRAM*/ = _DAT_105b8db0/*ROM*/;
  _DAT_80049110/*SDRAM*/ = _DAT_105b8d48/*ROM*/;
  _DAT_80049114/*SDRAM*/ = _DAT_105b8d6c/*ROM*/;
  _DAT_80049118/*SDRAM*/ = _DAT_105b8d90/*ROM*/;
  _DAT_8004911c/*SDRAM*/ = _DAT_105b8db4/*ROM*/;
  _DAT_80049120/*SDRAM*/ = _DAT_105b8d4c/*ROM*/;
  _DAT_80049124/*SDRAM*/ = _DAT_105b8d70/*ROM*/;
  _DAT_80049128/*SDRAM*/ = _DAT_105b8d94/*ROM*/;
  _DAT_8004912c/*SDRAM*/ = _DAT_105b8db8/*ROM*/;
  _DAT_80049130/*SDRAM*/ = _DAT_105b8d50/*ROM*/;
  _DAT_80049134/*SDRAM*/ = _DAT_105b8d74/*ROM*/;
  _DAT_80049138/*SDRAM*/ = _DAT_105b8d98/*ROM*/;
  _DAT_8004913c/*SDRAM*/ = _DAT_105b8dbc/*ROM*/;
  _DAT_80049140/*SDRAM*/ = _DAT_105b8d54/*ROM*/;
  _DAT_80049144/*SDRAM*/ = _DAT_105b8d78/*ROM*/;
  _DAT_80049148/*SDRAM*/ = _DAT_105b8d9c/*ROM*/;
  _DAT_8004914c/*SDRAM*/ = _DAT_105b8dc0/*ROM*/;
  _DAT_80049150/*SDRAM*/ = _DAT_105b8d58/*ROM*/;
  _DAT_80049154/*SDRAM*/ = _DAT_105b8d7c/*ROM*/;
  _DAT_80049158/*SDRAM*/ = _DAT_105b8da0/*ROM*/;
  _DAT_8004915c/*SDRAM*/ = _DAT_105b8dc4/*ROM*/;
  _DAT_80049160/*SDRAM*/ = _DAT_105b8d5c/*ROM*/;
  _DAT_80049164/*SDRAM*/ = _DAT_105b8d80/*ROM*/;
  _DAT_80049168/*SDRAM*/ = _DAT_105b8da4/*ROM*/;
  _DAT_8004916c/*SDRAM*/ = _DAT_105b8dc8/*ROM*/;
  return;
}
