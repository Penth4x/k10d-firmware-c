/* @k10d allocate_and_init_0x1c_block @ 0x104d713e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x1c byte heap block, initializes its fields with specific constants, and
 *   calls an unknown initializer.
 * summary:
 *   The function allocates 0x1c bytes using heap_alloc. If successful, it sets the first
 *   word to 0xffffffff, calls initialize_lens_update_object on the second word with size
 *   0x14, sets a byte at offset 0x18 to 0, and writes five consecutive words (0x71000000
 *   through 0x71040000) at offsets 0x4 through 0x14. Finally, it calls
 *   initialize_struct_with_sentinel on the allocated block. The specific role of the data
 *   structure is unclear without more context on the callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * allocate_and_init_0x1c_block(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0xffffffff;
    initialize_lens_update_object(param_1 + 1,0x14);
    *(uint8_t *)(param_1 + 6) = 0;
    param_1[1] = 0x71000000;
    param_1[2] = 0x71010000;
    param_1[3] = 0x71020000;
    param_1[4] = 0x71030000;
    param_1[5] = 0x71040000;
    initialize_struct_with_sentinel(param_1);
  }
  return param_1;
}
