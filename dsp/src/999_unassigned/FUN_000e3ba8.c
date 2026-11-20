/* @k10d FUN_000e3ba8 @ 0x000e3ba8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e3ba8(void)

{
  if ((DAT_0003c3a7 == '\0') && ((DAT_0003c396 & 1) == 0)) {
    if ((DAT_0003c008 & 1) == 0) {
      DAT_0003c021 = DAT_0003c021 | 4;
    }
    toggle_state_bit_and_call_handler();
  }
  return;
}
