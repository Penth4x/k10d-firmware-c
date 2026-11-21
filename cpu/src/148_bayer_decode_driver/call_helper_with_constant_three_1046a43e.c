/* @k10d call_helper_with_constant_three_1046a43e @ 0x1046a43e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Calls load_firmware_update_file_1046a2b4 with param_1, the constant 3, and param_2,
 *   returning the boolean result.
 * summary:
 *   This is a thin wrapper that forwards its two arguments to
 *   load_firmware_update_file_1046a2b4, inserting the literal integer 3 as the second
 *   parameter. It converts the callee's boolean return value to a uint. The specific role
 *   of load_firmware_update_file_1046a2b4 is unknown, so the camera subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint call_helper_with_constant_three_1046a43e(void *param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = load_firmware_update_file_1046a2b4(param_1,3,param_2);
  return (uint)bVar1;
}
