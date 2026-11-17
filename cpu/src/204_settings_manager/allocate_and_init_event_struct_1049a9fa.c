/* @k10d allocate_and_init_event_struct_1049a9fa @ 0x1049a9fa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a small struct, initializes its fields with the provided parameters, and
 *   registers it via a helper.
 * summary:
 *   Calls alloc_dynamic_array_header(0,1) to obtain a pointer to a newly allocated or
 *   pooled structure. Writes param_2 to offset 8, sets offset 4 to 0, and stores the
 *   address of param_3 at offset 0xc (via a double dereference). Finally, calls
 *   reg_framework_send with param_1 + 8, likely to enqueue or link the new structure into a
 *   list or queue associated with param_1. The function acts as a constructor or factory
 *   for a data object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_event_struct_1049a9fa(int param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  
  iVar1 = (int)alloc_dynamic_array_header(0,1);
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 0;
  **(uint32_t **)(iVar1 + 0xc) = param_3;
  reg_framework_send(param_1 + 8);
  return;
}
