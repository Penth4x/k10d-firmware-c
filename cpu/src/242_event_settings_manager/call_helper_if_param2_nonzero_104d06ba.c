/* @k10d call_helper_if_param2_nonzero_104d06ba @ 0x104d06ba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes write_to_dynamic_array with param_2 and a value derived from param_1 when
 *   param_2 is non-zero.
 * summary:
 *   Checks if param_2 is non-zero. If so, it dereferences a pointer chain starting at
 *   param_1+4, then +0x18, then +0x18 to get an argument, and calls write_to_dynamic_array
 *   with param_2, 0, and that value. Returns true if param_2 was non-zero, false otherwise.
 *   The specific role of the data structure or the callee is not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_helper_if_param2_nonzero_104d06ba(int param_1, int param_2, uint32_t param_x2)

{
  if (param_2 != 0) {
    write_to_dynamic_array(param_2,0,*(uint32_t *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x18));
  }
  return param_2 != 0;
}
