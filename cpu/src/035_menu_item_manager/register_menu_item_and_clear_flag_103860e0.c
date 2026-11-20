/* @k10d register_menu_item_and_clear_flag_103860e0 @ 0x103860e0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves an object, invokes its virtual slot 2 twice with argument 1, and clears a
 *   byte at an offset in param_1.
 * summary:
 *   Calls menu_item_register twice with param_1 to obtain an object pointer. For each
 *   result, it performs a virtual call to slot 2 (offset 0xc in the vtable) with the object
 *   (adjusted by a short offset) and the integer 1. Finally, it writes 0 to the byte at
 *   param_1 + 0x44 + param_2. The specific subsystem is not identifiable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_and_clear_flag_103860e0(cls_105592e8 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  (&param_1->field_0x44)[param_2] = 0;
  return;
}
