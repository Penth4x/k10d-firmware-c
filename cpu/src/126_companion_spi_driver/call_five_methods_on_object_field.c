/* @k10d call_five_methods_on_object_field @ 0x10443ca2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes five helper functions in sequence on the object pointer stored at offset 0x18
 *   of param_1.
 * summary:
 *   The function dereferences param_1 + 0x18 to obtain a sub-object pointer and passes it
 *   as the first argument to five callees (write_three_words_to_param,
 *   invoke_callback_at_offset_0x10, call_helper_on_field_0x18_104407ea,
 *   update_status_word_bits_10440498, set_bit_2_in_word_at_offset_0x20). The second
 *   parameter param_2 is forwarded only to update_status_word_bits_10440498. The sequence
 *   suggests a multi-step state transition or initialization routine on a specific
 *   component of the parent object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_five_methods_on_object_field(void *param_1,int param_2)

{
  write_three_words_to_param(*(void **)((int)param_1 + 0x18));
  invoke_callback_at_offset_0x10(*(void **)((int)param_1 + 0x18));
  call_helper_on_field_0x18_104407ea(*(void **)((int)param_1 + 0x18));
  update_status_word_bits_10440498(*(void **)((int)param_1 + 0x18),param_2);
  set_bit_2_in_word_at_offset_0x20(*(void **)((int)param_1 + 0x18));
  return;
}
