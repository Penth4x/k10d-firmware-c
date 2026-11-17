/* @k10d initialize_sram_pointer_block @ 0x104aab10
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 209_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copes five 32-bit constants from ROM into a contiguous SDRAM block.
 * summary:
 *   The function writes five fixed 32-bit values from the ROM region
 *   (0x105b8ce8-0x105b8d00) into consecutive 32-bit slots in SDRAM starting at 0x800490a4.
 *   There are no function calls, so the behavior is purely a static data initialization.
 *   The specific role of the destination block is not determinable from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_sram_pointer_block(void)

{
  _DAT_800490a4/*SDRAM*/ = _DAT_105b8ce8/*ROM*/;
  _DAT_800490a8/*SDRAM*/ = _DAT_105b8cf8/*ROM*/;
  _DAT_800490ac/*SDRAM*/ = _DAT_105b8ce8/*ROM*/;
  _DAT_800490b0/*SDRAM*/ = _DAT_105b8cf0/*ROM*/;
  _DAT_800490b4/*SDRAM*/ = _DAT_105b8d00/*ROM*/;
  return;
}
