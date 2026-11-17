/* @k10d set_bit_14_of_dat_400a0020 @ 0x10458466
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bit_14_of_dat_400a0020(uint32_t param_1,int param_2)

{
  if (param_2 == 0) {
    _DAT_400a0020 = _DAT_400a0020 & 0xbfff;
  }
  else {
    _DAT_400a0020 = _DAT_400a0020 | 0x4000;
  }
  return;
}
