/* @k10d compute_cumulative_offsets_10519cb4 @ 0x10519cb4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Calculates cumulative sums of four values from a struct and stores them in offset
 *   fields.
 * summary:
 *   The function reads a base value from param_1[1] and then iteratively adds results from
 *   sum_two_values_plus_six on four consecutive sub-structures (at offsets 3, 0x11, 0x1f,
 *   0x2d). It stores the running total into specific fields (0xd, 0x1b, 0x29, 0x37) and
 *   calls store_pointer_in_array_and_notify with these values. Finally, it sums the four
 *   values again plus 8 and stores the result in param_1[0].
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_cumulative_offsets_10519cb4(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  iVar6 = param_1[1];
  piVar1 = param_1 + 3;
  param_1[0xd] = iVar6;
  layout_list_items_sequentially((int)piVar1);
  iVar2 = sum_two_values_plus_six(piVar1);
  iVar6 = iVar6 + iVar2;
  piVar8 = param_1 + 0x11;
  param_1[0x1b] = iVar6;
  layout_list_items_sequentially((int)piVar8);
  iVar2 = sum_two_values_plus_six(piVar8);
  iVar2 = iVar2 + iVar6;
  piVar7 = param_1 + 0x1f;
  param_1[0x29] = iVar2;
  layout_list_items_sequentially((int)piVar7);
  iVar3 = sum_two_values_plus_six(piVar7);
  piVar4 = param_1 + 0x2d;
  param_1[0x37] = iVar3 + iVar2;
  layout_list_items_sequentially((int)piVar4);
  store_pointer_in_array_and_notify((void *)param_1[0x4d],piVar8,iVar6,0);
  store_pointer_in_array_and_notify((void *)param_1[0x4d],piVar7,iVar2,1);
  store_pointer_in_array_and_notify((void *)param_1[0x4e],piVar4,iVar3 + iVar2,0);
  update_object_field_and_notify_104a91aa(param_1 + 0x3b,*(int *)(param_1[0x4f] + 8));
  iVar2 = sum_two_values_plus_six(piVar1);
  iVar3 = sum_two_values_plus_six(piVar8);
  iVar6 = sum_two_values_plus_six(piVar7);
  iVar5 = sum_two_values_plus_six(piVar4);
  *param_1 = iVar2 + 8 + iVar3 + iVar6 + iVar5;
  return;
}
