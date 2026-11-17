/* @k10d call_helper_on_offset_field_10391b2e @ 0x10391b2e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes a pointer to the field at offset 0xc of param_1 to a helper with fixed arguments
 *   1 and 0x1f.
 * summary:
 *   The function takes a single pointer argument and calls
 *   forward_three_args_to_helper_10459d64 with a pointer to the member at offset 0xc, plus
 *   the constants 1 and 0x1f. It is invoked as virtual method slot 2 of class cls_10562400.
 *   No other side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_offset_field_10391b2e(int param_1)

{
  forward_three_args_to_helper_10459d64((void *)(param_1 + 0xc),1,0x1f);
  return;
}
