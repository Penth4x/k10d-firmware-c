/* @k10d register_menu_item_with_data_1038cbee @ 0x1038cbee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Copies 16 bytes from param_3 to a fixed global buffer when param_2 is non-zero, then
 *   dispatches a virtual call with a flag.
 * summary:
 *   Retrieves an object pointer via menu_item_register(param_1). If param_2 is 0, it
 *   immediately calls virtual slot 1 of the object with argument 0. Otherwise, it copies 16
 *   bytes (4 words) from param_3 to the address 0x10000000 (derived from the constant
 *   0x7ffe6818), calls call_helper_and_set_flag_10494b88 on the object, and then calls
 *   virtual slot 1 with argument 1. The virtual call idiom `(**(code **)(puVar1[3] + 0xc))`
 *   indicates a Cfront-style virtual method invocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_with_data_1038cbee(int param_1,int param_2,int param_3)

{
  uint32_t *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (uint32_t *)menu_item_register(param_1);
  if (param_2 == 0) {
    (**(code **)(puVar1[3] + 0xc))((int)*(short *)(puVar1[3] + 8) + (int)puVar1,0);
  }
  else {
    iVar3 = 0x10;
    do {
      iVar2 = iVar3 + -4;
      *(uint32_t *)(iVar3 + -0x7ffe6818) = *(uint32_t *)(iVar2 + param_3);
      iVar3 = iVar2;
    } while (iVar2 != 0);
    call_helper_and_set_flag_10494b88(puVar1);
    (**(code **)(puVar1[3] + 0xc))((int)*(short *)(puVar1[3] + 8) + (int)puVar1,1);
  }
  return;
}
