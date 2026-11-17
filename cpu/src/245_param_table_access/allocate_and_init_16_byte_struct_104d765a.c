/* @k10d allocate_and_init_16_byte_struct_104d765a @ 0x104d765a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Allocates a 16-byte heap block and initializes it with specific constants and a zeroed
 *   field.
 * summary:
 *   If param_1 is NULL, allocates 0x10 bytes via heap_alloc. Sets the first word to
 *   0xffffffff, calls initialize_lens_update_object on the second word with size 8, zeroes
 *   the byte at offset 12, and sets words at offsets 4 and 8 to 0x75000000 and 0x75010000
 *   respectively. Finally calls initialize_pointer_to_invalid_104d76c6 on the allocated
 *   structure. Returns the pointer to the structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * allocate_and_init_16_byte_struct_104d765a(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0xffffffff;
    initialize_lens_update_object(param_1 + 1,8);
    *(uint8_t *)(param_1 + 3) = 0;
    param_1[1] = 0x75000000;
    param_1[2] = 0x75010000;
    initialize_pointer_to_invalid_104d76c6(param_1);
  }
  return param_1;
}
