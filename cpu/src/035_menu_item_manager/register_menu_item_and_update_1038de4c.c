/* @k10d register_menu_item_and_update_1038de4c @ 0x1038de4c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Copies 12 words from param_3 to a fixed global buffer, then calls a virtual method on
 *   an object derived from param_1.
 * summary:
 *   The function first performs a backward loop copying 12 32-bit words (48 bytes) from the
 *   memory region pointed to by param_3 into a fixed global address (calculated as 0x10 -
 *   0x7ffe67f8). It then calls menu_item_register with param_1 to obtain an object pointer.
 *   Depending on whether param_2 is zero, it either calls a virtual method (slot 1) with
 *   argument 0, or calls call_helper_and_set_flag_10494b88 and then the same virtual method
 *   with argument 1. The specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_and_update_1038de4c(cls_10559e7c *param_1,int param_2,int param_3)

{
  uint32_t *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x10;
  do {
    iVar2 = iVar3 + -4;
    *(uint32_t *)(iVar3 + -0x7ffe67f8) = *(uint32_t *)(iVar2 + param_3);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  puVar1 = (uint32_t *)menu_item_register((int)param_1);
  if (param_2 == 0) {
    (((vtbl_entry*)(puVar1[3]))[1].fn)((int)*(short *)(puVar1[3] + 8) + (int)puVar1,0);
  }
  else {
    call_helper_and_set_flag_10494b88(puVar1);
    (((vtbl_entry*)(puVar1[3]))[1].fn)((int)*(short *)(puVar1[3] + 8) + (int)puVar1,1);
  }
  return;
}
