/* @k10d swap_two_short_fields @ 0x104bc2c2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper twice to exchange two 16-bit fields at offsets 0x14 and 0x2a within a
 *   struct.
 * summary:
 *   The function reads two 16-bit values from param_1 at offsets 0x14 (param_1 + 10) and
 *   0x2a. It invokes compute_and_store_two_values twice, first passing the value at 0x14 as
 *   the second argument and the value at 0x2a as the third, with param_1 + 2 as the fourth.
 *   It then calls compute_and_store_two_values again with these two values swapped, using
 *   param_1 + 4 as the fourth argument. This pattern suggests a swap or exchange operation
 *   on two specific fields within the object pointed to by param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void swap_two_short_fields(uint32_t *param_1)

{
  compute_and_store_two_values(param_1,*(uint16_t *)(param_1 + 10),*(uint16_t *)((int)param_1 + 0x2a),
               param_1 + 2);
  compute_and_store_two_values(param_1,*(uint16_t *)((int)param_1 + 0x2a),*(uint16_t *)(param_1 + 10),
               param_1 + 4);
  return;
}
