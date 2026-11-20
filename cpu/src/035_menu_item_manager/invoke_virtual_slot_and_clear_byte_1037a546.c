/* @k10d invoke_virtual_slot_and_clear_byte_1037a546 @ 0x1037a546
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object retrieved via a helper, then clears a byte in the
 *   caller's structure.
 * summary:
 *   Calls menu_item_register twice with param_1 to obtain an object pointer. For each
 *   result, it performs a Cfront-style virtual call to slot 2 (offset 0xc) with the
 *   argument 1. Finally, it writes 0 to the byte at offset param_2 + 0x34 in the structure
 *   pointed to by param_1. The specific subsystem is not identifiable from the provided
 *   code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_and_clear_byte_1037a546(cls_10558830 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  (&param_1->field_0x34)[param_2] = 0;
  return;
}
