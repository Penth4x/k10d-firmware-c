/* @k10d register_menu_item_and_update_10382a9c @ 0x10382a9c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Copies 16 bytes from param_3 to a fixed global buffer, then dispatches a virtual call
 *   with a flag based on param_2.
 * summary:
 *   The function first copies 16 bytes (4 words) from the memory pointed to by param_3 into
 *   a global buffer located at a fixed offset (0x10 - 0x7ffe6a78). It then calls
 *   menu_item_register with param_1 to obtain an object pointer. If param_2 is 0, it
 *   directly invokes a virtual method (slot 1) on a sub-object. If param_2 is non-zero, it
 *   first calls call_helper_and_set_flag_10494b88 on the object and then invokes the same
 *   virtual method with a second argument of 1. The specific camera subsystem is not
 *   identifiable from the provided code and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_and_update_10382a9c(int param_1,int param_2,void *param_3)

{
  uint32_t *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x10;
  do {
    iVar2 = iVar3 + -4;
    *(uint32_t *)(iVar3 + -0x7ffe6a78) = *(uint32_t *)(iVar2 + (int)param_3);
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
