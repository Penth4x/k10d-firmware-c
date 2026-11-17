/* @k10d invoke_virtual_slot_and_clear_byte_1038754c @ 0x1038754c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on an object twice and clears a byte at an offset in param_1.
 * summary:
 *   Calls menu_item_register with param_1 to obtain an object pointer, then performs a
 *   Cfront-style virtual call to slot 2 (offset 0xc) with argument 1, twice. Finally,
 *   writes 0 to the byte at param_1 + 0x58 + param_2. The role of menu_item_register and
 *   the object layout are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_and_clear_byte_1038754c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  *(uint8_t *)(param_1 + 0x58 + param_2) = 0;
  return;
}
