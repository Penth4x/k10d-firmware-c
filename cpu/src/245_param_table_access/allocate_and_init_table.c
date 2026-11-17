/* @k10d allocate_and_init_table @ 0x104d7364
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x70-byte heap block and initializes it with a sequence of 0x73xxxxxx
 *   constants.
 * summary:
 *   The function allocates 0x70 bytes via heap_alloc if param_1 is NULL. It sets the first
 *   word to 0xffffffff, calls initialize_lens_update_object on the second word with size
 *   0x68, and fills the remaining words with a specific pattern of 0x73xxxxxx values.
 *   Finally, it calls initialize_struct_with_ff on the allocated block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * allocate_and_init_table(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x70), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0xffffffff;
    initialize_lens_update_object(param_1 + 1,0x68);
    *(uint8_t *)(param_1 + 0x1b) = 0;
    param_1[1] = 0x73000000;
    param_1[2] = 0x73010000;
    param_1[3] = 0x73010100;
    param_1[4] = 0x73010200;
    param_1[5] = 0x73010300;
    param_1[6] = 0x73010400;
    param_1[7] = 0x73010500;
    param_1[8] = 0x73010600;
    param_1[9] = 0x73010700;
    param_1[10] = 0x73020000;
    param_1[0xb] = 0x73020100;
    param_1[0xc] = 0x73020200;
    param_1[0xd] = 0x73020300;
    param_1[0xe] = 0x73030000;
    param_1[0xf] = 0x73030100;
    param_1[0x10] = 0x73030200;
    param_1[0x11] = 0x73030300;
    param_1[0x12] = 0x73030400;
    param_1[0x13] = 0x73030500;
    param_1[0x14] = 0x73030600;
    param_1[0x15] = 0x73030700;
    param_1[0x16] = 0x73030800;
    param_1[0x17] = 0x73030900;
    param_1[0x18] = 0x73040000;
    param_1[0x19] = 0x73040100;
    param_1[0x1a] = 0x73040200;
    initialize_struct_with_ff(param_1);
  }
  return param_1;
}
