/* @k10d register_menu_item_entry_10384ae4 @ 0x10384ae4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Copies 16 bytes from param_3 to a slot in param_2, calls two helpers on param_1, and
 *   sets a byte flag.
 * summary:
 *   The function performs a 4-iteration loop copying 4-byte words from param_3 to an offset
 *   within param_2 (base 0x10000000 - 0x7ffe6a5c + param_2*0x10). It then calls
 *   menu_item_register and call_helper_and_set_flag_10494b88 with param_1, executes a
 *   virtual call on the result of menu_item_register, and finally sets the byte at param_1
 *   + 0x74 + param_2 to 1. The specific subsystem is not identifiable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_entry_10384ae4(cls_105590b8 *param_1,int param_2,int param_3)

{
  uint32_t *puVar1;
  int iVar2;
  
  iVar2 = 0x10;
  do {
    iVar2 = iVar2 + -4;
    *(uint32_t *)(iVar2 + param_2 * 0x10 + -0x7ffe6a5c) = *(uint32_t *)(iVar2 + param_3);
  } while (iVar2 != 0);
  puVar1 = (uint32_t *)menu_item_register((int)param_1);
  call_helper_and_set_flag_10494b88(puVar1);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  (&param_1->field_0x74)[param_2] = 1;
  return;
}
