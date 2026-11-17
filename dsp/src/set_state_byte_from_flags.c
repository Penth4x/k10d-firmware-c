/* @k10d set_state_byte_from_flags @ 0x000d3116
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes a value to DAT_0003c12b based on bits of DAT_0003c107 and param_1.
 * summary:
 *   Checks if bits 4-5 of DAT_0003c107 equal 0x10. If so, it sets DAT_0003c12b to 0x34 if
 *   DAT_0003c101 is -0x28, to 0x35 if param_1 is 0x40, or to 0xff otherwise. No other side
 *   effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_state_byte_from_flags(int param_1)

{
  if ((DAT_0003c107 & 0x30) == 0x10) {
    if (DAT_0003c101 == -0x28) {
      DAT_0003c12b = 0x34;
    }
    else if (param_1 == 0x40) {
      DAT_0003c12b = 0x35;
    }
    else {
      DAT_0003c12b = 0xff;
    }
  }
  return;
}
