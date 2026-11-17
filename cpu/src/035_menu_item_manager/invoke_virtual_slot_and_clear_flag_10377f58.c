/* @k10d invoke_virtual_slot_and_clear_flag_10377f58 @ 0x10377f58
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object derived from param_1 twice, then clears a byte in
 *   param_1.
 * summary:
 *   The function calls menu_item_register(param_1) to obtain an object pointer. It then
 *   performs a Cfront-style virtual call to slot 2 (offset 0xc) of the sub-object at offset
 *   0xc, passing the adjusted object pointer and the constant 1. This sequence is repeated.
 *   Finally, it writes 0 to the byte at offset 0x34 + param_2 within the param_1 structure.
 *   The specific camera subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_and_clear_flag_10377f58(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  *(uint8_t *)(param_1 + 0x34 + param_2) = 0;
  return;
}
