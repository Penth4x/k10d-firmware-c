/* @k10d write_byte_to_mmio_4003000e @ 0x10452630
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_to_mmio_4003000e(uint32_t param_1,uint8_t param_2)

{
  DAT_4003000e = param_2;
  return;
}
