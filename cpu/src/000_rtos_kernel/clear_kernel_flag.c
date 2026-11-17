/* @k10d clear_kernel_flag @ 0x1000d358
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_kernel_flag(void)

{
  _DAT_6a003aa4 = 0;
  return;
}
