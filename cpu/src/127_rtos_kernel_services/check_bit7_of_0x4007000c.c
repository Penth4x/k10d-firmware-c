/* @k10d check_bit7_of_0x4007000c @ 0x104529ca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_bit7_of_0x4007000c(uint32_t param_x0)

{
  return (_DAT_4007000c & 0x80) != 0;
}
