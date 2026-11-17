/* @k10d alloc_and_zero_two_words_1045c3bc @ 0x1045c3bc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void alloc_and_zero_two_words_1045c3bc(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}
