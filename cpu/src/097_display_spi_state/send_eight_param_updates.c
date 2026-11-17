/* @k10d send_eight_param_updates @ 0x10412564
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Calls a helper eight times to send consecutive parameter IDs with values read from an
 *   object.
 * summary:
 *   The function takes an object pointer in param_1 and calls send_two_word_pair_over_ch2
 *   eight times. Each call passes the object, a sequential 16-bit ID starting at 0x1402, a
 *   16-bit value read from the object at offsets 0x86 through 0x98, and a constant 1. The
 *   specific meaning of the IDs and the helper's role are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_eight_param_updates(int param_1)

{
  send_two_word_pair_over_ch2(param_1,0x1402,*(uint16_t *)(param_1 + 0x86),1);
  send_two_word_pair_over_ch2(param_1,0x1403,*(uint16_t *)(param_1 + 0x88),1);
  send_two_word_pair_over_ch2(param_1,0x1404,*(uint16_t *)(param_1 + 0x8a),1);
  send_two_word_pair_over_ch2(param_1,0x1405,*(uint16_t *)(param_1 + 0x8c),1);
  send_two_word_pair_over_ch2(param_1,0x1406,*(uint16_t *)(param_1 + 0x90),1);
  send_two_word_pair_over_ch2(param_1,0x1407,*(uint16_t *)(param_1 + 0x92),1);
  send_two_word_pair_over_ch2(param_1,0x1408,*(uint16_t *)(param_1 + 0x98),1);
  send_two_word_pair_over_ch2(param_1,0x1409,*(uint16_t *)(param_1 + 0x96),1);
  return;
}
