/* @k10d invoke_virtual_slot_7_with_zero @ 0x1036b160
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 018_settings_block_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 7 of an object referenced at param_1+0x14, passing a this-adjusted
 *   pointer and 0.
 * summary:
 *   The function performs a Cfront-style virtual call. It dereferences the vtable pointer
 *   at param_1+0x14, adds offset 0x3c to select the 8th function pointer (slot 7), and
 *   calls it. The first argument is the object pointer adjusted by the short value at
 *   vtable+0x38, and the second argument is the constant 0. No other side effects or
 *   callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_7_with_zero(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x14) + 0x3c))
            (param_1 + 0x14 + (int)*(short *)(*(int *)(param_1 + 0x14) + 0x38),0);
  return;
}
