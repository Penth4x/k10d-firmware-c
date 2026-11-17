/* @k10d copy_rodata_block_to_sram @ 0x104aadcc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies five 32-bit constants from the ROM image into a contiguous SDRAM region.
 * summary:
 *   The function performs five direct memory assignments, moving values from the 0x105b8xxx
 *   ROM range to the 0x800490cc SDRAM range. No callees are invoked, and no MMIO or
 *   control-flow logic is present. The specific role of the destination data is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_rodata_block_to_sram(void)

{
  _DAT_800490cc/*SDRAM*/ = _DAT_105b8cec/*ROM*/;
  _DAT_800490d0/*SDRAM*/ = _DAT_105b8cfc/*ROM*/;
  _DAT_800490d4/*SDRAM*/ = _DAT_105b8cec/*ROM*/;
  _DAT_800490d8/*SDRAM*/ = _DAT_105b8cf4/*ROM*/;
  _DAT_800490dc/*SDRAM*/ = _DAT_105b8d04/*ROM*/;
  return;
}
