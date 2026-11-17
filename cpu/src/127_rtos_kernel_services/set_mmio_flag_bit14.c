/* @k10d set_mmio_flag_bit14 @ 0x104583d2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_mmio_flag_bit14(uint32_t param_1,int param_2)

{
  if (param_2 == 0) {
    _DAT_400a0000 = 0;
  }
  else {
    _DAT_400a0000 = 0x4000;
  }
  return;
}
