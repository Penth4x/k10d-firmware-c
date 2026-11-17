/* @k10d register_menu_item_entry_10386070 @ 0x10386070
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Copies 16 bytes from param_3 to a destination offset by param_2, calls two helpers on
 *   param_1, and sets a byte flag.
 * summary:
 *   The function performs a 4-iteration loop copying 4-byte words from param_3 to a
 *   location calculated as param_2 * 0x10 + a fixed offset. It then calls
 *   menu_item_register with param_1, passes the result to
 *   call_helper_and_set_flag_10494b88, calls menu_item_register again, and executes a
 *   virtual call on the returned object. Finally, it sets the byte at param_1 + 0x44 +
 *   param_2 to 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_entry_10386070(int param_1,int param_2,int param_3)

{
  uint32_t *puVar1;
  int iVar2;
  
  iVar2 = 0x10;
  do {
    iVar2 = iVar2 + -4;
    *(uint32_t *)(iVar2 + param_2 * 0x10 + -0x7ffe694c) = *(uint32_t *)(iVar2 + param_3);
  } while (iVar2 != 0);
  puVar1 = (uint32_t *)menu_item_register(param_1);
  call_helper_and_set_flag_10494b88(puVar1);
  iVar2 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  *(uint8_t *)(param_1 + 0x44 + param_2) = 1;
  return;
}
