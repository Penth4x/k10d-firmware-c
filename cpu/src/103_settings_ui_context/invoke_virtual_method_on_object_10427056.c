/* @k10d invoke_virtual_method_on_object_10427056 @ 0x10427056
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object stored at offset 0x38 of param_1 if the object is
 *   non-null and a preliminary virtual check passes.
 * summary:
 *   The function retrieves a pointer from param_1 + 0x38. It performs a virtual call to
 *   slot 2 (offset 0x14) on that object, passing the object itself (adjusted by the this-
 *   pointer at offset 0x10). If this call returns non-zero, it performs a second virtual
 *   call to slot 3 (offset 0x1c) on the same object, passing param_2 and param_3. The
 *   result of the second call is returned, or 0 if the first check failed or the object was
 *   null. No specific camera subsystem behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_on_object_10427056(int param_1,uint32_t param_2,uint32_t param_3)

{
  int *piVar1;
  int iVar2;
  uint32_t uVar3;
  
  piVar1 = *(int **)(param_1 + 0x38);
  uVar3 = 0;
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1),
     iVar2 != 0)) {
    iVar2 = **(int **)(param_1 + 0x38);
    uVar3 = (((vtbl_entry*)(iVar2))[3].fn)
                      ((int)*(int **)(param_1 + 0x38) + (int)((vtbl_entry*)(iVar2))[3].adj,param_2,
                       param_3);
  }
  return uVar3;
}
