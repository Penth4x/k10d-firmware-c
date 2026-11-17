/* @k10d execute_three_step_operation @ 0x104763d0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Performs a sequential three-stage operation on an object, returning success only if all
 *   stages complete.
 * summary:
 *   The function calls call_helper_with_offset_pointer_104752e2 with a field from param_1
 *   (offset 8) as a precondition check. If successful, it calls
 *   invoke_virtual_slot_two_and_store_result with param_1, a value from param_2, and a
 *   field from param_1 (offset 0x10). Finally, it calls read_field_at_offset_c with a field
 *   from param_1 (offset 0xc), stores the result in param_3, and returns 1 on success or 0
 *   on any failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t execute_three_step_operation(int param_1,uint16_t *param_2,int *param_3)

{
  uint16_t uVar1;
  uint32_t uVar2;
  int iVar3;
  
  uVar1 = *param_2;
  iVar3 = call_helper_with_offset_pointer_104752e2(*(int *)(param_1 + 8));
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = invoke_virtual_slot_two_and_store_result(param_1,uVar1,*(uint32_t *)(param_1 + 0x10));
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      iVar3 = read_field_at_offset_c(*(int *)(param_1 + 0xc));
      *param_3 = iVar3;
      uVar2 = 1;
      if (iVar3 == 0) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
