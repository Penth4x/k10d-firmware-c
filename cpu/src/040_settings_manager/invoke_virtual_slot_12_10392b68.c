/* @k10d invoke_virtual_slot_12_10392b68 @ 0x10392b68
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Performs a virtual method call on slot 12 of an object referenced by the first
 *   argument.
 * summary:
 *   The function dereferences the pointer at offset 8 of param_1 to obtain an object
 *   pointer. It then calls virtual slot 12 (offset 100) of that object, passing the object
 *   pointer adjusted by the this-adjustment value stored at offset 0x60. No other side
 *   effects or memory writes are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_12_10392b68(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 8);
  (**(code **)(iVar1 + 100))((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar1 + 0x60));
  return;
}
