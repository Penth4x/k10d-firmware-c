/* @k10d zero_four_words_and_maybe_free @ 0x104ad2ac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_four_words_and_maybe_free(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
