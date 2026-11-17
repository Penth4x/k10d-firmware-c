/* @k10d call_helper_and_set_flag_104b7744 @ 0x104b7744
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 220_shutter_trigger (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_and_set_flag_104b7744(uint32_t *param_1,uint16_t param_2,uint16_t param_3)

{
  write_two_words_to_struct_1048ef2a((void *)*param_1,param_2,param_3);
  *(uint8_t *)((int)param_1 + 9) = 1;
  return;
}
