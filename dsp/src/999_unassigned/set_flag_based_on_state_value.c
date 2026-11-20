/* @k10d set_flag_based_on_state_value @ 0x000e8b98
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets a specific bit in one of two global variables depending on the value of a third
 *   global.
 * summary:
 *   Checks the value of DAT_0003c040. If it is -0x40, it sets bit 6 (0x40) in DAT_0003c022.
 *   If it is -0x10, it sets bit 0 (1) in DAT_0003f326. No other actions are taken.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_based_on_state_value(void)

{
  if (DAT_0003c040 == -0x40) {
    DAT_0003c022 = DAT_0003c022 | 0x40;
  }
  else if (DAT_0003c040 == -0x10) {
    DAT_0003f326 = DAT_0003f326 | 1;
  }
  return;
}
