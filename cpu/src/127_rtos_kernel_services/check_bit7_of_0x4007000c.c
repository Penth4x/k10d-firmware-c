/* @k10d check_bit7_of_0x4007000c @ 0x104529ca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_bit7_of_0x4007000c(uint32_t unused)

{
  /* Read the halfword at 0x4007000c and test bit 7 (0x80).
   * The first argument is passed by the caller but never read here. */
  return (_DAT_4007000c & 0x80) != 0;
}
