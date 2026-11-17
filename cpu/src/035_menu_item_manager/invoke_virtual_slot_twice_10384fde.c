/* @k10d invoke_virtual_slot_twice_10384fde @ 0x10384fde
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resolves an object via a helper and invokes its virtual slot 2 with argument 1 twice.
 * summary:
 *   Calls menu_item_register(param_1) to obtain an object pointer iVar1. Performs a Cfront-
 *   style virtual call through the vtable at *(iVar1+0xc), using slot offset 0xc (slot 2)
 *   with a this-adjustment from the short at *(iVar1+0xc)+8, passing the constant 1.
 *   Repeats the identical resolution and virtual call a second time. No other side effects
 *   are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_twice_10384fde(int param_1)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
