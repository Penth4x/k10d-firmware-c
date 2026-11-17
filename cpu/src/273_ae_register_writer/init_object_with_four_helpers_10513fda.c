/* @k10d init_object_with_four_helpers_10513fda @ 0x10513fda
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling four helper functions on its fields and setting a flag
 *   at offset 0x298.
 * summary:
 *   The function takes a pointer to an object (param_1) and performs initialization by
 *   calling four unnamed helper functions on specific offsets: 0x14, 0x34c, 0x344, and
 *   0x28. It then sets the 4-byte value at offset 0x298 to 1 and returns 1. The callees are
 *   not named, so their specific roles are unknown, but the pattern suggests a standard
 *   object initialization routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_four_helpers_10513fda(void *param_1)

{
  alloc_pool_and_init_task((int *)((int)param_1 + 0x14),0xd,0x1000,4);
  wait_flg_obj((void *)((int)param_1 + 0x34c),0);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x344),1,0x1f);
  create_message_box_104594ea((int *)((int)param_1 + 0x28),5);
  *(uint32_t *)((int)param_1 + 0x298) = 1;
  return 1;
}
