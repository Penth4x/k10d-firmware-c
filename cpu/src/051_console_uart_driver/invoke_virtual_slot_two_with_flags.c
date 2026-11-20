/* @k10d invoke_virtual_slot_two_with_flags @ 0x103b6aba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Resolves an object from a container and calls its virtual slot 2 twice with arguments 0
 *   and 1.
 * summary:
 *   The function calls menu_item_register with param_1 + 8 to obtain an object pointer
 *   iVar1. It then performs a Cfront-style virtual call to slot 2 (offset 0xc) of the
 *   object's vtable, passing the adjusted this pointer and the integer 0. It repeats the
 *   resolution and virtual call with the integer 1. The specific role of menu_item_register
 *   and the target object is unknown, so the operation is described mechanically as a
 *   double virtual dispatch.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_with_flags(int param_1)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
