/* @k10d copy_word_array_1045cd06 @ 0x1045cd06
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 130_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_word_array_1045cd06(void *param_1,uint32_t *param_2,uint32_t *param_3,uint32_t *param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *param_4 = *param_2;
    param_4 = param_4 + 1;
  }
  return;
}
