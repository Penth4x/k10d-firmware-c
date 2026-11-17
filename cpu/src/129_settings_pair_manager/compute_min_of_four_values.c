/* @k10d compute_min_of_four_values @ 0x1045c2a4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Computes the minimum of four values derived from two input pointers and calls a helper
 *   with the result.
 * summary:
 *   The function calls four helper functions (call_single_helper_1045c0f2,
 *   call_single_helper_with_param_1045c10e, sum_two_struct_fields, sum_two_object_fields)
 *   on param_2 and param_3 to extract four scalar values. It determines the minimum value
 *   among these four results. If the minimum is less than a threshold (implied by the
 *   logic), it calls set_two_point_deltas with zeros and returns 0; otherwise, it calls
 *   set_two_point_deltas with the computed values and returns 1. The specific camera
 *   subsystem is not identifiable from the provided callees or code structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compute_min_of_four_values(uint32_t *param_1,uint32_t *param_2,uint32_t *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t *puVar5;
  int iVar6;
  uint32_t uVar7;
  uintptr_t sp;
  int *piVar8;
  uint8_t auStack_2c [4];
  
  piVar8 = (int *)auStack_2c;
  iVar1 = call_single_helper_1045c0f2(param_2);
  iVar2 = call_single_helper_1045c0f2(param_3);
  puVar5 = param_2;
  if (iVar1 < iVar2) {
    puVar5 = param_3;
  }
  iVar1 = call_single_helper_1045c0f2(puVar5);
  iVar2 = call_single_helper_with_param_1045c10e((int)param_2);
  iVar3 = call_single_helper_with_param_1045c10e((int)param_3);
  puVar5 = param_2;
  if (iVar2 < iVar3) {
    puVar5 = param_3;
  }
  iVar2 = call_single_helper_with_param_1045c10e((int)puVar5);
  iVar3 = sum_two_struct_fields(param_2);
  iVar4 = sum_two_struct_fields(param_3);
  puVar5 = param_2;
  if (iVar4 < iVar3) {
    puVar5 = param_3;
  }
  iVar3 = sum_two_struct_fields(puVar5);
  iVar4 = sum_two_object_fields(param_2);
  iVar6 = sum_two_object_fields(param_3);
  if (iVar6 < iVar4) {
    param_2 = param_3;
  }
  iVar4 = sum_two_object_fields(param_2);
  if ((iVar3 < iVar1) || (iVar4 < iVar2)) {
    *piVar8 = 0;
    set_two_point_deltas(param_1,0,0,0,*piVar8);
    uVar7 = 0;
  }
  else {
    *piVar8 = iVar4;
    set_two_point_deltas(param_1,iVar1,iVar2,iVar3,*piVar8);
    uVar7 = 1;
  }
  return uVar7;
}
