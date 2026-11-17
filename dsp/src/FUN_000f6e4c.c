/* @k10d FUN_000f6e4c @ 0x000f6e4c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint FUN_000f6e4c(void)

{
  if (((DAT_0003c128 & 0x40) != 0) && ((DAT_0003ce01 & 1) != 0)) {
    poll_keypad_with_retry(0x80,0x12);
  }
  return (DAT_0003c128 & 0x7f) >> 6;
}
