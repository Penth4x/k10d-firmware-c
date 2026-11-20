/* @k10d invoke_virtual_slot_12_10395d6a @ 0x10395d6a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Performs a virtual method call on slot 12 of an object referenced by the first
 *   argument.
 * summary:
 *   The function dereferences the pointer at offset 4 of param_1 to obtain an object
 *   pointer. It then accesses the vtable at offset 100 (0x64) of that object, which
 *   corresponds to virtual slot 12. It calls this slot, passing the object pointer adjusted
 *   by the this-adjustment value stored at offset 0x60 (96) of the vtable. No other side
 *   effects or specific camera subsystem behavior are evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_12_10395d6a(cls_10562e10 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[12].fn)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[12].adj);
  return;
}
