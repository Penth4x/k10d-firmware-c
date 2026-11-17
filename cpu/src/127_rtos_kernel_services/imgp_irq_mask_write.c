/* @k10d imgp_irq_mask_write @ 0x1045210e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void imgp_irq_mask_write(uint32_t param_1,ushort param_2)

{
  _DAT_4000c210 = param_2 & 0x9800;
  return;
}
