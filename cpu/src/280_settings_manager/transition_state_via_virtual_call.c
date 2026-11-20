/* @k10d transition_state_via_virtual_call @ 0x10521568
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks state flags and invokes a virtual method on a nested object if conditions are
 *   met.
 * summary:
 *   The function verifies that param_1+0x10 is 2, param_1+0x14 is 1, and param_2 is 2. If
 *   true, it updates param_1+0x14 to 2, retrieves a pointer from param_1+0x18, and calls
 *   virtual slot 4 (offset 0x24) on that object. It then resets param_1+0x10 to 0 and
 *   returns 0; otherwise, it returns 1. No camera-specific subsystems are identifiable from
 *   the code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t transition_state_via_virtual_call(cls_105d77cc *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (((param_1->field_0x10 == 2) && (param_1->field_0x14 == 1)) && (param_2 == 2)) {
    param_1->field_0x14 = 2;
    iVar2 = *(int *)param_1->field_0x18;
    (((vtbl_entry*)(iVar2))[4].fn)((int)param_1->field_0x18 + (int)((vtbl_entry*)(iVar2))[4].adj);
    param_1->field_0x10 = 0;
    uVar1 = 0;
  }
  return uVar1;
}
