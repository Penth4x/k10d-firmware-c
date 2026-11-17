/* @k10d write_masked_value_to_mmio_10458556 @ 0x10458556
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_mmio_10458556(uint32_t param_1,uint param_2)

{
  _DAT_400a0018 = param_2 & 0x3ffffff0;
  return;
}
