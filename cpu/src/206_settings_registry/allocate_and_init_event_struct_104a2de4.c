/* @k10d allocate_and_init_event_struct_104a2de4 @ 0x104a2de4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Allocates a small struct, initializes its fields from parameters, and registers it with
 *   an object.
 * summary:
 *   Calls alloc_dynamic_array_header(0,1) to obtain a pointer to a newly allocated or
 *   pooled structure. Writes param_2 to offset 8, zero to offset 4, and the address of
 *   param_3 to offset 0xc (via a double pointer dereference). Finally, calls
 *   reg_framework_send with param_1 + 8, likely registering the new structure or updating a
 *   list within the object pointed to by param_1. The caller is a virtual method,
 *   suggesting this is part of an object-oriented event or message creation pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_event_struct_104a2de4(int param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  
  iVar1 = (int)alloc_dynamic_array_header(0,1);
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 0;
  **(uint32_t **)(iVar1 + 0xc) = param_3;
  reg_framework_send(param_1 + 8);
  return;
}
