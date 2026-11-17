/* @k10d write_low_byte_to_mmio @ 0x104524d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_low_byte_to_mmio(uint32_t param_1,ushort param_2)

{
  _DAT_40000006 = _DAT_40000006 & 0xfc00 | param_2;
  return;
}
