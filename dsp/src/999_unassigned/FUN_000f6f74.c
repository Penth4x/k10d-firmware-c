/* @k10d FUN_000f6f74 @ 0x000f6f74
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool FUN_000f6f74(uint32_t param_x0)

{
  check_and_update_byte_flag();
  return (DAT_0003c12e & 0x10) == 0;
}
