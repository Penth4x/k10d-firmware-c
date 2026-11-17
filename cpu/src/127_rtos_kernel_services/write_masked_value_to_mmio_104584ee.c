/* @k10d write_masked_value_to_mmio_104584ee @ 0x104584ee
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_mmio_104584ee(uint32_t param_1,ushort param_2)

{
  _DAT_400a0006 = param_2 & 0xff8;
  return;
}
