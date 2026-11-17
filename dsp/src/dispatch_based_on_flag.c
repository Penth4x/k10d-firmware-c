/* @k10d dispatch_based_on_flag @ 0x000f4152
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Calls one of two functions based on a global flag if a parameter exceeds a threshold.
 * summary:
 *   Checks if param_1 is greater than DAT_0003c576. If so, it branches on DAT_0003c3ac: if
 *   null, it calls add_signed_offset_by_mode(param_1, 0); otherwise, it calls
 *   add_byte_offset_by_mode(param_1, 0). The specific roles of the callees and globals are
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_based_on_flag(int param_1)

{
  if ((int)(uint)DAT_0003c576 < param_1) {
    if (DAT_0003c3ac == '\0') {
      param_1 = add_signed_offset_by_mode(param_1,0);
    }
    else {
      param_1 = add_byte_offset_by_mode(param_1,0);
    }
  }
  return param_1;
}
