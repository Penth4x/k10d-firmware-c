/* @k10d check_flag_and_call_helper_10498ee2 @ 0x10498ee2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Returns 1 if param_3 is zero, calling query_two_status_flags when param_2 points to
 *   value 1.
 * summary:
 *   The function tests param_3 for zero. If it is zero and the short at param_2 equals 1,
 *   it calls query_two_status_flags. It then returns 1 in that case, otherwise 0. It is
 *   invoked as virtual method slot 3 of cls_105b55fc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_flag_and_call_helper_10498ee2(uint32_t param_1,short *param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_3 == 0) {
    if (*param_2 == 1) {
      query_two_status_flags(__frv_reg_unset(4), __frv_reg_unset(5));
    }
    uVar1 = 1;
  }
  return uVar1;
}
