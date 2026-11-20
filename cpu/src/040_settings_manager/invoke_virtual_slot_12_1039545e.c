/* @k10d invoke_virtual_slot_12_1039545e @ 0x1039545e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 12 of the object stored at offset 4 of the input pointer.
 * summary:
 *   The function dereferences param_1 + 4 to get an object pointer, then performs a Cfront-
 *   style virtual call to slot 12 (offset 0x64) of that object's vtable. The this-pointer
 *   is adjusted by the short value at offset 0x60 of the object. No specific camera
 *   subsystem or MMIO operation is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_12_1039545e(cls_10562cbc *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[12].fn)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[12].adj);
  return;
}
