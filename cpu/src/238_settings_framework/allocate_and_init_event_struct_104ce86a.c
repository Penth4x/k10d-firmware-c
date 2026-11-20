/* @k10d allocate_and_init_event_struct_104ce86a @ 0x104ce86a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 238_settings_framework (unit names are model-proposed)
 * purpose:
 *   Allocates a small struct, initializes its fields from parameters, and registers it with
 *   an object.
 * summary:
 *   Calls alloc_dynamic_array_header(0,1) to obtain a pointer to a newly allocated or
 *   pooled structure. Writes param_2 to offset 8, sets offset 4 to 0, and stores the
 *   address of param_3 at offset 0xc (derefencing the pointer at that offset). Finally,
 *   calls reg_framework_send with param_1 + 8, likely registering the new structure or
 *   updating a list within the object pointed to by param_1. The caller is a virtual
 *   method, suggesting this is part of an object-oriented event or message handling system.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_event_struct_104ce86a(int param_1,uint32_t param_2,uint32_t param_3)

{
  int * iVar1;
  
  iVar1 = (int *)alloc_dynamic_array_header(0,1);
  *(uint32_t *)((int)iVar1 + 8) = param_2;
  *(uint32_t *)((int)iVar1 + 4) = 0;
  **(uint32_t **)((int)iVar1 + 0xc) = param_3;
  reg_framework_send(param_1 + 8);
  return;
}
