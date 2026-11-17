/* @k10d convert_index_to_bitmask @ 0x1044b85a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Converts a 4-bit index from a callee into a single-bit mask or zero.
 * summary:
 *   Calls get_high_nibble_if_valid to obtain an integer value. If the value is zero,
 *   returns zero. Otherwise, masks the lower 4 bits of the value and left-shifts 8 by that
 *   amount to produce a single-bit bitmask. The function acts as a simple index-to-bitmask
 *   converter.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int convert_index_to_bitmask(void)

{
  int iVar1;
  
  iVar1 = get_high_nibble_if_valid(__frv_reg_unset(4));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 8 << ((byte)iVar1 & 0xf);
  }
  return iVar1;
}
