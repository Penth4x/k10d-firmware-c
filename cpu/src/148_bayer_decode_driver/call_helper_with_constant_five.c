/* @k10d call_helper_with_constant_five @ 0x1046a45a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with a fixed constant of 5 and returns its boolean result.
 * summary:
 *   This function acts as a thin wrapper around load_firmware_update_file_1046a2b4. It passes
 *   the first argument, the integer constant 5, and the second argument to the callee. It
 *   then converts the boolean return value of the callee to an unsigned integer and returns
 *   it. The specific role of the constant 5 and the callee's behavior are not determinable
 *   from this snippet alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint call_helper_with_constant_five(void *param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = load_firmware_update_file_1046a2b4(param_1,5,param_2);
  return (uint)bVar1;
}
