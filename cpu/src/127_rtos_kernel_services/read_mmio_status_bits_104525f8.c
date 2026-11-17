/* @k10d read_mmio_status_bits_104525f8 @ 0x104525f8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_mmio_status_bits_104525f8(uint32_t param_x0)

{
  return _DAT_40030402 & 0xbc;
}
