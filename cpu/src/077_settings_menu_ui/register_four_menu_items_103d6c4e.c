/* @k10d register_four_menu_items_103d6c4e @ 0x103d6c4e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 1 of an object four times with arguments 0, 1, 0, 0.
 * summary:
 *   The function repeatedly resolves an object via menu_item_register(*param_1) and then
 *   performs a virtual call to slot 1 (offset 0xc in the vtable) on that object. The 'this'
 *   pointer is adjusted by the short value at offset 8 of the vtable. The sequence of
 *   arguments passed to the virtual method is 0, 1, 0, 0. The specific role of the virtual
 *   method is unknown as the callee menu_item_register is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_four_menu_items_103d6c4e(int *param_1)

{
  int iVar1;
  
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  return;
}
