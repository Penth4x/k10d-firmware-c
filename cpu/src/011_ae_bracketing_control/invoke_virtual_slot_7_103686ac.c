/* @k10d invoke_virtual_slot_7_103686ac @ 0x103686ac
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 011_ae_bracketing_control (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 7 of an object referenced at offset 0x6c with a zero argument.
 * summary:
 *   The function performs a Cfront-style virtual call. It loads a vtable pointer from
 *   param_1 + 0x6c, selects the function pointer at offset 0x3c (slot 7), and applies the
 *   this-adjustment from offset 0x38. The target function is called with the adjusted
 *   object pointer and the integer 0. No other side effects or specific camera subsystem
 *   behavior are evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_7_103686ac(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x6c) + 0x3c))
            (param_1 + 0x6c + (int)*(short *)(*(int *)(param_1 + 0x6c) + 0x38),0);
  return;
}
