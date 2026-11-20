/* @k10d set_flags_if_bit3_set @ 0x000e5322
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets three global variables to specific values if bit 3 of DAT_0003f50e is set.
 * summary:
 *   Checks if bit 3 (value 8) of the global variable DAT_0003f50e is set. If it is, it sets
 *   DAT_00007004 to 1, DAT_00000486 to 1, DAT_00000487 to 0xf0, and DAT_0000048a to 0. No
 *   other actions are taken.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flags_if_bit3_set(void)

{
  if ((DAT_0003f50e & 8) != 0) {
    DAT_00007004 = 1;
    DAT_00000486 = 1;
    DAT_00000487 = 0xf0;
    DAT_0000048a = 0;
  }
  return;
}
