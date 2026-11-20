/* @k10d dispatch_virtual_state_toggle @ 0x103b046e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object retrieved via menu_item_register with state
 *   arguments 0 and 1, gated by a flag check.
 * summary:
 *   The function retrieves an object pointer using menu_item_register with an offset from
 *   param_1. It performs a virtual call (slot 2) with argument 0, then again with argument
 *   1. A switch statement on a byte at param_1+0x48 is present but all cases are empty.
 *   Finally, it checks a value from check_object_property_43 and conditionally repeats the
 *   virtual call with argument 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_state_toggle(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)param_1 + 8;
  iVar1 = menu_item_register(iVar3);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  switch(*(uint8_t *)((int)param_1 + 0x48)) {
  case 6:
    break;
  default:
    break;
  case 8:
    break;
  case 10:
    break;
  case 0xc:
    break;
  case 0xe:
    break;
  case 0x16:
    break;
  case 0x18:
    break;
  case 0x1c:
    break;
  case 0x1e:
  }
  iVar1 = menu_item_register(iVar3);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  uVar2 = check_object_property_43(*(int *)((int)param_1 + 0x28));
  if (uVar2 != 0) {
    iVar1 = menu_item_register(iVar3);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
