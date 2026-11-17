/* @k10d invoke_virtual_slot_7_103716de @ 0x103716de
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 032_sr_fl_capture_settings (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 7 of an object pointer stored at offset 0x20 of param_1 with a
 *   zero argument.
 * summary:
 *   The function performs a Cfront-style virtual method call. It dereferences the pointer
 *   at param_1 + 0x20 to get the vtable, reads the function pointer at offset 0x3c (slot
 *   7), and calls it with the adjusted this pointer and 0. No specific camera subsystem
 *   behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_7_103716de(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x20) + 0x3c))
            (param_1 + 0x20 + (int)*(short *)(*(int *)(param_1 + 0x20) + 0x38),0);
  return;
}
