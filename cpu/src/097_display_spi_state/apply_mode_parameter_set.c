/* @k10d apply_mode_parameter_set @ 0x1040fd2a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Branches on a mode index (0 or 1) and writes a fixed set of parameter values to an
 *   object via helper calls.
 * summary:
 *   The function selects between two branches based on param_2. Both branches call
 *   set_two_config_values and configure_mode_parameter_table with different second
 *   arguments (2 vs 3), then invoke send_two_byte_pairs_over_ch2 seven times with specific
 *   hex IDs (0x841, 0x845, 0x85d, 0x867, 0x84b, 0x840) and values derived from object
 *   fields or constants. Finally, it calls send_nine_param_updates with values from
 *   different object offsets depending on the mode. The specific subsystem is not
 *   identified because the callee names are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_mode_parameter_set(int param_1,int param_2)

{
  if (param_2 == 0) {
    set_two_config_values(param_1,0);
    configure_mode_parameter_table(param_1,2);
    send_two_byte_pairs_over_ch2(param_1,0x841,0,0);
    send_two_byte_pairs_over_ch2(param_1,0x845,0,0);
    send_two_byte_pairs_over_ch2(param_1,0x85d,*(uint16_t *)(param_1 + 0x9a),*(uint16_t *)(param_1 + 0x9c));
    send_two_byte_pairs_over_ch2(param_1,0x867,0x14,0x14);
    send_two_byte_pairs_over_ch2(param_1,0x84b,0x100,0x100);
    send_two_byte_pairs_over_ch2(param_1,0x840,*(uint16_t *)(param_1 + 0xca),*(uint16_t *)(param_1 + 0xca));
    send_nine_param_updates(param_1,*(uint32_t *)(param_1 + 0xac),*(uint32_t *)(param_1 + 0xb4));
  }
  else if (param_2 == 1) {
    set_two_config_values(param_1,0);
    configure_mode_parameter_table(param_1,3);
    send_two_byte_pairs_over_ch2(param_1,0x841,0,0);
    send_two_byte_pairs_over_ch2(param_1,0x845,0,0);
    send_two_byte_pairs_over_ch2(param_1,0x85d,*(uint16_t *)(param_1 + 0x9a),*(uint16_t *)(param_1 + 0x9c));
    send_two_byte_pairs_over_ch2(param_1,0x867,0x14,0x14);
    send_two_byte_pairs_over_ch2(param_1,0x84b,0x100,0x100);
    send_two_byte_pairs_over_ch2(param_1,0x840,*(uint16_t *)(param_1 + 0xca),*(uint16_t *)(param_1 + 0xca));
    send_nine_param_updates(param_1,*(uint32_t *)(param_1 + 0xb0),*(uint32_t *)(param_1 + 0xb8));
  }
  return;
}
