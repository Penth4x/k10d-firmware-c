/* @k10d call_three_init_helpers_103b3d7a @ 0x103b3d7a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions in sequence, passing param_1 and param_1+8 to two of
 *   them.
 * summary:
 *   The function acts as a wrapper that calls call_helper_on_fetched_pointer with no
 *   arguments, then call_two_helpers_in_sequence_104920f2 with param_1 + 8, and finally
 *   clear_struct_field_at_offset_8 with param_1. The specific roles of these callees are
 *   unknown, so the function's purpose is described mechanically as a sequence of calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_init_helpers_103b3d7a(int param_1)

{
  call_helper_on_fetched_pointer();
  call_two_helpers_in_sequence_104920f2(param_1 + 8);
  clear_struct_field_at_offset_8(param_1);
  return;
}
