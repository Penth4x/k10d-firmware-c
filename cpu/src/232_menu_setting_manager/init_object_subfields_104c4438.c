/* @k10d init_object_subfields_104c4438 @ 0x104c4438
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Initializes three sub-structures within an object by calling helper functions on
 *   specific offsets.
 * summary:
 *   The function takes a pointer to an object (param_1) and calls three initialization
 *   helpers on different offsets: forward_three_args_to_helper_10459edc at offset 0x20 with
 *   arguments (1,1), wait_flg_obj at offset 0x34 with argument 0, and
 *   alloc_pool_and_init_task at offset 4 with arguments (0x10, 0x2000, 4). It returns 1.
 *   The specific roles of the callees are unknown, but the pattern suggests setting up
 *   internal state or sub-objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_subfields_104c4438(cls_105b9574 *param_1)

{
  forward_three_args_to_helper_10459edc(&((uint32_t *)&(param_1->field_0x1c))[1],1,1);
  wait_flg_obj(&param_1->field_0x34,0);
  alloc_pool_and_init_task(&param_1->field_0x4,0x10,0x2000,4);
  return 1;
}
