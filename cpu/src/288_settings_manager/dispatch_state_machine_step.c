/* @k10d dispatch_state_machine_step @ 0x1052cb90
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Executes a two-step state machine transition based on the value at offset 0x14 of the
 *   object.
 * summary:
 *   Checks if the object's state field (param_1[5]) is 1 or 2. If 1, it performs a virtual
 *   call on a sub-object, updates the state to 2, and potentially triggers another virtual
 *   call on the main object. If 2, it resets the state to 0 and clears a pointer field.
 *   Returns the result of the last virtual call or the input parameter.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_state_machine_step(cls_105fa6fc *param_1,int param_2)

{
  int iVar1;
  
  if (param_1->field_0x4 != 0) {
    if (param_1->field_0x14 == 1) {
      iVar1 = *(int *)param_1->field_0x8;
      (((vtbl_entry*)(iVar1))[13].fn)
                ((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar1))[13].adj,param_1->field_0xc,6);
      param_1->field_0x14 = 2;
      iVar1 = *(int *)param_1->field_0x4;
      param_2 = (((vtbl_entry*)(iVar1))[8].fn)
                          ((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[8].adj,1,0);
      if (param_2 == 2) {
        param_1->field_0x14 = 2;
        param_2 = (((vtbl_entry*)(param_1->field_0x0))[4].fn)
                            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[4].adj,2
                            );
      }
    }
    else if (param_1->field_0x14 == 2) {
      param_1->field_0x14 = 0;
      param_1->field_0x4 = 0;
    }
  }
  return param_2;
}
