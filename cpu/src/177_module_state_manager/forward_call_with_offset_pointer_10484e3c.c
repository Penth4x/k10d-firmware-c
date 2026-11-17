/* @k10d forward_call_with_offset_pointer_10484e3c @ 0x10484e3c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with the first argument offset by 0x14 and passes the remaining four
 *   parameters unchanged.
 * summary:
 *   The function is a thin wrapper that computes param_1 + 0x14 and forwards it along with
 *   param_2 through param_5 to copy_structured_field_array. It performs no other
 *   operations, side effects, or state modifications. The role of
 *   copy_structured_field_array is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_call_with_offset_pointer_10484e3c(int param_1,int param_2,void *param_3,int param_4,int param_5)

{
  copy_structured_field_array((void *)(param_1 + 0x14),param_2,param_3,param_4,param_5);
  return;
}
