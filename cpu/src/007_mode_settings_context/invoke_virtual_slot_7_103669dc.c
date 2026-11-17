/* @k10d invoke_virtual_slot_7_103669dc @ 0x103669dc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 007_mode_settings_context (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 7 of an object referenced at offset 0x20 of param_1 with argument
 *   0.
 * summary:
 *   The function performs a Cfront-style virtual call. It dereferences the pointer at
 *   param_1+0x20 to get the vtable, reads the function pointer at vtable offset 0x3c (slot
 *   7), and calls it with a this-pointer adjusted by the short at vtable offset 0x38, plus
 *   an integer argument of 0. No other side effects or memory writes are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_7_103669dc(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x20) + 0x3c))
            (param_1 + 0x20 + (int)*(short *)(*(int *)(param_1 + 0x20) + 0x38),0);
  return;
}
