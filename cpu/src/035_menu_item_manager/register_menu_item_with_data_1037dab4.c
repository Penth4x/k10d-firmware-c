/* @k10d register_menu_item_with_data_1037dab4 @ 0x1037dab4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resolves an object, optionally copies 16 bytes to a fixed global, and invokes a virtual
 *   method with a 0 or 1 flag.
 * summary:
 *   Calls menu_item_register to obtain an object pointer. If param_2 is 0, it calls virtual
 *   slot 2 with argument 0. Otherwise, it copies 16 bytes from param_3 to a fixed global
 *   address, calls call_helper_and_set_flag_10494b88, and then calls virtual slot 2 with
 *   argument 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_with_data_1037dab4(cls_10558c04 *param_1,int param_2,void *param_3)

{
  uint32_t *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (uint32_t *)menu_item_register((int)param_1);
  if (param_2 == 0) {
    (((vtbl_entry*)(puVar1[3]))[1].fn)((int)*(short *)(puVar1[3] + 8) + (int)puVar1,0);
  }
  else {
    iVar3 = 0x10;
    do {
      iVar2 = iVar3 + -4;
      *(uint32_t *)(iVar3 + -0x7ffe6af8) = *(uint32_t *)(iVar2 + (int)param_3);
      iVar3 = iVar2;
    } while (iVar2 != 0);
    call_helper_and_set_flag_10494b88(puVar1);
    (((vtbl_entry*)(puVar1[3]))[1].fn)((int)*(short *)(puVar1[3] + 8) + (int)puVar1,1);
  }
  return;
}
