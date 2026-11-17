/* @k10d dispatch_object_state_update_103ad5b2 @ 0x103ad5b2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 048_menu_item_builder (unit names are model-proposed)
 * purpose:
 *   Resolves a virtual object, calls a virtual method, and routes a computed value to a
 *   handler based on a state byte.
 * summary:
 *   The function retrieves a pointer from param_1+8 via menu_item_register and invokes a
 *   virtual method (slot 3) with argument 0. It then branches on the byte at param_1+0x48:
 *   if it is 0x0c, it calls compute_exposure_params; otherwise
 *   compute_value_from_object_state. Depending on the result and specific state values
 *   (0x1e, 0x1c, 0x18, 0x16), it either computes a value via
 *   classify_state_by_two_checks/get_mode_dependent_setting_104f0252 or passes the direct
 *   result to build_exposure_menu_items.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103ad61e) overlaps instruction at (ram,0x103ad61c)
    */

void dispatch_object_state_update_103ad5b2(void *param_1)

{
  char cVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  
  iVar2 = menu_item_register((int)param_1 + 8);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  if (*(char *)((int)param_1 + 0x48) == '\f') {
    iVar2 = compute_exposure_params(*(uint32_t *)((int)param_1 + 0x28),*(uint8_t *)((int)param_1 + 0x4e));
  }
  else {
    iVar2 = compute_value_from_object_state(*(uint32_t *)((int)param_1 + 0x28),0);
  }
  if ((iVar2 == 0) &&
     (((cVar1 = *(char *)((int)param_1 + 0x48), cVar1 == '\x1e' || (cVar1 == '\x1c')) ||
      (cVar1 == '\x18')))) {
    iVar4 = *(int *)((int)param_1 + 0x28);
    iVar2 = classify_state_by_two_checks(iVar4);
    uVar3 = get_mode_dependent_setting_104f0252(iVar4,iVar2);
    build_exposure_menu_items((int)param_1,uVar3);
  }
  else if ((*(char *)((int)param_1 + 0x48) != '\x16') && (iVar2 != 0)) {
    build_exposure_menu_items((int)param_1,iVar2);
  }
  return;
}
