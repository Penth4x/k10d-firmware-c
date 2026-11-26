/* @k10d allocate_and_enqueue_event @ 0x104a2e20
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Allocates a small event structure, initializes its fields from arguments, and enqueues
 *   it via a callee.
 * summary:
 *   Calls alloc_dynamic_array_header(0,1) to obtain a pointer to a newly allocated or
 *   pooled structure. Writes param_2 to offset 8, the constant 1 to offset 4, and param_3
 *   to the location pointed to by the pointer at offset 0xc. Finally, calls
 *   reg_framework_send with param_1 + 8, likely to add the event to a queue or list
 *   associated with param_1. The specific role of the event (e.g., camera subsystem) is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_enqueue_event(int param_1,uint32_t param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = (int)alloc_dynamic_array_header(0,1);
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 1;
  **(uint32_t **)(iVar1 + 0xc) = (uint32_t)param_3;
  reg_framework_send(param_1 + 8, (void *)iVar1, 0x2);
  return;
}
