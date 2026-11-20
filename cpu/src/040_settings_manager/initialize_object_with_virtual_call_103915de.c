/* @k10d initialize_object_with_virtual_call_103915de @ 0x103915de
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a pointer field at offset 0x2c48 by calling a constructor and a virtual
 *   method, returning success status.
 * summary:
 *   The function checks if the pointer at param_1 + 0x2c48 is null. If so, it calls
 *   call_helper_with_fixed_args_10391bde on the adjacent field, allocates/initializes an
 *   object via dispatch_by_mode_index, and stores the result. It then invokes a virtual
 *   method (slot 5) on the new object, potentially updating the pointer if the method
 *   returns a different instance. Finally, it calls an unknown function at 0x103949ea with
 *   the object pointer and returns 1 if that call returns 0, else 0. The specific subsystem
 *   is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_with_virtual_call_103915de(int param_1, uint32_t param_x1)

{
  int *piVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  copy_and_dispatch_stack_block();
  if (*(int *)(param_1 + 0x2c48) == 0) {
    call_helper_with_fixed_args_10391bde((uint32_t *)(param_1 + 0x2c50));
    piVar1 = (int *)dispatch_by_mode_index(0);
    *(int **)(param_1 + 0x2c48) = piVar1;
    piVar1 = (int *)(((vtbl_entry*)(*piVar1))[5].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[5].adj);
    if (piVar1 != *(int **)(param_1 + 0x2c48)) {
      *(int **)(param_1 + 0x2c48) = piVar1;
      (((vtbl_entry*)(*piVar1))[5].fn)((int)((vtbl_entry*)(*piVar1))[5].adj + (int)piVar1);
    }
    iVar2 = (*(code *)0x103949ea/*ROM*/)(*(uint32_t *)(param_1 + 0x2c48));
    uVar3 = 1;
    if (iVar2 != 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}
