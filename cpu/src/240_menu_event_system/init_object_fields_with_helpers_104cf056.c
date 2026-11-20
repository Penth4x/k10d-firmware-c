/* @k10d init_object_fields_with_helpers_104cf056 @ 0x104cf056
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 240_menu_event_system (unit names are model-proposed)
 * purpose:
 *   Initializes three fields of a 0x40-byte object by calling three helper functions with
 *   fixed parameters.
 * summary:
 *   The function takes a pointer to an object (param_1) and calls three unnamed helpers. It
 *   passes offsets 4, 0x18, and 0x24 within the object to alloc_pool_and_init_task,
 *   wait_flg_obj, and forward_three_args_to_helper_10459edc respectively. The first call
 *   uses arguments 0x10, 0x1000, and 4; the second uses 0; the third uses 1, 1. It returns
 *   1. The specific roles of the callees and the object are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_fields_with_helpers_104cf056(cls_105b979c *param_1)

{
  alloc_pool_and_init_task(&param_1->field_0x4,0x10,0x1000,4);
  wait_flg_obj(&param_1->field_0x18,0);
  forward_three_args_to_helper_10459edc(&((uint32_t *)&(param_1->field_0x20))[1],1,1);
  return 1;
}
