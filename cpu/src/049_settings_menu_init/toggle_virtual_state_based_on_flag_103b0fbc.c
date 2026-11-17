/* @k10d toggle_virtual_state_based_on_flag_103b0fbc @ 0x103b0fbc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Reads a flag from param_1, and if it is not 1, calls a virtual method with argument 1
 *   on an object derived from param_1.
 * summary:
 *   The function first calls a virtual method with argument 0 on an object obtained via
 *   menu_item_register(param_1+8). It then checks the value at param_1+0x28 using
 *   query_object_property_byte_104f2294 and get_setting_with_fallback. If the result is 1,
 *   it returns early. Otherwise, if the result is 2 or other non-zero values (excluding 1),
 *   it calls the same virtual method again with argument 1. The virtual call idiom suggests
 *   slot 2 of the object's vtable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_virtual_state_based_on_flag_103b0fbc(void *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = menu_item_register((int)param_1 + 8);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = query_object_property_byte_104f2294(*(uint32_t *)((int)param_1 + 0x28));
  if (iVar2 == 1) {
    bVar1 = true;
  }
  else {
    iVar2 = get_setting_with_fallback(*(int *)((int)param_1 + 0x28));
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else if (iVar2 == 1) {
      bVar1 = false;
    }
    else {
      if (iVar2 == 2) goto LAB_103b103c;
      bVar1 = true;
    }
  }
  if (bVar1) {
    return;
  }
LAB_103b103c:
  iVar2 = menu_item_register((int)param_1 + 8);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  return;
}
