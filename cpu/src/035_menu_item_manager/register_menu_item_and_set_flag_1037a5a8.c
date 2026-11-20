/* @k10d register_menu_item_and_set_flag_1037a5a8 @ 0x1037a5a8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves an object via a helper and invokes a virtual method with argument 1,
 *   branching on a byte in the input structure.
 * summary:
 *   The function checks a byte at offset 0x34+param_2 in the structure pointed to by
 *   param_1. Regardless of the check result, it calls menu_item_register(param_1) to obtain
 *   an object pointer. It then performs a virtual call on that object, specifically
 *   invoking slot 2 (offset 0xc in the vtable) with the object as 'this' and the integer 1
 *   as the first argument. The if/else branches are identical, suggesting the condition may
 *   be a placeholder or the logic was simplified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_and_set_flag_1037a5a8(cls_10558830 *param_1,int param_2)

{
  int iVar1;
  
  if ((&param_1->field_0x34)[param_2] == '\0') {
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else {
    iVar1 = menu_item_register((int)param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
