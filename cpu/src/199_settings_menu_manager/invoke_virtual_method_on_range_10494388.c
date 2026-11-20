/* @k10d invoke_virtual_method_on_range_10494388 @ 0x10494388
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_range_10494388(cls_105b48dc *param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)0x10493db4/*ROM*/)();
  piVar1 = (int *)((uintptr_t)(param_1->field11_0x18));
  if ((uint32_t)(piVar1) != param_1->field_0x1c) {
    do {
      iVar2 = *(int *)(*piVar1 + 0xc);
      (((vtbl_entry*)(iVar2))[21].fn)(*piVar1 + (int)((vtbl_entry*)(iVar2))[21].adj,param_2);
      piVar1 = piVar1 + 1;
    } while ((uint32_t)(piVar1) != param_1->field_0x1c);
  }
  return;
}
