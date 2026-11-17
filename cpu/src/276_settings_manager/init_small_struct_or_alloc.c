/* @k10d init_small_struct_or_alloc @ 0x1051d1a4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 276_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_small_struct_or_alloc(uint8_t *param_1)

{
  if ((param_1 != (uint8_t *)0x0) ||
     (param_1 = (uint8_t *)heap_alloc((void *)0x10), param_1 != (uint8_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 1;
    *(uint32_t *)(param_1 + 4) = 0;
    param_1[8] = 1;
    param_1[9] = 1;
    *(uint16_t *)(param_1 + 10) = 0;
    *(uint16_t *)(param_1 + 0xc) = 0;
  }
  return;
}
