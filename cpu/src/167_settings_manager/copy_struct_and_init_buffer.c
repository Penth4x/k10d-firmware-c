/* @k10d copy_struct_and_init_buffer @ 0x104762f6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies three 32-bit fields from a source struct to an offset in a destination object
 *   and initializes a new buffer.
 * summary:
 *   The function writes param_2[1], param_2[2], and param_2[3] to offsets 4, 8, and 0xc of
 *   param_1. It then calls alloc_and_init_0x3c_object with a NULL argument, likely
 *   allocating a buffer, and stores the result at offset 0x10 of param_1. Finally, it calls
 *   copy_if_flag_set to initialize or copy data into the new buffer using the first pointer
 *   from param_2. The specific camera subsystem role is not determinable from the provided
 *   pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_struct_and_init_buffer(void *param_1,uint32_t *param_2)

{
  uint8_t *puVar1;
  uint8_t *puVar2;
  
  puVar2 = (uint8_t *)*param_2;
  *(uint32_t *)((int)param_1 + 4) = param_2[1];
  *(uint32_t *)((int)param_1 + 8) = param_2[2];
  *(uint32_t *)((int)param_1 + 0xc) = param_2[3];
  puVar1 = (uint8_t *)alloc_and_init_0x3c_object((void *)0x0);
  *(uint8_t **)((int)param_1 + 0x10) = puVar1;
  copy_if_flag_set(puVar1,puVar2);
  return 1;
}
