/* @k10d copy_two_rodata_words_to_sram @ 0x10464a6a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies two 32-bit constants from ROM into two adjacent SDRAM locations.
 * summary:
 *   The function performs two simple memory assignments, loading 32-bit values from ROM
 *   addresses 0x105a7a3d and 0x105a7a41 into SDRAM addresses 0x80048310 and 0x80048314. It
 *   has no callees and no other side effects. The specific role of these constants or the
 *   SDRAM locations is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_two_rodata_words_to_sram(void)

{
  _DAT_80048310/*SDRAM*/ = (uint)DAT_105a7a3d/*ROM*/;
  _DAT_80048314/*SDRAM*/ = (uint)DAT_105a7a41/*ROM*/;
  return;
}
