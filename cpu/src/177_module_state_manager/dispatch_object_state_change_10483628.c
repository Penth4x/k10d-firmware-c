/* @k10d dispatch_object_state_change_10483628 @ 0x10483628
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object and then calls a second virtual method based on
 *   the first result.
 * summary:
 *   The function retrieves an object pointer from param_1+8. It calls virtual slot 2
 *   (offset 0x14) on that object. Depending on whether the return value is zero, it calls
 *   virtual slot 6 (offset 0x34) or slot 7 (offset 0x3c) on the same object. No specific
 *   camera subsystem behavior is evident from the generic virtual dispatch pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_object_state_change_10483628(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = **(int **)((int)param_1 + 8);
  iVar2 = (((vtbl_entry*)(iVar2))[2].fn)
                    ((int)*(int **)((int)param_1 + 8) + (int)((vtbl_entry*)(iVar2))[2].adj);
  piVar1 = *(int **)((int)param_1 + 8);
  if (iVar2 == 0) {
    (((vtbl_entry*)(*piVar1))[6].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[6].adj);
  }
  else {
    (((vtbl_entry*)(*piVar1))[7].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[7].adj);
  }
  return;
}
