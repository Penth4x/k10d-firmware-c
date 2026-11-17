/* @k10d forward_call_with_offset_0x48 @ 0x104b4b1c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 216_settings_validation (unit names are model-proposed)
 * purpose:
 *   Calls manage_kernel_object_handle with param_1+0x48 and param_2, returning its result.
 * summary:
 *   This function is a thin wrapper that passes a pointer offset by 0x48 from param_1 along
 *   with param_2 to manage_kernel_object_handle. It returns the boolean result of that
 *   callee directly. No other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool forward_call_with_offset_0x48(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = manage_kernel_object_handle((int *)(param_1 + 0x48),param_2);
  return bVar1;
}
