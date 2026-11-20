/* @k10d compute_cumulative_offsets_1049df2e @ 0x1049df2e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes cumulative sums of four sub-block sizes and stores them as offsets within a
 *   structure.
 * summary:
 *   The function reads four pointers from param_1 (at offsets 3, 0x11, 0x1f, 0x2d). For
 *   each, it calls layout_list_items_sequentially (likely initialization) and
 *   sum_two_values_plus_six (likely size retrieval). It accumulates these sizes to create
 *   running offsets, storing them in the structure at offsets 0xd, 0x1b, 0x29, and 0x37. It
 *   also calls store_pointer_in_array_and_notify twice with these offsets and updates the
 *   total size in param_1[0] by summing the four sizes plus 8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_cumulative_offsets_1049df2e(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  iVar6 = param_1[1];
  piVar5 = param_1 + 3;
  param_1[0xd] = iVar6;
  layout_list_items_sequentially((int)piVar5);
  iVar1 = sum_two_values_plus_six(piVar5);
  iVar6 = iVar6 + iVar1;
  piVar2 = param_1 + 0x11;
  param_1[0x1b] = iVar6;
  layout_list_items_sequentially((int)piVar2);
  iVar1 = sum_two_values_plus_six(piVar2);
  iVar1 = iVar1 + iVar6;
  piVar7 = param_1 + 0x1f;
  param_1[0x29] = iVar1;
  layout_list_items_sequentially((int)piVar7);
  iVar3 = sum_two_values_plus_six(piVar7);
  piVar8 = param_1 + 0x2d;
  param_1[0x37] = iVar3 + iVar1;
  layout_list_items_sequentially((int)piVar8);
  store_pointer_in_array_and_notify((void *)param_1[0x4d],piVar2,iVar6,0);
  store_pointer_in_array_and_notify((void *)param_1[0x4e],piVar7,iVar1,0);
  param_1[0xe] = (int)piVar8;
  update_object_field_and_notify_104a91aa((cls_105b6aa0 *)(param_1 + 0x3b),*(int *)(param_1[0x4f] + 8));
  iVar1 = sum_two_values_plus_six(piVar5);
  iVar3 = sum_two_values_plus_six(piVar2);
  iVar6 = sum_two_values_plus_six(piVar7);
  iVar4 = sum_two_values_plus_six(piVar8);
  *param_1 = iVar1 + 8 + iVar3 + iVar6 + iVar4;
  return;
}
