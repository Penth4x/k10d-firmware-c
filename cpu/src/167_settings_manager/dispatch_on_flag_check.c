/* @k10d dispatch_on_flag_check @ 0x104759e8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a status flag and conditionally calls a handler, returning a 0/1/2 status code.
 * summary:
 *   The function calls check_operation_via_helper to retrieve a status value. If the value
 *   is non-zero, it returns 0. If the value is zero, it calls compare_and_apply_two_fields
 *   with the four input parameters. If compare_and_apply_two_fields returns non-zero, the
 *   function returns 1; otherwise, it returns 2. This pattern suggests a state-machine
 *   dispatch or a conditional operation wrapper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_flag_check(uint32_t param_1,char *param_2,uint16_t *param_3,uint16_t *param_4)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 2;
  iVar1 = check_operation_via_helper(__frv_reg_unset(4),(void *)__frv_reg_unset(5));
  if (iVar1 == 0) {
    iVar1 = compare_and_apply_two_fields(param_1,param_2,param_3,param_4);
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
