/* @k10d release_object_reference @ 0x104ce8a6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 238_settings_framework (unit names are model-proposed)
 * purpose:
 *   Stores a pointer in a struct field, conditionally calls a helper, invokes a virtual
 *   method, and clears the field.
 * summary:
 *   The function writes param_2 to offset 0x64 of the object in param_1. If the value at
 *   param_2+4 is zero, it sets a local variable to 0x43000 and calls
 *   dispatch_virtual_method_on_allocated_object. It then dereferences a pointer chain from
 *   param_2+8 to perform a virtual call (slot 2) with arguments derived from the vtable and
 *   the object. Finally, it calls free_object_if_flag_set_1052107a with the pointer at
 *   param_1+0x64 and the integer 3, then nulls out param_1+0x64. The pattern suggests a
 *   resource release or reference count decrement operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_reference(int param_1,int param_2)

{
  int *piVar1;
  uint32_t uVar2;
  int iVar3;
  
  *(int *)(param_1 + 100) = param_2;
  uVar2 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    uVar2 = 0x43000;
    dispatch_virtual_method_on_allocated_object(param_1);
  }
  piVar1 = *(int **)(*(int *)(param_1 + 100) + 8);
  iVar3 = *piVar1;
  (**(code **)(iVar3 + 0x14))((int)piVar1 + (int)*(short *)(iVar3 + 0x10),uVar2,param_1 + 0x38);
  free_object_if_flag_set_1052107a(*(void **)(param_1 + 100),3);
  *(uint32_t *)(param_1 + 100) = 0;
  return;
}
