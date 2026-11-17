/* @k10d write_two_words_to_struct_104bc2b8 @ 0x104bc2b8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_words_to_struct_104bc2b8(int param_1,uint16_t param_2,uint16_t param_3)

{
  *(uint16_t *)(param_1 + 0x28) = param_2;
  *(uint16_t *)(param_1 + 0x2a) = param_3;
  return;
}
