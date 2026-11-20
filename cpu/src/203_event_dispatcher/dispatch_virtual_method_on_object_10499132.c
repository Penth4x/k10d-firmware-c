/* @k10d dispatch_virtual_method_on_object_10499132 @ 0x10499132
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_method_on_object_10499132(cls_105b5628 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  forward_two_args_to_helper_1049c38e(&param_1->field_0x4c,*(uint32_t *)(param_2 + 8));
  iVar2 = 0x18;
  if (param_1->field_0x50 != -1) {
    iVar2 = 0x1c;
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
