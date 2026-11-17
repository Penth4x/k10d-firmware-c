/* @k10d write_word_to_struct_array @ 0x1046c7c0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 152_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_word_to_struct_array(int param_1,uint32_t param_2,int param_3)

{
  *(uint32_t *)(param_1 + 8 + param_3 * 4) = param_2;
  return;
}
