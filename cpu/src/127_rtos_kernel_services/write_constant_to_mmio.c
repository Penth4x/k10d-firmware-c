/* @k10d write_constant_to_mmio @ 0x10452580
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_constant_to_mmio(uint32_t param_x0)

{
  _DAT_400a0032 = 0x8000;
  return;
}
