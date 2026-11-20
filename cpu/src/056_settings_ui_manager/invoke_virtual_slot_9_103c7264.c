/* @k10d invoke_virtual_slot_9_103c7264 @ 0x103c7264
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 9 of the object pointed to by param_1 with no additional
 *   arguments.
 * summary:
 *   Reads the vtable pointer from the object, extracts the this-adjustment from offset
 *   0x48, and calls the function pointer at vtable offset 0x4c (slot 9). No other side
 *   effects or callees are present. The specific camera subsystem role cannot be determined
 *   from this generic virtual dispatch stub.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_9_103c7264(cls_1059e078 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x0;
  (((vtbl_entry*)(iVar1))[9].fn)((int)param_1->field_0x0 + (int)((vtbl_entry*)(iVar1))[9].adj);
  return;
}
