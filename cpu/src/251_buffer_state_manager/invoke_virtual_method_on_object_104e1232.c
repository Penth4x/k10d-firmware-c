/* @k10d invoke_virtual_method_on_object_104e1232 @ 0x104e1232
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object pointer and returns a status code based on the
 *   result.
 * summary:
 *   The function dereferences the first argument to obtain an object pointer, then performs
 *   a virtual call to slot 2 (offset 0x14) of that object's vtable. It passes the object
 *   (with this-adjustment), a value from the first argument's structure, the second
 *   parameter, and 0 as arguments. It returns 1 if the virtual call returns non-zero, or 9
 *   if it returns zero. No specific camera subsystem behavior is evident from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_on_object_104e1232(int *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)param_1[1];
  iVar2 = (((vtbl_entry*)(iVar2))[2].fn)
                    (param_1[1] + (int)((vtbl_entry*)(iVar2))[2].adj,*(uint32_t *)(*param_1 + 8),
                     param_2,0);
  uVar1 = 1;
  if (iVar2 == 0) {
    uVar1 = 9;
  }
  return uVar1;
}
