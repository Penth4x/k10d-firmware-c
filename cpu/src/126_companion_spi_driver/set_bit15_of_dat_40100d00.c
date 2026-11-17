/* @k10d set_bit15_of_dat_40100d00 @ 0x1044ed80
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears bits 7-10 of DAT_40100d00 and sets bit 15 if param_2 is non-zero.
 * summary:
 *   The function performs a bitwise AND with 0x77 on the global DAT_40100d00, clearing bits
 *   7, 8, 9, and 10. If the second argument is non-zero, it sets bit 15 (0x8000) of the
 *   same global. No other memory locations are accessed and no functions are called. The
 *   role of DAT_40100d00 is not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bit15_of_dat_40100d00(uint32_t param_1,int param_2)

{
  _DAT_40100d00 = _DAT_40100d00 & 0x77;
  if (param_2 != 0) {
    _DAT_40100d00 = _DAT_40100d00 | 0x8000;
  }
  return;
}
