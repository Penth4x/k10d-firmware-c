/* @k10d invoke_virtual_slot_two_1038a0ae @ 0x1038a0ae
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resolves an object via menu_item_register and calls its virtual slot 2 with 0 or 1
 *   based on param_2.
 * summary:
 *   Calls menu_item_register(param_1) to obtain an object pointer iVar1. Reads the vtable
 *   pointer at iVar1+0xc and invokes virtual slot 2 (offset 0xc) with a this-adjustment
 *   from the short at iVar1+0xc+8. Passes 0 to the virtual method if param_2 is 0 or 1,
 *   otherwise passes 1. The specific subsystem role is not determinable from the provided
 *   pseudocode and unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1038a0cc) overlaps instruction at (ram,0x1038a0ca)
    */

void invoke_virtual_slot_two_1038a0ae(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1);
  if ((param_2 == 1) || (param_2 == 0)) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
  }
  return;
}
