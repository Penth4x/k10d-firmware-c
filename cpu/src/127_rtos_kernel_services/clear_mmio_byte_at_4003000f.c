/* @k10d clear_mmio_byte_at_4003000f @ 0x1045264e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_mmio_byte_at_4003000f(uint32_t param_x0, uint32_t param_x1)

{
  DAT_4003000f = 0;
  return;
}
