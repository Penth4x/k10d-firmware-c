/* @k10d init_object_with_lazy_alloc_104a7984 @ 0x104a7984
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling two setup functions and lazily allocating a pointer at
 *   offset 0xc if null.
 * summary:
 *   Calls ensure_pointer_field_initialized and ensure_subobject_initialized with the object
 *   pointer. Checks if the field at offset 0xc is zero; if so, calls
 *   get_or_create_singleton_104ceb32 and invoke_object_virtual_methods, storing the result
 *   in that field. This pattern suggests a lazy initialization or resource acquisition step
 *   for a specific component of the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_lazy_alloc_104a7984(int param_1)

{
  uint32_t uVar1;
  
  ensure_pointer_field_initialized(__frv_reg_unset(4));
  ensure_subobject_initialized(param_1);
  if (*(int *)(param_1 + 0xc) == 0) {
    get_or_create_singleton_104ceb32();
    uVar1 = invoke_object_virtual_methods((int *)__frv_reg_unset(4));
    *(uint32_t *)(param_1 + 0xc) = uVar1;
  }
  return;
}
