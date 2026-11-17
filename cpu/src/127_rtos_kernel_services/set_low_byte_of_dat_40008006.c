/* @k10d set_low_byte_of_dat_40008006 @ 0x10452524
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_low_byte_of_dat_40008006(uint32_t param_1,ushort param_2)

{
  _DAT_40008006 = _DAT_40008006 & 0xfc00 | param_2;
  return;
}
