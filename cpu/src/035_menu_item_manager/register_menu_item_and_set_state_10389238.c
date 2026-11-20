/* @k10d register_menu_item_and_set_state_10389238 @ 0x10389238
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Copies 12 words from param_3 to a fixed global buffer, then calls a virtual method on
 *   an object derived from param_1 with a flag based on param_2.
 * summary:
 *   The function first performs a backward loop copying 12 32-bit words (0x10 bytes) from
 *   the source pointer param_3 into a fixed memory location at 0x10000000 (calculated as
 *   iVar3 - 0x7ffe6870). It then calls menu_item_register with param_1 to obtain an object
 *   pointer. If param_2 is 0, it directly invokes virtual slot 1 (offset 0xc) of the sub-
 *   object at puVar1[3] with argument 0. If param_2 is non-zero, it first calls
 *   call_helper_and_set_flag_10494b88 with the object pointer, then invokes the same
 *   virtual slot with argument 1. The specific camera subsystem is not identifiable from
 *   the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_and_set_state_10389238(cls_10559760 *param_1,int param_2,int param_3)

{
  uint32_t *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x10;
  do {
    iVar2 = iVar3 + -4;
    *(uint32_t *)(iVar3 + -0x7ffe6870) = *(uint32_t *)(iVar2 + param_3);
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
