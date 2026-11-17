/* @k10d pick_min_of_four_fields @ 0x1045c340
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Computes the minimum of four scalar fields from two objects and passes them to a
 *   helper.
 * summary:
 *   The function calls four accessor functions (call_single_helper_1045c0f2,
 *   call_single_helper_with_param_1045c10e, sum_two_struct_fields, sum_two_object_fields)
 *   on param_2 and param_3. For each accessor, it compares the two returned values and
 *   selects the smaller one. It then calls set_two_point_deltas with param_1 and the four
 *   selected minimum values as arguments, returning 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t pick_min_of_four_fields(uint32_t *param_1,uint32_t *param_2,uint32_t *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t *puVar5;
  int iVar6;
  uintptr_t sp;
  int *piVar7;
  uint8_t auStack_28 [4];
  
  piVar7 = (int *)auStack_28;
  iVar1 = call_single_helper_1045c0f2(param_2);
  iVar2 = call_single_helper_1045c0f2(param_3);
  puVar5 = param_2;
  if (iVar2 < iVar1) {
    puVar5 = param_3;
  }
  iVar1 = call_single_helper_1045c0f2(puVar5);
  iVar2 = call_single_helper_with_param_1045c10e((int)param_2);
  iVar3 = call_single_helper_with_param_1045c10e((int)param_3);
  puVar5 = param_2;
  if (iVar3 < iVar2) {
    puVar5 = param_3;
  }
  iVar2 = call_single_helper_with_param_1045c10e((int)puVar5);
  iVar3 = sum_two_struct_fields(param_2);
  iVar4 = sum_two_struct_fields(param_3);
  puVar5 = param_2;
  if (iVar3 < iVar4) {
    puVar5 = param_3;
  }
  iVar3 = sum_two_struct_fields(puVar5);
  iVar4 = sum_two_object_fields(param_2);
  iVar6 = sum_two_object_fields(param_3);
  if (iVar4 < iVar6) {
    param_2 = param_3;
  }
  iVar4 = sum_two_object_fields(param_2);
  *piVar7 = iVar4;
  set_two_point_deltas(param_1,iVar1,iVar2,iVar3,*piVar7);
  return 1;
}
