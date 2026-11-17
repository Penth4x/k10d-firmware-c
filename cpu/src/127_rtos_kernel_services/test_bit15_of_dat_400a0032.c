/* @k10d test_bit15_of_dat_400a0032 @ 0x1045256a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_bit15_of_dat_400a0032(uint32_t param_x0)

{
  return (_DAT_400a0032 & 0x8000) != 0;
}
