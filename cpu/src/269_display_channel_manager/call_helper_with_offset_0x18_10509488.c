/* @k10d call_helper_with_offset_0x18_10509488 @ 0x10509488
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Passes the value at param_1+0x18 to set_object_flag_bits_0x110 with arguments 1 and 0.
 * summary:
 *   The function dereferences the field at offset 0x18 of the object pointed to by param_1
 *   and passes it as the first argument to set_object_flag_bits_0x110, along with the
 *   constants 1 and 0. No other operations or side effects are visible in the pseudocode.
 *   The role of set_object_flag_bits_0x110 is unknown, so the specific subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_0x18_10509488(int param_1)

{
  set_object_flag_bits_0x110((void *)(*(uint32_t *)(param_1 + 0x18)),1,0);
  return;
}
