/* @k10d invoke_virtual_slot_5_and_2 @ 0x1052cb2c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets struct fields and dispatches to virtual slots 5 and 2 of two objects.
 * summary:
 *   Writes 1 to param_1[5] and a stack value to param_1[1]. Calls a non-virtual function at
 *   0x104ad2d4 with parameters from the struct. Then performs a virtual call to slot 5
 *   (offset 0x34) on the object pointed to by param_1[1], passing 1 and param_1[4]. If the
 *   result is 2, it performs a virtual call to slot 2 (offset 0x24) on the object at
 *   param_1[0], passing 2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_5_and_2(cls_105fa6fc *param_1)

{
  int iVar1;
  uint32_t in_stack_00000000;
  
  param_1->field_0x14 = 1;
  param_1->field_0x4 = in_stack_00000000;
  (*(code *)0x104ad2d4/*ROM*/)(param_1->field_0x10,param_1->field_0xc,6,0);
  iVar1 = *(int *)param_1->field_0x4;
  iVar1 = (((vtbl_entry*)(iVar1))[6].fn)
                    ((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[6].adj,1,param_1->field_0x10);
  if (iVar1 == 2) {
    (((vtbl_entry*)(param_1->field_0x0))[4].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[4].adj,2);
  }
  return;
}
