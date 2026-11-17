/* @k10d write_two_words_to_struct_1048ec0a @ 0x1048ec0a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_words_to_struct_1048ec0a(int param_1,uint16_t param_2,uint16_t param_3)

{
  *(uint16_t *)(param_1 + 0x24) = param_2;
  *(uint16_t *)(param_1 + 0x26) = param_3;
  return;
}
