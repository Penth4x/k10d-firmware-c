/* @k10d configure_two_parameter_state @ 0x000f3138
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Calls two setup routines, then branches on param_1 and param_2 to invoke three
 *   additional configuration functions.
 * summary:
 *   The function unconditionally calls wait_if_flag_is_two and set_ram_flags_and_counters.
 *   It then calls write_masked_field_and_call_two_routines with arguments 0x17 and either
 *   0xe0 or 0xf0 depending on whether param_1 is zero. If param_2 is non-zero, it
 *   additionally calls update_ram_byte_bits with 0x1f and write_ram_config_bytes. No memory
 *   writes or MMIO operations are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_two_parameter_state(int param_1,int param_2)

{
  wait_if_flag_is_two();
  set_ram_flags_and_counters();
  if (param_1 == 0) {
    write_masked_field_and_call_two_routines(0x17,0xe0);
  }
  else {
    write_masked_field_and_call_two_routines(0x17,0xf0);
  }
  if (param_2 != 0) {
    update_ram_byte_bits(0x1f);
    write_ram_config_bytes();
  }
  return;
}
