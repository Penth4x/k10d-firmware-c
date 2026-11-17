/* @k10d call_helper_with_string_arg_1046a466 @ 0x1046a466
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Calls call_helper_and_store_result_1046a3ea with param_1, a fixed string pointer, and
 *   param_2, returning the boolean result.
 * summary:
 *   This function is a thin wrapper that forwards its two arguments to
 *   call_helper_and_store_result_1046a3ea, inserting a fixed pointer to a string in the
 *   firmware image (s_C__FWDC162B_BIN_105473f0) as the second argument. It returns the
 *   boolean result of that call. The specific role of call_helper_and_store_result_1046a3ea
 *   is unknown, so the exact behavior cannot be determined beyond this forwarding pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint call_helper_with_string_arg_1046a466(void *param_1,void *param_2)

{
  bool bVar1;
  
  bVar1 = call_helper_and_store_result_1046a3ea((int)param_1,s_C__FWDC162B_BIN_105473f0,param_2);
  return (uint)bVar1;
}
