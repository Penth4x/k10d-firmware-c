/* @k10d invoke_fourteen_helpers_on_subobject @ 0x10412980
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Calls fourteen helper functions in sequence, passing the pointer stored at offset 0x30
 *   of the input object.
 * summary:
 *   The function dereferences param_1 + 0x30 to obtain a sub-object pointer and passes it
 *   as the first argument to fourteen consecutive calls (write_three_words_to_param through
 *   invoke_object_method_at_offset_0x18_1044087a). Two of the calls also pass small integer
 *   constants (0xc and 0x20) as a second argument. The callees are unnamed, so the specific
 *   subsystem or side effects cannot be determined from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_fourteen_helpers_on_subobject(void *param_1)

{
  write_three_words_to_param(*(void **)((int)param_1 + 0x30));
  invoke_object_method_at_offset_0x10_104406b8(*(void **)((int)param_1 + 0x30));
  invoke_object_method_at_offset_0x18_10440820(*(void **)((int)param_1 + 0x30));
  invoke_callback_at_offset_0x10(*(void **)((int)param_1 + 0x30));
  call_helper_on_field_0x18_104407ea(*(void **)((int)param_1 + 0x30));
  call_subobject_method_at_offset_0x14_10440736(*(void **)((int)param_1 + 0x30));
  update_status_word_bits_10440498(*(void **)((int)param_1 + 0x30),0xc);
  set_bit_2_in_word_at_offset_0x20(*(void **)((int)param_1 + 0x30));
  set_bit3_of_word_at_offset_0x20(*(void **)((int)param_1 + 0x30),0x20);
  set_bit0_at_offset_0x20(*(void **)((int)param_1 + 0x30));
  set_bit7_at_offset_0x28(*(void **)((int)param_1 + 0x30));
  invoke_object_method_at_offset_0x10_10440712(*(void **)((int)param_1 + 0x30));
  invoke_object_method_at_offset_0x14(*(void **)((int)param_1 + 0x30));
  invoke_object_method_at_offset_0x18_1044087a(*(void **)((int)param_1 + 0x30));
  return;
}
