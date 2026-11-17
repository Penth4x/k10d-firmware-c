/* @k10d allocate_and_init_0x14_block @ 0x104d7036
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x14-byte heap block, initializes its fields with specific constants, and
 *   calls an unknown initializer.
 * summary:
 *   The function allocates 0x14 bytes via heap_alloc if param_1 is NULL. It sets the first
 *   word to 0xffffffff, calls initialize_lens_update_object on the second word with
 *   argument 0xc, sets the fifth byte to 0, and initializes words 1-3 with values
 *   0x70000000, 0x70010000, and 0x70020000. Finally, it calls
 *   initialize_struct_to_invalid_104d70ac on the allocated block. The specific role of the
 *   data structure is unclear without more context on the callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * allocate_and_init_0x14_block(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0xffffffff;
    initialize_lens_update_object(param_1 + 1,0xc);
    *(uint8_t *)(param_1 + 4) = 0;
    param_1[1] = 0x70000000;
    param_1[2] = 0x70010000;
    param_1[3] = 0x70020000;
    initialize_struct_to_invalid_104d70ac(param_1);
  }
  return param_1;
}
