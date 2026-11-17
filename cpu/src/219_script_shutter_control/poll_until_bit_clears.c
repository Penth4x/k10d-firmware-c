/* @k10d poll_until_bit_clears @ 0x104b7014
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * purpose:
 *   Polls a status bit in a value returned by read_state_at_offset_16 until it is cleared,
 *   calling script_dispatcher each iteration.
 * summary:
 *   The function loops, calling script_dispatcher(param_1, 0, 1) on each pass. It then
 *   checks if param_2 is 0x10 and param_3 is 5; if so, it calls
 *   read_state_at_offset_16(*param_1), shifts the result right by 11, and masks bit 0. The
 *   loop continues while this bit is set. If the condition on param_2/param_3 is not met,
 *   the loop exits immediately after the first iteration. Returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_until_bit_clears(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  do {
    script_dispatcher(param_1,0,1);
    uVar1 = 0;
    if ((param_2 == 0x10) && (param_3 == 5)) {
      uVar1 = read_state_at_offset_16(*param_1);
      uVar1 = uVar1 >> 0xb & 1;
    }
  } while (uVar1 != 0);
  return 1;
}
