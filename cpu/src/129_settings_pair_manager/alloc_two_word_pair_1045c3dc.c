/* @k10d alloc_two_word_pair_1045c3dc @ 0x1045c3dc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * alloc_two_word_pair_1045c3dc(uint32_t *param_1,uint32_t param_2,uint32_t param_3)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return param_1;
}
