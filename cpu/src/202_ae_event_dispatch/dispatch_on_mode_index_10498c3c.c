/* @k10d dispatch_on_mode_index_10498c3c @ 0x10498c3c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 202_ae_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Dispatches to one of three helper functions based on the value of param_3, returning 1
 *   for unknown values.
 * summary:
 *   This function acts as a simple switch dispatcher. It checks the integer parameter
 *   param_3: if 0, it calls dispatch_on_mode_index_10498c7e with the other arguments; if 1,
 *   it calls dispatch_event_by_type_10498d6a; if 2, it calls
 *   check_flag_and_call_helper_10498ee2; otherwise it returns 1. It is virtual method slot
 *   3 of class cls_105b55fc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_mode_index_10498c3c(uint32_t param_1,uint32_t param_2,int param_3,uint32_t param_4)

{
  uint32_t uVar1;
  
  if (param_3 == 0) {
    uVar1 = dispatch_on_mode_index_10498c7e(param_1,param_2,param_4);
  }
  else if (param_3 == 1) {
    uVar1 = dispatch_event_by_type_10498d6a(__frv_reg_unset(4),(ushort *)__frv_reg_unset(5),__frv_reg_unset(6));
  }
  else if (param_3 == 2) {
    uVar1 = check_flag_and_call_helper_10498ee2(__frv_reg_unset(4),(short *)__frv_reg_unset(5),__frv_reg_unset(6));
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
