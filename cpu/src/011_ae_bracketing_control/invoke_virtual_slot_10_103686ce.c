/* @k10d invoke_virtual_slot_10_103686ce @ 0x103686ce
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 011_ae_bracketing_control (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 10 of an object pointer stored at offset 0x6c of param_1 with
 *   argument 0.
 * summary:
 *   The function performs a Cfront-style virtual call. It dereferences the pointer at
 *   param_1+0x6c to get a vtable, reads the function pointer at vtable offset 0x44 (slot
 *   10), and calls it with a this-adjusted object pointer and the integer 0. No other side
 *   effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_10_103686ce(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x6c) + 0x44))
            (param_1 + 0x6c + (int)*(short *)(*(int *)(param_1 + 0x6c) + 0x40),0);
  return;
}
