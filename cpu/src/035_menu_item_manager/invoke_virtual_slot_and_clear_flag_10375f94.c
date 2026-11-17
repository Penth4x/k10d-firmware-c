/* @k10d invoke_virtual_slot_and_clear_flag_10375f94 @ 0x10375f94
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on an object derived from param_1 twice, then clears a byte at
 *   param_1+0x34+param_2.
 * summary:
 *   The function calls menu_item_register(param_1) to obtain an object pointer, then
 *   performs a Cfront-style virtual call to slot 2 (offset 0xc in the vtable) with argument
 *   1. This sequence is repeated. Finally, it writes 0 to the byte at offset
 *   param_1+0x34+param_2. The specific subsystem is not identifiable from the provided
 *   pseudocode and single unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_and_clear_flag_10375f94(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  *(uint8_t *)(param_1 + 0x34 + param_2) = 0;
  return;
}
