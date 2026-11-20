/* @k10d clear_struct_and_call_four_helpers @ 0x104e5408
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   If the first byte is non-zero, calls four helpers with a pointer at offset 0x74, then
 *   zeroes most of the struct.
 * summary:
 *   Gated on *param_1 != 0, it dereferences the 4-byte value at param_1+0x74 and passes it
 *   to release_object_buffer, release_pointer_at_offset_0x2c, release_struct_resources, and
 *   release_pool_block_if_present (the last also receives the value at param_1+0x40). It
 *   then clears bytes 0x40-0x43, 4-0x2f, and 0x44-0x47, and finally sets *param_1 to 0. The
 *   callees are unnamed, so the subsystem role is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_struct_and_call_four_helpers(char *param_1)

{
  if (*param_1 != '\0') {
    release_object_buffer(*(uint32_t *)(param_1 + 0x74));
    release_pointer_at_offset_0x2c(*(uint32_t *)(param_1 + 0x74));
    release_struct_resources(*(uint32_t *)(param_1 + 0x74));
    release_pool_block_if_present((int)(*(uint32_t *)(param_1 + 0x74)),(void *)(*(uint32_t *)(param_1 + 0x40)));
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    param_1[0x2f] = '\0';
    param_1[0x44] = '\0';
    param_1[0x45] = '\0';
    param_1[0x46] = '\0';
    param_1[0x47] = '\0';
    *param_1 = '\0';
  }
  return;
}
