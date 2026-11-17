/* @k10d dispatch_state_transition_event_10521812 @ 0x10521812
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object if the state field matches specific values and
 *   the event ID is valid, then resets the state to zero.
 * summary:
 *   Checks the integer at offset 0x24 of param_1. If it is 5 and param_2 is 3, or if it is
 *   6 and param_2 is 5, it dereferences the pointer at offset 0x2c to get an object, then
 *   calls the virtual function at vtable offset 0x3c with a this-adjusted pointer. Finally,
 *   it sets the state field at offset 0x24 to 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_transition_event_10521812(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x24) == 5) {
    if (param_2 == 3) {
      iVar1 = **(int **)(param_1 + 0x2c);
      (**(code **)(iVar1 + 0x3c))((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x38));
    }
  }
  else if ((*(int *)(param_1 + 0x24) == 6) && (param_2 == 5)) {
    iVar1 = **(int **)(param_1 + 0x2c);
    (**(code **)(iVar1 + 0x3c))((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x38));
  }
  *(uint32_t *)(param_1 + 0x24) = 0;
  return;
}
