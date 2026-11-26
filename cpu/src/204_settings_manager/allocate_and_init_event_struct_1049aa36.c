/* @k10d allocate_and_init_event_struct_1049aa36 @ 0x1049aa36
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 16-byte structure, initializes its fields with the provided parameters, and
 *   triggers a callback on the caller's object.
 * summary:
 *   Calls alloc_dynamic_array_header(0, 2) to obtain a pointer to a newly allocated or
 *   pooled structure. It writes param_2 to offset 8, sets offset 4 to 1, stores param_3 at
 *   offset 0xc (as a pointer), and writes param_4 to offset 4 of the structure pointed to
 *   by param_3. Finally, it calls reg_framework_send with param_1 + 8, likely to signal
 *   that the new event or object is ready.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_init_event_struct_1049aa36(int param_1,uint32_t param_2,void *param_3,uint32_t param_4)

{
  int iVar1;
  
  iVar1 = (int)alloc_dynamic_array_header(0,2);
  *(uint32_t *)(iVar1 + 8) = param_2;
  *(uint32_t *)(iVar1 + 4) = 1;
  **(uint32_t **)(iVar1 + 0xc) = (uint32_t)param_3;
  *(uint32_t *)(*(int *)(iVar1 + 0xc) + 4) = param_4;
  reg_framework_send(param_1 + 8, (void *)iVar1, 0x2);
  return;
}
