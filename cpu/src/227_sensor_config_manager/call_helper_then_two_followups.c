/* @k10d call_helper_then_two_followups @ 0x104c20d6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper, then conditionally calls two more helpers with the same
 *   arguments if the first returns non-zero.
 * summary:
 *   The function first calls write_two_words_to_struct_104c1ff4 with no arguments. It then
 *   calls copy_object_state_to_buffer with param_1 and param_4, storing the return value in
 *   iVar1. If iVar1 is non-zero, it calls copy_three_bytes_to_list_entries and
 *   toggle_three_entry_flags, both with param_1 and param_4. Finally, it returns the value
 *   from copy_object_state_to_buffer. The specific roles of the callees are unknown, so the
 *   function's behavior is described mechanically as a conditional sequence of helper
 *   calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_helper_then_two_followups(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint16_t *param_4)

{
  int iVar1;
  
  write_two_words_to_struct_104c1ff4((uint32_t)param_1, (uint32_t)param_2, (uint32_t)param_3);
  iVar1 = copy_object_state_to_buffer(param_1,param_4);
  if (iVar1 != 0) {
    copy_three_bytes_to_list_entries(param_1,param_4);
    toggle_three_entry_flags(param_1,param_4);
  }
  return iVar1;
}
