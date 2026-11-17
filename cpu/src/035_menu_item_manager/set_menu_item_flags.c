/* @k10d set_menu_item_flags @ 0x103851fe
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Sets three distinct flags on an object based on the combination of two input
 *   parameters.
 * summary:
 *   The function decodes parameters 2 and 3 into three boolean values (uVar2, uVar4,
 *   uVar3). It then retrieves an object pointer via menu_item_register and invokes virtual
 *   slot 2 (offset 0xc) three times, passing each of the three boolean values as an
 *   argument. The specific meaning of the flags and the object type are not determinable
 *   from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_menu_item_flags(void *param_1,int param_2,int param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  
  uVar2 = 0;
  uVar4 = 0;
  uVar3 = 0;
  if (param_2 == 0) {
    if (param_3 == 0) {
      uVar4 = 1;
    }
    else {
      uVar2 = 1;
    }
  }
  else if (param_3 == 0) {
    uVar3 = 1;
  }
  else {
    uVar2 = 1;
  }
  iVar1 = menu_item_register((int)param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),uVar2);
  iVar1 = menu_item_register((int)param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),uVar4);
  iVar1 = menu_item_register((int)param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),uVar3);
  return;
}
