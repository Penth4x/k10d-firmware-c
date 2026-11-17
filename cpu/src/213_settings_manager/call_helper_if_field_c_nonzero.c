/* @k10d call_helper_if_field_c_nonzero @ 0x104af75e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls destroy_lens_update_objects when the object's field at offset 0xc is non-zero.
 * summary:
 *   Checks the 4-byte field at offset 0xc of the object passed in param_1. If that field is
 *   non-zero, it invokes the single callee destroy_lens_update_objects with no arguments.
 *   This is virtual slot 2 of cls_105b7838. No other side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_field_c_nonzero(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    destroy_lens_update_objects(__frv_reg_unset(4));
  }
  return;
}
