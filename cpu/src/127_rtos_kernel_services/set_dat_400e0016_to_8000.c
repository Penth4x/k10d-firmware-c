/* @k10d set_dat_400e0016_to_8000 @ 0x10452990
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes the constant 0x8000 to the global DAT_400e0016.
 * summary:
 *   The function performs a single store of 0x8000 to DAT_400e0016 and returns. It has no
 *   callees and no other side effects. The role of DAT_400e0016 is not determinable from
 *   the provided pseudocode or brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_dat_400e0016_to_8000(uint32_t param_x0)

{
  _DAT_400e0016 = 0x8000;
  return;
}
