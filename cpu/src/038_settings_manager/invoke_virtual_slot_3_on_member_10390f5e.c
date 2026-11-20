/* @k10d invoke_virtual_slot_3_on_member_10390f5e @ 0x10390f5e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 3 of the object stored at offset 4 of param_1 with argument 0.
 * summary:
 *   The function dereferences the pointer at param_1+4 to get an object, then invokes its
 *   virtual method at slot 3 (vtable offset 0x1c) with a this-adjustment from the short at
 *   offset 0x18 and a single argument of 0. No other side effects or memory writes are
 *   visible. The role of the underlying virtual method is unknown because no callees are
 *   identified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_3_on_member_10390f5e(cls_1055a4d4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[3].fn)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[3].adj,0);
  return;
}
