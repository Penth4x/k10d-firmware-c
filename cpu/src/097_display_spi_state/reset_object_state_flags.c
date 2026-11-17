/* @k10d reset_object_state_flags @ 0x10410194
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Resets internal state by calling four helper functions with specific flag values on the
 *   object.
 * summary:
 *   The function takes an object pointer (param_1) and invokes a sequence of four helper
 *   functions: set_two_config_values with 0, configure_mode_parameter_table with 1,
 *   set_two_config_values with 1, and send_two_byte_pairs_over_ch2 with 0x802, 0, 0. The
 *   repeated calls to set_two_config_values with different arguments suggest toggling or
 *   setting specific state bits or modes. The final call to send_two_byte_pairs_over_ch2
 *   with 0x802 likely triggers a specific event or configuration change. No camera-specific
 *   subsystem is clearly indicated by the callees or arguments.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_object_state_flags(uint32_t param_1)

{
  set_two_config_values(param_1,0);
  configure_mode_parameter_table(param_1,1);
  set_two_config_values(param_1,1);
  send_two_byte_pairs_over_ch2(param_1,0x802,0,0);
  return;
}
