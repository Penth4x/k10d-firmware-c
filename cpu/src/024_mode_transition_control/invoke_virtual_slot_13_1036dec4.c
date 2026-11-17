/* @k10d invoke_virtual_slot_13_1036dec4 @ 0x1036dec4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 13 of an object referenced at offset 0x18 of param_1.
 * summary:
 *   The function performs a Cfront-style virtual call. It dereferences the pointer at
 *   param_1+0x18 to get a vtable, then calls the function pointer at vtable offset 100
 *   (slot 13). The 'this' pointer is adjusted by adding the short value found at vtable
 *   offset 0x60 to the base object pointer at param_1+0x18. No other side effects or data
 *   manipulations are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_13_1036dec4(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x18) + 100))
            (param_1 + 0x18 + (int)*(short *)(*(int *)(param_1 + 0x18) + 0x60));
  return;
}
