/* @k10d call_helper_if_param2_nonzero_104d0690 @ 0x104d0690
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes write_to_dynamic_array with param_2 and a value derived from param_1 when
 *   param_2 is non-zero.
 * summary:
 *   Checks if param_2 is non-zero. If so, it dereferences a pointer chain starting at
 *   param_1+4 to extract a 32-bit value and passes it as the third argument to
 *   write_to_dynamic_array along with param_2 and 0. Returns true if param_2 was non-zero,
 *   false otherwise. The specific role of the dereferenced value and the callee is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_helper_if_param2_nonzero_104d0690(int param_1, int param_2, uint32_t param_x2)

{
  if (param_2 != 0) {
    write_to_dynamic_array(param_2,0,*(uint32_t *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 0x18));
  }
  return param_2 != 0;
}
