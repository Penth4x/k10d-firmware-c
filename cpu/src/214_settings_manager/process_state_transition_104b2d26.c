/* @k10d process_state_transition_104b2d26 @ 0x104b2d26
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a state field at offset 0x18, transitions it from 2 to 4, invokes a virtual
 *   method, and conditionally resets state or calls another virtual method.
 * summary:
 *   The function acts as a state machine handler. It verifies if the integer at
 *   param_1+0x18 is 2. If so, it sets it to 4 and calls virtual slot 8 (offset 0x44) on the
 *   object pointer at param_1+8. If that call returns 2, it resets the state to 0 and calls
 *   virtual slot 6 (offset 0x34) on the object pointer at param_1+4. Returns 1 if the
 *   initial condition was met, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_state_transition_104b2d26(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x18) == 2) {
    *(uint32_t *)(param_1 + 0x18) = 4;
    iVar2 = **(int **)(param_1 + 8);
    iVar2 = (((vtbl_entry*)(iVar2))[8].fn)
                      ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar2))[8].adj,1,
                       *(uint32_t *)(param_1 + 0xc));
    if (iVar2 == 2) {
      *(uint32_t *)(param_1 + 0x18) = 0;
      iVar2 = **(int **)(param_1 + 4);
      (((vtbl_entry*)(iVar2))[6].fn)
                ((int)*(int **)(param_1 + 4) + (int)((vtbl_entry*)(iVar2))[6].adj,
                 *(uint32_t *)(*(int *)(param_1 + 0xc) + 8));
    }
    uVar1 = 1;
  }
  return uVar1;
}
