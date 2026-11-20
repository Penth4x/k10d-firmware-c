/* @k10d process_object_state_transition_104b2c12 @ 0x104b2c12
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks an object's state field and invokes a virtual method to handle a specific
 *   condition, returning a success flag.
 * summary:
 *   The function validates that a pointer at offset 8 is non-null and the state at offset
 *   0x18 is 4. It then calls a virtual method (slot 9) on the object pointed to by offset
 *   8. If the method returns 2, it resets the state to 0 and calls another virtual method
 *   (slot 6) on the object at offset 4, passing a value from offset 0xc. Returns 1 on
 *   success, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_object_state_transition_104b2c12(int param_1)

{
  int *piVar1;
  int iVar2;
  uint32_t uVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  uVar3 = 0;
  if (((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x18) == 4)) &&
     (iVar2 = (((vtbl_entry*)(*piVar1))[9].fn)((int)((vtbl_entry*)(*piVar1))[9].adj + (int)piVar1),
     iVar2 == 2)) {
    *(uint32_t *)(param_1 + 0x18) = 0;
    iVar2 = **(int **)(param_1 + 4);
    (((vtbl_entry*)(iVar2))[6].fn)
              ((int)*(int **)(param_1 + 4) + (int)((vtbl_entry*)(iVar2))[6].adj,
               *(uint32_t *)(*(int *)(param_1 + 0xc) + 8));
    uVar3 = 1;
  }
  return uVar3;
}
