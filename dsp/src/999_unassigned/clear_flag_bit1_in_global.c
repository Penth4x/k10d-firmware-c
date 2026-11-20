/* @k10d clear_flag_bit1_in_global @ 0x000e236a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clears bit 1 of the global variable at DAT_00000008 if it is set.
 * summary:
 *   The function checks if bit 1 (value 2) is set in the global variable DAT_00000008. If
 *   the bit is set, it clears it by ANDing the variable with 0xfd. It returns 0. No other
 *   side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_flag_bit1_in_global(void)

{
  if ((DAT_00000008 & 2) != 0) {
    DAT_00000008 = DAT_00000008 & 0xfd;
  }
  return 0;
}
