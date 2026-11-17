/* @k10d invoke_virtual_slot_11_1036925a @ 0x1036925a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 11 of an object referenced at offset 0x14 of param_1.
 * summary:
 *   The function performs a Cfront-style virtual call. It dereferences the pointer at
 *   param_1+0x14 to get a vtable, then calls the function pointer at vtable offset 0x4c
 *   (slot 11). The 'this' pointer is adjusted by the short value at vtable offset 0x48. No
 *   other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_11_1036925a(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x14) + 0x4c))
            (param_1 + 0x14 + (int)*(short *)(*(int *)(param_1 + 0x14) + 0x48));
  return;
}
