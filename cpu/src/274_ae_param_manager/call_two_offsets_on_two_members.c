/* @k10d call_two_offsets_on_two_members @ 0x10516e8c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Invokes kernel_diag_taskstack on two pointer members of the object with fixed offsets.
 * summary:
 *   Reads the 4-byte members at offsets 4 and 0xc of the object passed in param_1. Calls
 *   kernel_diag_taskstack with the first member plus 0x14, then with the second member plus
 *   0xc. No other side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_offsets_on_two_members(cls_105d6450 *param_1)

{
  kernel_diag_taskstack((void *)(param_1->field_0x4 + 0x14));
  kernel_diag_taskstack((void *)(param_1->field_0xc + 0xc));
  return;
}
