/* @k10d call_if_pointer_non_null @ 0x10493dd0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on the first word of a struct if that word is non-null.
 * summary:
 *   Dereferences param_1 and checks whether the first 32-bit field is non-zero. If so, it
 *   calls store_value_at_offset_0x1c_1048cc92 with that pointer and param_2. No other side
 *   effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_if_pointer_non_null(uint32_t *param_1,uint32_t param_2)

{
  if ((void *)*param_1 != (void *)0x0) {
    store_value_at_offset_0x1c_1048cc92((void *)*param_1,param_2);
  }
  return;
}
