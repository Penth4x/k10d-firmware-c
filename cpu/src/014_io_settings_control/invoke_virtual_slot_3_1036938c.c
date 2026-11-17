/* @k10d invoke_virtual_slot_3_1036938c @ 0x1036938c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 3 of an object via a Cfront-style virtual call.
 * summary:
 *   The function performs a single virtual method call on the object pointed to by param_1.
 *   It reads the vtable pointer from offset 0x14, adds 100 (0x64) to select slot 3, and
 *   applies the this-adjustment stored at vtable+0x60. No other side effects or callees are
 *   present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_3_1036938c(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x14) + 100))
            (param_1 + 0x14 + (int)*(short *)(*(int *)(param_1 + 0x14) + 0x60));
  return;
}
