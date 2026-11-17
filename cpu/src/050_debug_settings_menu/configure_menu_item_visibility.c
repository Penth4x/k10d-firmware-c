/* @k10d configure_menu_item_visibility @ 0x103b217e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Updates a state flag on an object retrieved via menu_item_register based on checks of
 *   fields in param_1.
 * summary:
 *   The function retrieves an object pointer using menu_item_register with an offset from
 *   param_1. It performs a virtual call (slot 2) with argument 0, then conditionally calls
 *   it with argument 1 based on the results of query_object_property_via_temp_104f2570 and
 *   check_object_property_15, gated by specific byte values at param_1+0x48. Finally, it
 *   checks the return value of get_setting_by_two_probe_flags and may perform another
 *   virtual call with argument 1 if the value is 4 or higher.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_menu_item_visibility(void *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1 + 8;
  iVar2 = menu_item_register(iVar3);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  if ((*(char *)((int)param_1 + 0x48) != '\n') &&
     (iVar2 = query_object_property_via_temp_104f2570(*(uint32_t *)((int)param_1 + 0x28)), iVar2 != 0)) {
    iVar2 = menu_item_register(iVar3);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  if ((*(char *)((int)param_1 + 0x48) != '\x1c') &&
     (iVar2 = check_object_property_15(*(uint32_t *)((int)param_1 + 0x28)), iVar2 != 0)) {
    iVar2 = menu_item_register(iVar3);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  if (*(char *)((int)param_1 + 0x48) == '\n') {
    return;
  }
  iVar2 = get_setting_by_two_probe_flags(*(int *)((int)param_1 + 0x28));
  if (iVar2 == 1) {
    bVar1 = false;
  }
  else if (iVar2 == 2) {
    bVar1 = false;
  }
  else if (iVar2 == 3) {
    bVar1 = false;
  }
  else {
    if (iVar2 == 4) goto LAB_103b227e;
    bVar1 = true;
  }
  if (bVar1) {
    return;
  }
LAB_103b227e:
  iVar2 = menu_item_register(iVar3);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  return;
}
