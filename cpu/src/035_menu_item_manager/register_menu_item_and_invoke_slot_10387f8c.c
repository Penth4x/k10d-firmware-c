/* @k10d register_menu_item_and_invoke_slot_10387f8c @ 0x10387f8c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resolves an object pointer and invokes a virtual method on it with a single parameter.
 * summary:
 *   Calls menu_item_register with param_1 to obtain an object pointer. Extracts a vtable
 *   pointer from offset 0xc of the object, then reads the function pointer at offset 0xc of
 *   that vtable. Performs a virtual call with a this-adjustment derived from the vtable
 *   entry at offset 8, passing param_2 as the argument. The callee menu_item_register is
 *   not named, so the specific subsystem is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_and_invoke_slot_10387f8c(int param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_2);
  return;
}
