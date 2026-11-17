/* @k10d call_helper_and_notify_result @ 0x10529ae0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with all parameters, then notifies a global object of the result based
 *   on a flag.
 * summary:
 *   Invokes compute_conditional_offset with the seven input parameters and stores the
 *   return value. Retrieves a pointer from get_or_create_singleton_object_1050b118. If
 *   param_7 is zero, calls forward_params_via_offset with the pointer, result, and 0;
 *   otherwise calls forward_params_via_offset_0x28 with the pointer, result, 0, and 3. The
 *   specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_and_notify_result(void *param_1,int param_2,int param_3,uint32_t param_4,uint8_t param_5,
                 char param_6,byte param_7)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = compute_conditional_offset(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (param_7 == 0) {
    uVar2 = get_or_create_singleton_object_1050b118();
    forward_params_via_offset(uVar2,iVar1,0);
  }
  else {
    uVar2 = get_or_create_singleton_object_1050b118();
    forward_params_via_offset_0x28(uVar2,iVar1,0,3);
  }
  return;
}
