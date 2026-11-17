/* @k10d write_two_register_values @ 0x104124be
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Writes two consecutive register values (0x140d and 0x140e) via a helper, selecting
 *   values based on a flag.
 * summary:
 *   The function calls send_two_word_pair_over_ch2 twice. First, it writes to register
 *   0x140d with either 0 or 0x4924 depending on param_2. Second, it writes to register
 *   0x140e with either 0 or 0x924. The helper send_two_word_pair_over_ch2 is used for both
 *   writes, suggesting it is a generic register write or command dispatch function. The
 *   specific register addresses and values do not clearly map to a known camera subsystem
 *   without more context on send_two_word_pair_over_ch2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_register_values(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    send_two_word_pair_over_ch2(param_1,0x140d,0,1);
    uVar1 = 0;
  }
  else {
    send_two_word_pair_over_ch2(param_1,0x140d,0x4924, __frv_reg_unset(7));
    uVar1 = 0x924;
  }
  send_two_word_pair_over_ch2(param_1,0x140e,uVar1,1);
  return;
}
