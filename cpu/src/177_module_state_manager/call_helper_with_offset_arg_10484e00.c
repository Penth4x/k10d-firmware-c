/* @k10d call_helper_with_offset_arg_10484e00 @ 0x10484e00
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls compute_struct_offset_10428532 with param_1+0x14 and in_r5, returning its result.
 * summary:
 *   A one-line wrapper that forwards two arguments (param_1 plus a 0x14 offset and the
 *   in_r5 register) to compute_struct_offset_10428532 and returns its return value
 *   unchanged. No local state is modified and no other side effects are visible. The role
 *   of compute_struct_offset_10428532 is unknown, so the subsystem cannot be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_with_offset_arg_10484e00(int param_1)

{
  int iVar1;
  int r5_in;
  
  iVar1 = compute_struct_offset_10428532(param_1 + 0x14,r5_in);
  return iVar1;
}
