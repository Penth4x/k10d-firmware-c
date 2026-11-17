/* @k10d init_object_with_pointer_and_vcall_1049f70a @ 0x1049f70a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Stores two pointers into an object, calls a helper, and conditionally invokes a virtual
 *   method.
 * summary:
 *   The function writes param_2 to offset 8 and a value from param_2+4 to offset 0xc of the
 *   object at param_1. It copies a pointer from the second object to offset 0x10. It calls
 *   invoke_virtual_method_and_dispatch; if the result is non-zero, it performs a virtual
 *   call on the object at offset 0x1c (slot 2, based on the +0x44 offset and +0x40 this-
 *   adjustment). The return value is 0 if the helper returned 0, otherwise the result of
 *   the virtual call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_pointer_and_vcall_1049f70a(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  *(int *)(param_1 + 8) = param_2;
  iVar2 = *(int *)(param_2 + 4);
  *(int *)(param_1 + 0xc) = iVar2;
  *(uint32_t *)(param_1 + 0x10) = *(uint32_t *)(iVar2 + 0x10);
  iVar2 = invoke_virtual_method_and_dispatch(__frv_reg_unset(4));
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)(param_1 + 0x1c) + 0x44))
                      (*(short *)(*(int *)(param_1 + 0x1c) + 0x40) + param_1);
  }
  return uVar1;
}
