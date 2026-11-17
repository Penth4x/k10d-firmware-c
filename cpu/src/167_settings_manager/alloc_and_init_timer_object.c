/* @k10d alloc_and_init_timer_object @ 0x10477206
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * alloc_and_init_timer_object(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x20), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    *(uint16_t *)(param_1 + 1) = 0;
    *(uint16_t *)((int)param_1 + 6) = 0;
    cls_105a5c2c_new_2(param_1 + 2,10000,0);
  }
  return param_1;
}
