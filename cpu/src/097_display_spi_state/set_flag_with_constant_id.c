/* @k10d set_flag_with_constant_id @ 0x104100ea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Sets a flag to 0 or 2 based on param_2 and passes it to a helper with a fixed ID.
 * summary:
 *   The function computes a value (0 if param_2 is 0, otherwise 2) and calls
 *   send_two_word_pair_over_ch2 with param_1, the constant 0x1428, the computed value, and
 *   1. It acts as a wrapper to set a specific state or flag identified by 0x1428.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_with_constant_id(cls_1059be70 *param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 2;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  send_two_word_pair_over_ch2((uint32_t)param_1,0x1428,uVar1,1);
  return;
}
