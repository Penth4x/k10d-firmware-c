/* @k10d invoke_virtual_slot_3_on_nested_object_1047c9b4 @ 0x1047c9b4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dereferences a pointer at offset 4 of the input object and calls virtual slot 3 of that
 *   nested object with argument 0.
 * summary:
 *   The function reads an integer pointer from offset 4 of param_1. It then performs a
 *   virtual call on the object pointed to by that integer, specifically invoking slot 3
 *   (offset 0x1c in the vtable) with a this-adjustment from offset 0x18 and a single
 *   argument of 0. No other side effects or memory writes are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_3_on_nested_object_1047c9b4(void *param_1)

{
  int iVar1;
  
  iVar1 = **(int **)((int)param_1 + 4);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)((int)param_1 + 4) + (int)*(short *)(iVar1 + 0x18),0);
  return;
}
