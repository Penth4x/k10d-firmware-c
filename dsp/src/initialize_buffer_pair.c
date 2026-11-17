/* @k10d initialize_buffer_pair @ 0x000e9e8a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Initializes a buffer and conditionally initializes a second buffer based on a status
 *   check.
 * summary:
 *   Calls advance_seven_state_counter, then initializes a buffer at SUB_0003ec00 with size
 *   0x400 via copy_words_via_callback. Checks a status via toggle_bit7_based_on_flag; if
 *   non-zero, initializes a second buffer at DAT_0003f580 using parameters from
 *   DAT_0003f512 and DAT_0003f515. Finally calls count_short_sentinel_values and
 *   compute_sixteen_byte_table.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_buffer_pair(void)

{
  int iVar1;
  
  advance_seven_state_counter();
  copy_words_via_callback(0,(void *)&SUB_0003ec00,0x400);
  iVar1 = toggle_bit7_based_on_flag();
  if (iVar1 == 0) {
    _DAT_0003f514 = 0;
  }
  else {
    copy_words_via_callback(_DAT_0003f512,(void *)&DAT_0003f580,DAT_0003f515);
  }
  count_short_sentinel_values(0,(void *)&SUB_0003ec00,0x400);
  compute_sixteen_byte_table();
  return;
}
