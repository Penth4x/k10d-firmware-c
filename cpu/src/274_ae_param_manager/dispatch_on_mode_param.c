/* @k10d dispatch_on_mode_param @ 0x1051b024
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches to one of two handlers based on the value of param_3, returning 1 for
 *   unknown modes.
 * summary:
 *   This function acts as a simple switch on param_3. If param_3 is 0, it calls
 *   dispatch_by_two_flags with all five arguments. If param_3 is 1, it calls
 *   dispatch_message_by_type_1051b110 with no arguments. For any other value, it returns 1
 *   directly. It is virtual slot 3 of class cls_105d66dc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_mode_param(int param_1,void *param_2,int param_3,int param_4,int param_5)

{
  uint32_t uVar1;
  
  if (param_3 == 0) {
    uVar1 = dispatch_by_two_flags(param_1,param_2,param_4,param_5);
  }
  else if (param_3 == 1) {
    uVar1 = dispatch_message_by_type_1051b110(__frv_reg_unset(4),(ushort *)__frv_reg_unset(5));
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
