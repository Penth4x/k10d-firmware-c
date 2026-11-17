/* @k10d FUN_000f3046 @ 0x000f3046
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000f3046(uint32_t param_1)

{
  FUN_000f3072();
  bRam00000000 = bRam00000000 & 0xf7 | 2;
  wait_and_write_byte_000e0fec(param_1);
  configure_two_parameter_state(0,1);
  return;
}
