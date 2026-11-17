/* @k10d dispatch_param_by_type_10476604 @ 0x10476604
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_param_by_type_10476604(int param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = invoke_virtual_slot_two_and_store_result(param_1,param_2,*(uint32_t *)(param_1 + 0x10));
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = (*(code *)0x1047e486/*ROM*/)(param_3);
    if (iVar1 == 0) {
      uVar2 = iterate_and_write_object_list(param_1,param_3);
    }
    else if (iVar1 == 1) {
      uVar2 = iterate_and_dispatch_list_items(param_1,param_3);
    }
    else if (iVar1 == 2) {
      uVar2 = iterate_list_and_notify(param_1,param_3);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
