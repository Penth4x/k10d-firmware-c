/* @k10d allocate_and_init_16_byte_struct_104d755c @ 0x104d755c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Allocates a 16-byte heap block and initializes it with specific constants and a zeroed
 *   field.
 * summary:
 *   The function allocates 0x10 bytes via heap_alloc if param_1 is NULL. It sets the first
 *   word to 0xffffffff, calls initialize_lens_update_object on the second word with
 *   argument 8, zeros the byte at offset 12, and sets words at offsets 4 and 8 to
 *   0x74000000 and 0x74010000 respectively. Finally, it calls
 *   initialize_pointer_to_invalid_104d75c8 on the allocated pointer. The specific role of
 *   the structure is unclear without further context on the callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * allocate_and_init_16_byte_struct_104d755c(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0xffffffff;
    initialize_lens_update_object(param_1 + 1,8);
    *(uint8_t *)(param_1 + 3) = 0;
    param_1[1] = 0x74000000;
    param_1[2] = 0x74010000;
    initialize_pointer_to_invalid_104d75c8(param_1);
  }
  return param_1;
}
