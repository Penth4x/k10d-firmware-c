/* @k10d invoke_virtual_slot_one_1040de5a @ 0x1040de5a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 096_sr_debug_menu (unit names are model-proposed)
 * purpose:
 *   Resolves an object via a helper and invokes its virtual slot 1 with argument 1.
 * summary:
 *   Calls menu_item_register with param_1+8 to obtain an object pointer iVar1. Then
 *   performs a Cfront-style virtual call: reads the vtable at iVar1+0xc, takes the function
 *   pointer at offset 0xc (slot 1), adds the this-adjustment short at vtable+8 to iVar1,
 *   and calls it with the literal argument 1. No camera-specific behavior is evident from
 *   the code or the single unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_one_1040de5a(int param_1)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
