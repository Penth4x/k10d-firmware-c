/* @k10d call_helper_with_offset_pointer_103967a2 @ 0x103967a2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes a pointer offset by 0xc from its argument to a single callee.
 * summary:
 *   The function takes a void pointer argument, adds 0xc to it, and passes the resulting
 *   address to increment_and_clamp_counter_1039bd7a. It performs no other operations and
 *   returns void. The role of the callee and the specific data structure at offset 0xc are
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_pointer_103967a2(void *param_1)

{
  increment_and_clamp_counter_1039bd7a((void *)((int)param_1 + 0xc));
  return;
}
