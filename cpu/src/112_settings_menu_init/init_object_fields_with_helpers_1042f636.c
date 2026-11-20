/* @k10d init_object_fields_with_helpers_1042f636 @ 0x1042f636
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 112_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Initializes fields of an object by calling two helper functions on offsets 4, 0x20, and
 *   0x28.
 * summary:
 *   The function takes an object pointer (param_1) and calls alloc_pool_and_init_task on
 *   the field at offset 4 with arguments 10, 0x1000, and 4. It then calls
 *   forward_three_args_to_helper_10459edc twice, first on the field at offset 0x20 with
 *   arguments 4 and 4, and second on the field at offset 0x28 with arguments 1 and 1. It
 *   returns 1. The specific roles of the callees and the object fields are not determinable
 *   from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_fields_with_helpers_1042f636(cls_1059efac *param_1)

{
  alloc_pool_and_init_task((int *)&param_1->field_0x4,10,0x1000,4);
  forward_three_args_to_helper_10459edc(&param_1->field_0x20,4,4);
  forward_three_args_to_helper_10459edc(&param_1->field_0x28,1,1);
  return 1;
}
