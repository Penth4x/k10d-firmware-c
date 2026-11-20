/* @k10d FUN_000dafe6 @ 0x000dafe6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000dafe6(void)

{
  if (((DAT_0003c198 & 1) != 0) && ((DAT_0003c4de & 0x10) != 0)) {
    build_status_word_and_dispatch();
  }
  return;
}
