/* @k10d free_object_if_flag_set_10508ac0 @ 0x10508ac0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper on the object's second field, then frees the heap block if the second
 *   argument's low bit is set.
 * summary:
 *   Takes a heap pointer in param_1 and a flags word in param_2. If param_1 is non-NULL it
 *   calls destroy_and_maybe_free_object with (param_1+4) and the constant 2, then frees the
 *   block via heap_free when bit 0 of param_2 is set. The role of
 *   destroy_and_maybe_free_object is unknown, so the pre-free step is described
 *   mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_if_flag_set_10508ac0(int param_1,uint param_2)

{
  if ((param_1 != 0) && (destroy_and_maybe_free_object((void *)(param_1 + 4),2), (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
