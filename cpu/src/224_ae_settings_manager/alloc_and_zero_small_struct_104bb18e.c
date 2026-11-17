/* @k10d alloc_and_zero_small_struct_104bb18e @ 0x104bb18e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_small_struct_104bb18e(uint16_t *param_1)

{
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)10), param_1 != (uint16_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(uint8_t *)(param_1 + 2) = 0;
    *(uint8_t *)((int)param_1 + 5) = 0;
    *(uint8_t *)(param_1 + 3) = 0;
    *(uint8_t *)((int)param_1 + 7) = 0;
    *(uint8_t *)(param_1 + 4) = 0;
  }
  return;
}
