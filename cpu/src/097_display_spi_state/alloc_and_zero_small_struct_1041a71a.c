/* @k10d alloc_and_zero_small_struct_1041a71a @ 0x1041a71a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_small_struct_1041a71a(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    *(uint8_t *)(param_1 + 1) = 0;
    *(uint8_t *)((int)param_1 + 5) = 0;
  }
  return;
}
