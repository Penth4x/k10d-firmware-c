/* @k10d compute_cumulative_offsets_104a0ffa @ 0x104a0ffa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes cumulative sums of four sub-block sizes and stores them as offsets within a
 *   structure.
 * summary:
 *   The function reads a base value from param_1[1] and then iteratively calculates four
 *   cumulative offsets by calling sum_two_values_plus_six on four distinct sub-structures
 *   (at offsets 3, 0x11, 0x1f, and 0x2d). It stores these running totals into fields 0xd,
 *   0x1b, 0x29, and 0x37 of the main structure. It also updates pointers at 0xe and 0x2a,
 *   calls a helper store_pointer_in_array_and_notify with the second sub-structure and the
 *   first cumulative sum, and finally sets the first field of the structure to the total
 *   size (sum of all four sub-block sizes plus 8).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_cumulative_offsets_104a0ffa(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar7 = param_1[1];
  piVar1 = param_1 + 3;
  param_1[0xd] = iVar7;
  layout_list_items_sequentially((int)piVar1);
  iVar2 = sum_two_values_plus_six(piVar1);
  iVar7 = iVar7 + iVar2;
  piVar3 = param_1 + 0x11;
  param_1[0x1b] = iVar7;
  layout_list_items_sequentially((int)piVar3);
  iVar2 = sum_two_values_plus_six(piVar3);
  piVar8 = param_1 + 0x1f;
  param_1[0x29] = iVar2 + iVar7;
  layout_list_items_sequentially((int)piVar8);
  iVar4 = sum_two_values_plus_six(piVar8);
  piVar5 = param_1 + 0x2d;
  param_1[0x37] = iVar2 + iVar7 + iVar4;
  layout_list_items_sequentially((int)piVar5);
  store_pointer_in_array_and_notify((void *)param_1[0x4d],piVar3,iVar7,0);
  param_1[0xe] = (int)piVar8;
  param_1[0x2a] = (int)piVar5;
  update_object_field_and_notify_104a91aa(param_1 + 0x3b,*(int *)(param_1[0x4e] + 8));
  iVar2 = sum_two_values_plus_six(piVar1);
  iVar4 = sum_two_values_plus_six(piVar3);
  iVar7 = sum_two_values_plus_six(piVar8);
  iVar6 = sum_two_values_plus_six(piVar5);
  *param_1 = iVar2 + 8 + iVar4 + iVar7 + iVar6;
  return;
}
