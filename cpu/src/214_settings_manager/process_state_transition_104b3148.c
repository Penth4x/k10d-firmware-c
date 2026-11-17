/* @k10d process_state_transition_104b3148 @ 0x104b3148
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Transitions an object from state 2 to 4, invokes a virtual method, and conditionally
 *   triggers a follow-up action.
 * summary:
 *   The function checks if the field at offset 0x18 is 2. If so, it sets it to 4 and calls
 *   virtual slot 8 on the object at offset 8. If the result is 2 or 4, it resets the state
 *   to 0 and calls virtual slot 10 on the object at offset 4, passing a boolean flag
 *   indicating if the result was 4. Returns 1 if the transition occurred, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_state_transition_104b3148(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x18) == 2) {
    *(uint32_t *)(param_1 + 0x18) = 4;
    iVar2 = **(int **)(param_1 + 8);
    iVar2 = (**(code **)(iVar2 + 0x44))
                      ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar2 + 0x40),1,
                       *(uint32_t *)(param_1 + 0xc));
    if ((iVar2 == 2) || (iVar2 == 4)) {
      *(uint32_t *)(param_1 + 0x18) = 0;
      iVar3 = **(int **)(param_1 + 4);
      (**(code **)(iVar3 + 0x54))
                ((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar3 + 0x50),iVar2 == 4,
                 *(uint32_t *)(*(int *)(param_1 + 0xc) + 8));
    }
    uVar1 = 1;
  }
  return uVar1;
}
