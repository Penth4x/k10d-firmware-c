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

uint32_t init_object_with_pointer_and_vcall_1049f70a(cls_105b5bd0 *param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  
  param_1->field_0x8 = param_2;
  puVar3 = *(uint32_t **)(param_2 + 4);
  param_1->field_0xc = (uint32_t)(puVar3);
  param_1->field_0x10 = puVar3[4];
  iVar1 = invoke_virtual_method_and_dispatch(__frv_reg_unset(4));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (((vtbl_entry*)(param_1->field_0x1c))[8].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x1c))[8].adj);
  }
  return uVar2;
}
