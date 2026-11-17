/* @k10d process_pending_state_transition_104b2cc6 @ 0x104b2cc6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a state field at offset 0x18 and if it is 1, transitions it to 3, invokes a
 *   virtual method, and conditionally resets to 0 based on the result.
 * summary:
 *   The function reads an integer at param_1 + 0x18. If it equals 1, it sets it to 3 and
 *   calls a virtual function (slot 5) on the object at param_1 + 8. If that call returns 2,
 *   it resets the state to 0 and calls a virtual function (slot 3) on the object at param_1
 *   + 4. Returns 1 if the transition was initiated, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_pending_state_transition_104b2cc6(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x18) == 1) {
    *(uint32_t *)(param_1 + 0x18) = 3;
    iVar2 = **(int **)(param_1 + 8);
    iVar2 = (**(code **)(iVar2 + 0x34))
                      ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar2 + 0x30),1,
                       *(uint32_t *)(param_1 + 0xc));
    if (iVar2 == 2) {
      *(uint32_t *)(param_1 + 0x18) = 0;
      iVar2 = **(int **)(param_1 + 4);
      (**(code **)(iVar2 + 0x2c))
                ((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar2 + 0x28),
                 *(uint32_t *)(*(int *)(param_1 + 0xc) + 0xc));
    }
    uVar1 = 1;
  }
  return uVar1;
}
