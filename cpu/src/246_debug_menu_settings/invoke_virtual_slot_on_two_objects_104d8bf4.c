/* @k10d invoke_virtual_slot_on_two_objects_104d8bf4 @ 0x104d8bf4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_on_two_objects_104d8bf4(void *param_1,void *param_2,uint32_t param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = get_or_create_singleton_object_104d8cbe();
  iVar2 = (((vtbl_entry*)(*(int *)(iVar2 + 0x1c)))[2].fn)
                    (iVar2 + ((vtbl_entry*)(*(int *)(iVar2 + 0x1c)))[2].adj,param_2,param_3);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = get_or_create_singleton_object_104d8e3e();
    iVar2 = (((vtbl_entry*)(*(int *)(iVar2 + 0x1c)))[2].fn)
                      (iVar2 + ((vtbl_entry*)(*(int *)(iVar2 + 0x1c)))[2].adj,param_2,param_3);
    uVar1 = 1;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
