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

int dispatch_state_machine_step(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[1] != 0) {
    if (param_1[5] == 1) {
      iVar1 = *(int *)param_1[2];
      (**(code **)(iVar1 + 0x6c))(param_1[2] + (int)*(short *)(iVar1 + 0x68),param_1[3],6);
      param_1[5] = 2;
      iVar1 = *(int *)param_1[1];
      param_2 = (**(code **)(iVar1 + 0x44))(param_1[1] + (int)*(short *)(iVar1 + 0x40),1,0);
      if (param_2 == 2) {
        param_1[5] = 2;
        param_2 = (**(code **)(*param_1 + 0x24))((int)*(short *)(*param_1 + 0x20) + (int)param_1,2);
      }
    }
    else if (param_1[5] == 2) {
      param_1[5] = 0;
      param_1[1] = 0;
    }
  }
  return param_2;
}
