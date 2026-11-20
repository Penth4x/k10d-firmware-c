/* @k10d initialize_object_with_five_values @ 0x104a3652
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Creates a new object, stores it in param_1, and populates it with five values if
 *   initialization succeeds.
 * summary:
 *   Allocates a new instance of cls_105b63b0 and stores the pointer at param_1+4. Calls
 *   virtual slot 2 of the new object with argument 0. If the call returns non-zero, invokes
 *   the function at 0x104a2dd6 five times to set values at indices 0-4 (and 5) using data
 *   from param_1. Returns the success status of the virtual call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool initialize_object_with_five_values(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)cls_105b63b0_new(0);
  *(int **)(param_1 + 4) = piVar1;
  iVar2 = (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  if (iVar2 != 0) {
    (*(code *)0x104a2dd6/*ROM*/)(*(uint32_t *)(param_1 + 4),0,*(uint32_t *)(param_1 + 8));
    (*(code *)0x104a2dd6/*ROM*/)(*(uint32_t *)(param_1 + 4),1,*(uint32_t *)(param_1 + 0xc));
    (*(code *)0x104a2dd6/*ROM*/)(*(uint32_t *)(param_1 + 4),2,*(uint32_t *)(param_1 + 0x10));
    (*(code *)0x104a2dd6/*ROM*/)(*(uint32_t *)(param_1 + 4),3,*(uint32_t *)(param_1 + 0x14));
    (*(code *)0x104a2dd6/*ROM*/)(*(uint32_t *)(param_1 + 4),4,*(uint32_t *)(param_1 + 0x18));
    (*(code *)0x104a2dd6/*ROM*/)(*(uint32_t *)(param_1 + 4),5,*(uint32_t *)(param_1 + 0x18));
  }
  return iVar2 != 0;
}
