/* @k10d set_state_flag_by_char @ 0x000e1374
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets a small state byte and adjacent flags based on whether a global char is 'w'.
 * summary:
 *   Checks the byte at DAT_0003c129. If it equals 'w', it sets _DAT_0003c126 to 1.
 *   Otherwise, it sets bit 0 of DAT_0003c123, sets _DAT_0003c126 to 2, and sets
 *   DAT_0003c122 to 0x11. No MMIO or complex logic is present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_state_flag_by_char(void)

{
  if (DAT_0003c129 == 'w') {
    _DAT_0003c126 = 1;
  }
  else {
    DAT_0003c123 = DAT_0003c123 | 1;
    _DAT_0003c126 = 2;
    DAT_0003c122 = 0x11;
  }
  return;
}
