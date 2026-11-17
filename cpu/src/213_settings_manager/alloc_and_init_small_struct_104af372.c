/* @k10d alloc_and_init_small_struct_104af372 @ 0x104af372
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * alloc_and_init_small_struct_104af372(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(uint8_t *)(param_1 + 5) = 1;
    *(uint8_t *)((int)param_1 + 0x15) = 0;
    *(uint8_t *)((int)param_1 + 0x16) = 0;
  }
  return param_1;
}
