/* @k10d register_menu_item_entry_10377ee8 @ 0x10377ee8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Copies 16 bytes from param_3 to a fixed offset in param_2, then calls two helpers on
 *   param_1 and sets a flag byte.
 * summary:
 *   The function performs a 4-iteration loop copying 16 bytes from the source pointed to by
 *   param_3 into a destination calculated as param_2 * 0x10 + 0x8001942c. It then calls
 *   menu_item_register with param_1, passes the result to
 *   call_helper_and_set_flag_10494b88, calls menu_item_register again, and invokes a
 *   virtual method (slot 2) on the returned object with argument 1. Finally, it sets the
 *   byte at param_1 + 0x34 + param_2 to 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_entry_10377ee8(int param_1,int param_2,int param_3)

{
  uint32_t *puVar1;
  int iVar2;
  
  iVar2 = 0x10;
  do {
    iVar2 = iVar2 + -4;
    *(uint32_t *)(iVar2 + param_2 * 0x10 + -0x7ffe6bd4) = *(uint32_t *)(iVar2 + param_3);
  } while (iVar2 != 0);
  puVar1 = (uint32_t *)menu_item_register(param_1);
  call_helper_and_set_flag_10494b88(puVar1);
  iVar2 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  *(uint8_t *)(param_1 + 0x34 + param_2) = 1;
  return;
}
