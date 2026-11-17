/* @k10d copy_two_words_and_init_buffer @ 0x10474dae
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies two 32-bit values from param_2 into param_1, allocates a buffer, and initializes
 *   it with a pointer.
 * summary:
 *   The function writes param_2[1] and param_2[2] to offsets 4 and 8 of the object pointed
 *   to by param_1. It calls alloc_and_init_0x3c_object with a NULL argument, likely to
 *   allocate memory, and stores the result at offset 0xc of param_1. Finally, it calls
 *   copy_if_flag_set passing the newly allocated buffer and the value from param_2[0]. The
 *   function returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_two_words_and_init_buffer(void *param_1,uint32_t *param_2)

{
  uint8_t *puVar1;
  uint8_t *puVar2;
  
  puVar2 = (uint8_t *)*param_2;
  *(uint32_t *)((int)param_1 + 4) = param_2[1];
  *(uint32_t *)((int)param_1 + 8) = param_2[2];
  puVar1 = (uint8_t *)alloc_and_init_0x3c_object((void *)0x0);
  *(uint8_t **)((int)param_1 + 0xc) = puVar1;
  copy_if_flag_set(puVar1,puVar2);
  return 1;
}
