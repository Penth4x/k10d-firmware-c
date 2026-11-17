/* @k10d check_state_and_dispatch @ 0x000e7958
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks a state flag and conditionally sets a bit before calling two helper functions.
 * summary:
 *   The function first checks if the lower two bits of DAT_00000484 are not equal to 2. If
 *   this condition is met, it checks bit 7 of DAT_0003c021 and sets bit 0 of DAT_0000000d
 *   if that bit is set. It then unconditionally calls busy_wait_on_mode_flag with argument
 *   0x14 and infinite_loop_000e79ec. The specific roles of the data globals and callees are
 *   not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_state_and_dispatch(void)

{
  if ((DAT_00000484 & 3) != 2) {
    if ((DAT_0003c021 & 0x80) != 0) {
      DAT_0000000d = DAT_0000000d | 1;
    }
    busy_wait_on_mode_flag(0x14);
    infinite_loop_000e79ec();
  }
  return;
}
