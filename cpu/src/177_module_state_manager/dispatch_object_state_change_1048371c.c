/* @k10d dispatch_object_state_change_1048371c @ 0x1048371c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object, then calls a second virtual method based on the
 *   result.
 * summary:
 *   The function retrieves an object pointer from param_1+0xc. It calls virtual slot 2
 *   (offset 0x14) on that object. Depending on whether the return value is zero, it calls
 *   either virtual slot 6 (offset 0x34) or virtual slot 7 (offset 0x3c) on the same object.
 *   No specific camera subsystem behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_object_state_change_1048371c(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = **(int **)((int)param_1 + 0xc);
  iVar2 = (((vtbl_entry*)(iVar2))[2].fn)
                    ((int)*(int **)((int)param_1 + 0xc) + (int)((vtbl_entry*)(iVar2))[2].adj);
  piVar1 = *(int **)((int)param_1 + 0xc);
  if (iVar2 == 0) {
    (((vtbl_entry*)(*piVar1))[6].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[6].adj);
  }
  else {
    (((vtbl_entry*)(*piVar1))[7].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[7].adj);
  }
  return;
}
