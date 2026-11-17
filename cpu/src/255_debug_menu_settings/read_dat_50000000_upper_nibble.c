/* @k10d read_dat_50000000_upper_nibble @ 0x104ea632
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Returns the upper nibble (bits 12-15) of the 16-bit value at DAT_50000000.
 * summary:
 *   The function reads the global variable DAT_50000000 and masks it with 0xf000 to extract
 *   bits 12 through 15. It returns this masked value as a ushort. No other memory locations
 *   are accessed and no functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_dat_50000000_upper_nibble(void)

{
  return _DAT_50000000 & 0xf000;
}
