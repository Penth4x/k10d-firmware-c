/* @k10d compute_cumulative_offsets_1049f3fe @ 0x1049f3fe
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes cumulative sums of four sub-object sizes and stores them as offsets within a
 *   container struct.
 * summary:
 *   The function reads a base value from param_1[1] and iteratively adds the sizes of four
 *   sub-objects (located at offsets 3, 0x11, 0x1f, and 0x2d) to build a chain of cumulative
 *   offsets. It stores these cumulative values at offsets 0xd, 0x1b, 0x29, and 0x37. It
 *   also calls store_pointer_in_array_and_notify twice with pointers from param_1[0x4d] and
 *   param_1[0x4e], and finally stores the total size (sum of all four sub-object sizes plus
 *   8) in param_1[0]. The caller is a virtual method of class cls_105b5b6c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_cumulative_offsets_1049f3fe(int *param_1)

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
  update_object_field_and_notify_104a91aa(param_1 + 0x3b,*(int *)(param_1[0x4f] + 8));
  iVar1 = sum_two_values_plus_six(piVar5);
  iVar3 = sum_two_values_plus_six(piVar2);
  iVar6 = sum_two_values_plus_six(piVar7);
  iVar4 = sum_two_values_plus_six(piVar8);
  *param_1 = iVar1 + 8 + iVar3 + iVar6 + iVar4;
  return;
}
