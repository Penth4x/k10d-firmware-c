/* @k10d set_state_and_flag_bit @ 0x000c459c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets a state variable to 4, sets bit 5 of a flag word, and calls a helper function.
 * summary:
 *   The function writes the value 4 to DAT_0003c492. It then modifies DAT_0003c588 by
 *   clearing bit 6 and setting bit 5 (mask 0xbf, set 0x20). Finally, it calls
 *   mask_low_six_bits. The specific roles of the data variables and the callee are not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_state_and_flag_bit(void)

{
  DAT_0003c492 = 4;
  DAT_0003c588 = DAT_0003c588 & 0xbf | 0x20;
  mask_low_six_bits();
  return;
}
