/* @k10d call_helper_with_four @ 0x1046a476
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Calls select_string_and_enable_display with param_1, constant 4, and param_2, returning
 *   the boolean result.
 * summary:
 *   This is a thin wrapper that forwards its two arguments to
 *   select_string_and_enable_display, inserting the constant 4 as the second argument. It
 *   converts the callee's boolean return value to an unsigned integer. The specific role of
 *   select_string_and_enable_display is unknown, so the subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint call_helper_with_four(void *param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = select_string_and_enable_display(param_1,4,param_2);
  return (uint)bVar1;
}
