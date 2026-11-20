/* @k10d init_object_with_two_helpers_10506104 @ 0x10506104
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling two helper functions on its fields at offsets 8 and
 *   0x28.
 * summary:
 *   The function takes a pointer to an object (param_1) and performs two initialization
 *   steps. It first calls wait_flg_obj on the field at offset 0x28 with a zero argument. It
 *   then calls alloc_pool_and_init_task on the field at offset 8 with arguments 0xf,
 *   0x1000, and 4. Finally, it returns 1. The specific roles of the callees are unknown, so
 *   the function is named for its mechanical behavior of initializing object fields.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_two_helpers_10506104(cls_105d5094 *param_1)

{
  wait_flg_obj(&param_1->field_0x28,0);
  alloc_pool_and_init_task((int *)&param_1->field_0x8,0xf,0x1000,4);
  return 1;
}
