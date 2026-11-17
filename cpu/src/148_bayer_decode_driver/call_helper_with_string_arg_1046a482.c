/* @k10d call_helper_with_string_arg_1046a482 @ 0x1046a482
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper with param_1, a fixed string pointer, and param_2, returning the
 *   helper's boolean result.
 * summary:
 *   This function is a thin wrapper that invokes call_helper_and_store_result_1046a3ea,
 *   passing param_1, the global string pointer s_C__FWDC162C_BIN_105473e0, and param_2. It
 *   converts the helper's return value to a boolean and returns it as a uint. The specific
 *   role of the helper and the string is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint call_helper_with_string_arg_1046a482(void *param_1,void *param_2)

{
  bool bVar1;
  
  bVar1 = call_helper_and_store_result_1046a3ea((int)param_1,s_C__FWDC162C_BIN_105473e0,param_2);
  return (uint)bVar1;
}
