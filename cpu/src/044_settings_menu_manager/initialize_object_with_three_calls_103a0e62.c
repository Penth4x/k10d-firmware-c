/* @k10d initialize_object_with_three_calls_103a0e62 @ 0x103a0e62
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_with_three_calls_103a0e62(int param_1)

{
  call_helper_on_fetched_pointer();
  call_two_helpers_in_sequence_104920f2(param_1 + 8);
  clear_struct_field_at_offset_8(param_1);
  return 0;
}
