/* @k10d register_four_menu_items_103d6daa @ 0x103d6daa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object four times, alternating the second argument
 *   between 0 and 1.
 * summary:
 *   The function retrieves an object pointer via menu_item_register(*param_1) four times.
 *   Each time it performs a virtual call to slot 2 (offset 0xc) of the object's vtable,
 *   passing the adjusted object pointer and a literal integer (0, 1, 1, 0) as the second
 *   argument. The pattern suggests toggling a state or triggering a sequence of events on
 *   the target object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_four_menu_items_103d6daa(int *param_1)

{
  int iVar1;
  
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  return;
}
