/* @k10d reset_state_and_dispatch @ 0x000d433a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Clears several state flags and calls one of two handlers based on a 4-bit field.
 * summary:
 *   The function checks bit 7 of DAT_0003f282 to decide whether to copy DAT_0003cc6e or
 *   zero it into DAT_0003cc6f. It then clears DAT_0003cc6e, masks DAT_0003cbef to 0xf0, and
 *   zeros _DAT_0003ce82. Finally, it branches on the lower 4 bits of DAT_0003cf0e to call
 *   either poll_status_and_dispatch_event or compare_two_16bit_values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void reset_state_and_dispatch(void)

{
  if ((DAT_0003f282 & 0x80) == 0) {
    DAT_0003cc6f = DAT_0003cc6e;
  }
  else {
    DAT_0003cc6f = 0;
  }
  DAT_0003cc6e = 0;
  DAT_0003cbef = DAT_0003cbef & 0xf0;
  _DAT_0003ce82 = 0;
  if ((DAT_0003cf0e & 0xf) == 0) {
    poll_status_and_dispatch_event();
  }
  else {
    compare_two_16bit_values(__frv_reg_unset(4));
  }
  return;
}
