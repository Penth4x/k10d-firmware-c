/* @k10d invoke_virtual_slot_12_10392f9c @ 0x10392f9c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 12 of an object referenced at offset 4 of the input pointer.
 * summary:
 *   The function dereferences param_1 + 4 to obtain an object pointer, then performs a
 *   virtual call to slot 12 (offset 0x64) on that object. The 'this' pointer for the call
 *   is adjusted by the short value stored at offset 0x60 of the object. No other side
 *   effects or memory writes are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_12_10392f9c(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 4);
  (**(code **)(iVar1 + 100))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x60));
  return;
}
