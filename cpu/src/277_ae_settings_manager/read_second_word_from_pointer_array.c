/* @k10d read_second_word_from_pointer_array @ 0x1051e542
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_second_word_from_pointer_array(int param_1,int param_2)

{
  return *(uint16_t *)(*(int *)(param_1 + 0xc + param_2 * 4) + 2);
}
