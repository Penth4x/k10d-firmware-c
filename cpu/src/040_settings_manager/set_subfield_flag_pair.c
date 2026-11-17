/* @k10d set_subfield_flag_pair @ 0x1039673c
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes 1 then 0 to a field at offset 0xc of the object passed in param_1 via two helper
 *   calls.
 * summary:
 *   Takes an object pointer in param_1 and calls set_field_and_call_helper_1039bd48 with
 *   (param_1+0xc, 1) followed by set_flag_and_update_two_fields_1039bdf8 with (param_1+0xc,
 *   0). The two callees are unnamed, so the exact semantics of the 1/0 values are unknown;
 *   the pattern suggests a set-then-clear or toggle-style operation on a sub-structure at
 *   offset 0xc. No camera-specific behavior is evident from the pseudocode or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_subfield_flag_pair(int param_1)

{
  set_field_and_call_helper_1039bd48((void *)(param_1 + 0xc),1);
  set_flag_and_update_two_fields_1039bdf8((void *)(param_1 + 0xc),0);
  return;
}
