/* @k10d invoke_virtual_slot_7_10367a56 @ 0x10367a56
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 009_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 7 of an object referenced at offset 0x18 of param_1 with a single
 *   argument of 0.
 * summary:
 *   The function performs a Cfront-style virtual call. It dereferences the pointer at
 *   param_1 + 0x18 to get the vtable, reads the function pointer at offset 0x3c (slot 7),
 *   and calls it. The 'this' pointer is adjusted by the short value at vtable offset 0x38.
 *   No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_7_10367a56(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x18) + 0x3c))
            (param_1 + 0x18 + (int)*(short *)(*(int *)(param_1 + 0x18) + 0x38),0);
  return;
}
