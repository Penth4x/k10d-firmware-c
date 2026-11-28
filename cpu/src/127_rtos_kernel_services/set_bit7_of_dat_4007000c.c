/* @k10d set_bit7_of_dat_4007000c @ 0x104529de
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bit7_of_dat_4007000c(uint32_t unused_arg)

{
  /* OR bit 7 (0x80) into the 16-bit register at 0x4007000c;
   * the caller-supplied argument is never used (address is hardcoded). */
  _DAT_4007000c = _DAT_4007000c | 0x80;
  return;
}
