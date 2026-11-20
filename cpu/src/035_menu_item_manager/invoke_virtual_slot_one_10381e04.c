/* @k10d invoke_virtual_slot_one_10381e04 @ 0x10381e04
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Checks a byte at param_1+0xa2+param_2 and unconditionally calls virtual slot 1 on an
 *   object obtained from menu_item_register.
 * summary:
 *   The function reads a byte from an offset in param_1, but both branches of the if/else
 *   execute identical code. It calls menu_item_register(param_1) to get an object pointer,
 *   then performs a virtual call to slot 1 (offset 0xc in the vtable) with argument 1. The
 *   conditional check on the byte at offset 0xa2+param_2 has no effect on the control flow.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_one_10381e04(cls_10558e74 *param_1,int param_2)

{
  int iVar1;
  
  if (((uint8_t*)&param_1[1] + 0x35)[param_2] == '\0') {
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else {
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
