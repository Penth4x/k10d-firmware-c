/* @k10d register_six_menu_items_103d6a86 @ 0x103d6a86
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Resolves an object via a helper and invokes its virtual slot 2 six times with
 *   alternating 0/1 arguments.
 * summary:
 *   The function calls menu_item_register with *param_1 six times to obtain an object
 *   pointer. For each result it performs a Cfront-style virtual call to slot 2 (offset 0xc
 *   in the vtable) of the sub-object at offset 0xc, passing the this-adjusted pointer and a
 *   second argument that is 0 for the first four calls and 1 for the last two. It is a
 *   virtual method (slots 8/9) of class cls_1059639c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_six_menu_items_103d6a86(int *param_1)

{
  int iVar1;
  
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
