/* @k10d set_object_flags_and_call_virtual @ 0x104ab68e
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets two bits in a flag word at offset 0x28, invokes a virtual method, calls a helper,
 *   and clears fields at 0x16-0x18.
 * summary:
 *   The function ORs 0x20 and later 0x4000 into the uint at param_1+0x28. It performs a
 *   virtual call through the vtable pointer at param_1+4 (slot at offset 0x1c) with
 *   argument 0, then calls invoke_virtual_on_two_object_lists with param_1 and 0. Finally
 *   it zeroes the 4-byte field at 0x18 and the two bytes at 0x16 and 0x17, returning 1. The
 *   specific subsystem role is not determinable from the pseudocode and the single unnamed
 *   callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_object_flags_and_call_virtual(cls_105b71d4 *param_1)

{
  *(uint *)param_1->field_0x28 = *(uint *)param_1->field_0x28 | 0x20;
  (((vtbl_entry*)(param_1->field_0x4))[3].fn)
            (&param_1->field_0x0 + ((vtbl_entry*)(param_1->field_0x4))[3].adj,0);
  invoke_virtual_on_two_object_lists((int)param_1,0);
  *(uint *)param_1->field_0x28 = *(uint *)param_1->field_0x28 | 0x4000;
  param_1->field_0x18 = 0;
  param_1->field_0x16 = 0;
  param_1->field_0x17 = 0;
  return 1;
}
