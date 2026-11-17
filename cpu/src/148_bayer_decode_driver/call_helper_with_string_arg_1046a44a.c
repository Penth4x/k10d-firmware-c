/* @k10d call_helper_with_string_arg_1046a44a @ 0x1046a44a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper with param_1, a fixed string pointer, and param_2, returning the
 *   helper's boolean result.
 * summary:
 *   This function is a thin wrapper that invokes call_helper_and_store_result_1046a3ea,
 *   passing param_1, the address of a string in the firmware image
 *   (s_C__FWDC162D_BIN_105473d0), and param_2. It converts the helper's return value to a
 *   boolean and returns it as an unsigned integer. The specific role of the helper and the
 *   string is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint call_helper_with_string_arg_1046a44a(void *param_1,void *param_2)

{
  bool bVar1;
  
  bVar1 = call_helper_and_store_result_1046a3ea((int)param_1,s_C__FWDC162D_BIN_105473d0,param_2);
  return (uint)bVar1;
}
