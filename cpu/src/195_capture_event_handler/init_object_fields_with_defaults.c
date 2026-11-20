/* @k10d init_object_fields_with_defaults @ 0x10492b10
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 195_capture_event_handler (unit names are model-proposed)
 * purpose:
 *   Initializes specific fields of a 0x40-byte object by calling helper functions to set
 *   values at offsets 4, 0x24, 0x2c, and 0x34.
 * summary:
 *   The function takes a pointer to an object (param_1) and calls four helper functions to
 *   initialize or set values at specific offsets within the object. It calls
 *   alloc_pool_and_init_task with offset 4, size 0x10, and other parameters, then calls
 *   forward_three_args_to_helper_10459d64 with offset 0x24, and
 *   forward_three_args_to_helper_10459edc twice with offsets 0x2c and 0x34. It returns 1
 *   upon completion. The specific roles of the helper functions are unknown, but the
 *   pattern suggests field initialization or configuration.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_fields_with_defaults(cls_105b432c *param_1)

{
  alloc_pool_and_init_task((int *)&param_1->field_0x4,0x10,0x1000,4);
  forward_three_args_to_helper_10459d64(&param_1->field_0x24,1,0x1f);
  forward_three_args_to_helper_10459edc(&param_1->field_0x2c,1,1);
  forward_three_args_to_helper_10459edc(&param_1->field_0x34,1,1);
  return 1;
}
