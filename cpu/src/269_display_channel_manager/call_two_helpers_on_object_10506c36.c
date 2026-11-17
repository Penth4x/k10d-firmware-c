/* @k10d call_two_helpers_on_object_10506c36 @ 0x10506c36
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions, passing the object pointer and a field at offset 0x18.
 * summary:
 *   The function takes a single pointer argument and calls
 *   release_object_at_offset_0x18_10506c0c with it. It then dereferences the pointer at
 *   offset 0x18 and passes that value to release_context_two_fields. No other operations or
 *   side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_object_10506c36(int param_1)

{
  release_object_at_offset_0x18_10506c0c(param_1);
  release_context_two_fields(*(void **)(param_1 + 0x18));
  return;
}
