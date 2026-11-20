/* @k10d FUN_000f7078 @ 0x000f7078
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint16_t FUN_000f7078(void)

{
  poll_input_and_fill_buffer(0x82,0x11,(void *)&DAT_0003c13c,2);
  return _DAT_0003c13c;
}
