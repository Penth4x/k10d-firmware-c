/* @k10d FUN_000f7164 @ 0x000f7164
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f7164(void)

{
  if ((DAT_0003c128 & 0x40) != 0) {
    if ((DAT_0003ce01 & 1) != 0) {
      process_status_update(1);
    }
    if ((DAT_0003ce01 & 1) == 0) {
      FUN_000f7078();
    }
    else {
      poll_input_and_fill_buffer(0x82,0x15,(void *)&DAT_0003c13c,2);
    }
    _DAT_0003ce1c = _DAT_0003c13c;
  }
  return;
}
