/* @k10d init_object_with_two_helpers_10508d34 @ 0x10508d34
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling two helper functions on its fields at offsets 0x2c and
 *   8.
 * summary:
 *   The function takes a pointer to an object (param_1) and calls wait_flg_obj on the field
 *   at offset 0x2c with a zero argument. It then calls alloc_pool_and_init_task on the
 *   field at offset 8 with arguments 0xf, 0x1000, and 4. It returns 1. The callees are not
 *   named, so the specific subsystem is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_two_helpers_10508d34(int param_1)

{
  wait_flg_obj((void *)(param_1 + 0x2c),0);
  alloc_pool_and_init_task((int *)(param_1 + 8),0xf,0x1000,4);
  return 1;
}
