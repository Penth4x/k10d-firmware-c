/* @k10d dispatch_virtual_method_on_object_1051aa68 @ 0x1051aa68
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_method_on_object_1051aa68(cls_105d6684 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  forward_two_args_to_helper_1049c38e(&param_1->field_0x3c,*(uint32_t *)(param_2 + 8));
  iVar2 = 0x48;
  if (param_1->field_0x54 != -1) {
    iVar2 = 0x44;
  }
  piVar1 = *(int **)((int)&param_1->field_0x0 + iVar2);
  iVar2 = *piVar1;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((int)((vtbl_entry*)(iVar2))[3].adj + (int)piVar1,*(uint32_t *)(param_2 + 0xc));
  if (param_2 != 0) {
    (((vtbl_entry*)(*(int *)(param_2 + 4)))[1].fn)(*(short *)(*(int *)(param_2 + 4) + 8) + param_2,3);
  }
  return;
}
