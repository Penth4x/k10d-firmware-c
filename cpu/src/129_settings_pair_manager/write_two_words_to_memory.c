/* @k10d write_two_words_to_memory @ 0x1045c508
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_words_to_memory(uint32_t *param_1,uint32_t param_2,uint32_t param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}
