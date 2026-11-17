/* @k10d copy_rodata_to_sram_104aabfe @ 0x104aabfe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copes six 32-bit constants from ROM to SDRAM.
 * summary:
 *   The function performs a simple block copy of six 32-bit values from the ROM region
 *   (0x105b8cd4-0x105b8ce0) to the SDRAM region (0x800490b8-0x800490c8). No callees are
 *   invoked, and no control flow or conditional logic is present. The specific purpose of
 *   the copied data is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_rodata_to_sram_104aabfe(void)

{
  _DAT_800490b8/*SDRAM*/ = _DAT_105b8cd4/*ROM*/;
  _DAT_800490bc/*SDRAM*/ = _DAT_105b8cdc/*ROM*/;
  _DAT_800490c0/*SDRAM*/ = _DAT_105b8cd4/*ROM*/;
  _DAT_800490c4/*SDRAM*/ = _DAT_105b8cd8/*ROM*/;
  _DAT_800490c8/*SDRAM*/ = _DAT_105b8ce0/*ROM*/;
  return;
}
