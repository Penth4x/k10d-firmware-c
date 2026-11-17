/* @k10d allocate_and_init_struct_104d7758 @ 0x104d7758
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Allocates a 16-byte structure on the heap and initializes its fields with specific
 *   constants.
 * summary:
 *   The function allocates 0x10 bytes using heap_alloc. It sets the first word to
 *   0xffffffff, the fourth byte to 0, and the second and third words to 0x76000000 and
 *   0x76010000 respectively. It then calls initialize_pointer_to_invalid_104d77c4 with the
 *   allocated pointer, likely for further initialization or registration.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * allocate_and_init_struct_104d7758(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0xffffffff;
    initialize_lens_update_object(param_1 + 1,8);
    *(uint8_t *)(param_1 + 3) = 0;
    param_1[1] = 0x76000000;
    param_1[2] = 0x76010000;
    initialize_pointer_to_invalid_104d77c4(param_1);
  }
  return param_1;
}
