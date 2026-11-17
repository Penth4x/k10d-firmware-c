/* @k10d write_shifted_value_to_mmio_10452452 @ 0x10452452
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_shifted_value_to_mmio_10452452(uint32_t param_1,ushort param_2)

{
  _DAT_40000006 = (param_2 & 0xfc) << 8;
  return;
}
