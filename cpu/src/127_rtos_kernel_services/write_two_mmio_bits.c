/* @k10d write_two_mmio_bits @ 0x104528a6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_two_mmio_bits(uint32_t param_1,uint32_t param_2)

{
  _DAT_401c0106 = (ushort)((uint)param_2 >> 8) & 3;
  _DAT_401c0126 = (ushort)param_2 & 3;
  return;
}
