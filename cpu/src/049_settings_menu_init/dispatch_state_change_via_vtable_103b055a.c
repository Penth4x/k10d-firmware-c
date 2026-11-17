/* @k10d dispatch_state_change_via_vtable_103b055a @ 0x103b055a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Reads a state value from param_1+0x28 and conditionally invokes a virtual method with
 *   argument 0 or 1.
 * summary:
 *   The function retrieves a value from offset 0x28 of param_1 via
 *   query_object_byte_property_104f19c4. It obtains a pointer from
 *   menu_item_register(param_1+8) and performs a virtual call (slot 2) with argument 0. If
 *   the state value is 2 or greater, it repeats the virtual call with argument 1. The
 *   specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_change_via_vtable_103b055a(void *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = query_object_byte_property_104f19c4(*(uint32_t *)((int)param_1 + 0x28));
  iVar3 = menu_item_register((int)param_1 + 8);
  (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else if (iVar2 == 1) {
    bVar1 = false;
  }
  else {
    if (iVar2 == 2) goto LAB_103b05ca;
    bVar1 = true;
  }
  if (bVar1) {
    return;
  }
LAB_103b05ca:
  iVar2 = menu_item_register((int)param_1 + 8);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  return;
}
