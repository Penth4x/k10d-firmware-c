/* @k10d init_32_entry_pointer_table @ 0x104d5498
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Allocates a 0xa4-byte object and initializes its first 32 words with sequential
 *   0x53000000-based values.
 * summary:
 *   The function accepts an optional pre-allocated buffer; if NULL, it allocates 0xa4 bytes
 *   via heap_alloc. It zero-initializes the first 0x7c bytes and the last 0x1f bytes using
 *   initialize_lens_update_object, then explicitly sets 32 consecutive 32-bit fields to
 *   values ranging from 0x53000000 to 0x531e0000. Finally, it calls
 *   reset_struct_and_call_helper on the object before returning the pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104d54ba) overlaps instruction at (ram,0x104d54b8)
    */

uint32_t * init_32_entry_pointer_table(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xa4), param_1 != (uint32_t *)0x0)) {
    initialize_lens_update_object(param_1,0x7c);
    initialize_lens_update_object(param_1 + 0x1f,0x1f);
    param_1[0x27] = 0;
    *(uint8_t *)(param_1 + 0x28) = 0;
    *param_1 = 0x53000000;
    param_1[1] = 0x53010000;
    param_1[2] = 0x53020000;
    param_1[3] = 0x53030000;
    param_1[4] = 0x53040000;
    param_1[5] = 0x53050000;
    param_1[6] = 0x53060000;
    param_1[7] = 0x53070000;
    param_1[8] = 0x53080000;
    param_1[9] = 0x53090000;
    param_1[10] = 0x530a0000;
    param_1[0xb] = 0x530b0000;
    param_1[0xc] = 0x530c0000;
    param_1[0xd] = 0x530d0000;
    param_1[0xe] = 0x530e0000;
    param_1[0xf] = 0x530f0000;
    param_1[0x10] = 0x53100000;
    param_1[0x11] = 0x53110000;
    param_1[0x12] = 0x53120000;
    param_1[0x13] = 0x53130000;
    param_1[0x14] = 0x53140000;
    param_1[0x15] = 0x53150000;
    param_1[0x16] = 0x53160000;
    param_1[0x17] = 0x53170000;
    param_1[0x18] = 0x53180000;
    param_1[0x19] = 0x53190000;
    param_1[0x1a] = 0x531a0000;
    param_1[0x1b] = 0x531b0000;
    param_1[0x1c] = 0x531c0000;
    param_1[0x1d] = 0x531d0000;
    param_1[0x1e] = 0x531e0000;
    reset_struct_and_call_helper(param_1);
  }
  return param_1;
}
