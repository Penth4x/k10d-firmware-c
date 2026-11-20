/* @k10d register_menu_item_and_clear_flag_10381da2 @ 0x10381da2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object derived from param_1 twice, then clears a byte at
 *   an offset in param_1.
 * summary:
 *   The function calls menu_item_register with param_1 to obtain an object pointer. It then
 *   performs a virtual call (slot 2) on the object's vtable, passing the adjusted object
 *   pointer and the constant 1. This sequence is repeated. Finally, it writes 0 to the byte
 *   at address param_1 + 0xa2 + param_2. The specific subsystem is not identifiable from
 *   the provided code and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_and_clear_flag_10381da2(cls_10558e74 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  ((uint8_t *)&param_1[1] + 0x35)[param_2] = 0;
  return;
}
