/* @k10d call_helper_and_set_byte_flag @ 0x104b77d0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 221_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_and_set_byte_flag(int *param_1,uint16_t param_2,uint16_t param_3)

{
  write_two_words_to_struct_1048ec0a(*param_1,param_2,param_3);
  *(uint8_t *)((int)param_1 + 9) = 1;
  return;
}
