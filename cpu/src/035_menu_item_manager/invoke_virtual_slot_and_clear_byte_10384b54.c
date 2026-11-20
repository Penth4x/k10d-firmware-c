/* @k10d invoke_virtual_slot_and_clear_byte_10384b54 @ 0x10384b54
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object twice and clears a byte in the caller's
 *   structure.
 * summary:
 *   The function calls menu_item_register with param_1 to obtain an object pointer. It then
 *   performs a virtual call (slot 1) on a sub-object located at offset 0xc of that object,
 *   passing the adjusted object pointer and the constant 1. This sequence is repeated.
 *   Finally, it writes 0 to the byte at offset 0x74 + param_2 within the structure pointed
 *   to by param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_and_clear_byte_10384b54(cls_105590b8 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  (&param_1->field_0x74)[param_2] = 0;
  return;
}
