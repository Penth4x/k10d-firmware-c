/* @k10d invoke_virtual_slot_two_with_one @ 0x10384bb6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Fetches an object via a helper and calls its virtual slot 2 with argument 1, after
 *   checking a byte in a buffer.
 * summary:
 *   The function checks the byte at offset (0x74 + param_2) in the buffer pointed to by
 *   param_1. Regardless of whether that byte is zero or not, it calls
 *   menu_item_register(param_1) to obtain an object pointer. It then performs a virtual
 *   call to slot 2 (offset 0xc in the vtable) of that object, passing the adjusted object
 *   pointer and the integer 1. The if/else branches are identical, suggesting the check is
 *   a no-op or placeholder.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_with_one(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x74 + param_2) == '\0') {
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else {
    iVar1 = menu_item_register(param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
