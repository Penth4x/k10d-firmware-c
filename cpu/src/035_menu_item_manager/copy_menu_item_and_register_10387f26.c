/* @k10d copy_menu_item_and_register_10387f26 @ 0x10387f26
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Copies 16 bytes from param_3 to a fixed global buffer, then calls a virtual method on
 *   an object retrieved via param_1.
 * summary:
 *   The function first performs a backward loop to copy 16 bytes (4 words) from the source
 *   pointer param_3 into a global buffer at a fixed offset. It then calls
 *   menu_item_register with param_1 to obtain an object pointer. Depending on param_2, it
 *   either calls call_helper_and_set_flag_10494b88 or skips it, and finally invokes a
 *   virtual function (slot 2) on the object with an argument of 0 or 1. The specific
 *   subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_menu_item_and_register_10387f26(int param_1,int param_2,void *param_3)

{
  uint32_t *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x10;
  do {
    iVar2 = iVar3 + -4;
    *(uint32_t *)(iVar3 + -0x7ffe6880) = *(uint32_t *)(iVar2 + (int)param_3);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  puVar1 = (uint32_t *)menu_item_register(param_1);
  if (param_2 == 0) {
    (**(code **)(puVar1[3] + 0xc))((int)*(short *)(puVar1[3] + 8) + (int)puVar1,0);
  }
  else {
    call_helper_and_set_flag_10494b88(puVar1);
    (**(code **)(puVar1[3] + 0xc))((int)*(short *)(puVar1[3] + 8) + (int)puVar1,1);
  }
  return;
}
