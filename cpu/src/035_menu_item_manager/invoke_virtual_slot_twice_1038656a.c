/* @k10d invoke_virtual_slot_twice_1038656a @ 0x1038656a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resolves an object via a helper and invokes its virtual slot 2 with argument 1 twice.
 * summary:
 *   Calls menu_item_register(param_1) to obtain an object pointer, then performs a Cfront-
 *   style virtual call on slot 2 (vtable offset 0xc) of the sub-object at offset 0xc,
 *   passing the this-adjusted pointer and the constant 1. The sequence is repeated a second
 *   time with a fresh lookup of the same object. No camera-specific subsystem is evident
 *   from the code or the single unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_twice_1038656a(int param_1)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
