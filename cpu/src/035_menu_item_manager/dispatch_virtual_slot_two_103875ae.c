/* @k10d dispatch_virtual_slot_two_103875ae @ 0x103875ae
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves an object via a helper and invokes its virtual slot 2 with argument 1.
 * summary:
 *   The function calls menu_item_register with param_1 to obtain an object pointer. It then
 *   performs a virtual call to slot 2 (offset 0xc in the vtable) of that object, passing
 *   the adjusted object pointer and the constant 1. The initial check on a byte at param_1
 *   + 0x58 + param_2 is redundant as both branches execute identical code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_two_103875ae(cls_10559448 *param_1,int param_2)

{
  int iVar1;
  
  if ((&param_1->field_0x58)[param_2] == '\0') {
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else {
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
