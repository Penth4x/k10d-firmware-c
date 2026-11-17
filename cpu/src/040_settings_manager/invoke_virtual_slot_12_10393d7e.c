/* @k10d invoke_virtual_slot_12_10393d7e @ 0x10393d7e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 12 of an object referenced at offset 4 of the input pointer.
 * summary:
 *   The function dereferences param_1 + 4 to obtain an object pointer, then performs a
 *   Cfront-style virtual call to slot 12 (offset 0x64) of that object's vtable. The this-
 *   pointer is adjusted by the short value at offset 0x60 of the object. No callees are
 *   available to determine the specific subsystem or behavior.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_12_10393d7e(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 4);
  (**(code **)(iVar1 + 100))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x60));
  return;
}
