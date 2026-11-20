/* @k10d invoke_virtual_slot_two_103b70ce @ 0x103b70ce
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 of an object derived from param_1, then conditionally re-invokes
 *   it with zero or one based on a state field.
 * summary:
 *   The function resolves an object via menu_item_register(param_1+8) and invokes virtual
 *   slot 2 (offset 0xc in the vtable) with param_2. If param_2 is non-zero, it repeats the
 *   call six times with argument 0, then checks
 *   get_setting_by_mode_flag_104f08ac(param_1+0x28); if the result is 4, 5, or 6, it makes
 *   one final call with argument 1. The callees menu_item_register and
 *   get_setting_by_mode_flag_104f08ac are unnamed, so the specific subsystem is not
 *   determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_103b70ce(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1 + 8;
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_2);
  if (param_2 != 0) {
    iVar1 = menu_item_register(iVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(iVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(iVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(iVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(iVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(iVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = get_setting_by_mode_flag_104f08ac(*(uint32_t *)((int)param_1 + 0x28));
    if (iVar1 == 4) {
      iVar1 = menu_item_register(iVar2);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    else if (iVar1 == 5) {
      iVar1 = menu_item_register(iVar2);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
    else if (iVar1 == 6) {
      iVar1 = menu_item_register(iVar2);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    }
  }
  return;
}
