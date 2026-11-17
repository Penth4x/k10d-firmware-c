/* @k10d update_status_flags_000e62f4 @ 0x000e62f4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Conditionally sets and clears bits in several global status variables based on current
 *   flag states.
 * summary:
 *   The function checks combinations of bits in DAT_0003c066, DAT_0003c32c, DAT_0003c067,
 *   and DAT_0003c075 to potentially set bit 4 of DAT_0003c066. It then checks DAT_0003c392
 *   and DAT_00000001 to decide whether to call check_and_clear_state_flags_000ce88c and
 *   clear specific bits in DAT_0003c330, DAT_0003c038, and DAT_0003c06e. The role of the
 *   specific flags and the called function is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flags_000e62f4(void)

{
  if ((((DAT_0003c066 & 1) == 0) && ((DAT_0003c32c & 2) != 0)) && ((DAT_0003c067 & 2) == 0)) {
    if ((((DAT_0003c075 & 0xf) != 4) && ((DAT_0003c067 & 0x10) == 0)) && ((DAT_0003c075 & 0xf) != 0)
       ) {
      DAT_0003c066 = DAT_0003c066 | 0x10;
    }
  }
  if (((DAT_0003c392 != '\x02') && (DAT_0003c392 != '\x03')) ||
     (((DAT_00000001 & 4) != 0 || ((DAT_0003c066 & 1) == 0)))) {
    if ((DAT_00000001 & 4) != 0) {
      check_and_clear_state_flags_000ce88c();
    }
    DAT_0003c330 = DAT_0003c330 & 0x88;
    DAT_0003c038 = DAT_0003c038 & 0xfb;
    DAT_0003c06e = 0;
  }
  return;
}
