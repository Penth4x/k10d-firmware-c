/* @k10d call_helper_on_offset_field_103922c6 @ 0x103922c6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes a pointer to the field at offset 0xc of param_1 to
 *   increment_and_clamp_counter_10397c04.
 * summary:
 *   The function takes a single pointer argument and forwards a derived pointer (param_1 +
 *   0xc) to the callee increment_and_clamp_counter_10397c04. It performs no other
 *   operations, has no visible side effects beyond the callee's behavior, and returns void.
 *   The role of the callee and the meaning of the 0xc-offset field are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_offset_field_103922c6(void *param_1)

{
  increment_and_clamp_counter_10397c04((void *)((int)param_1 + 0xc));
  return;
}
