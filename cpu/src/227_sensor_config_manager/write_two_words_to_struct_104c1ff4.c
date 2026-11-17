/* @k10d write_two_words_to_struct_104c1ff4 @ 0x104c1ff4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_words_to_struct_104c1ff4(int param_1,uint16_t param_2,uint16_t param_3)

{
  *(uint16_t *)(param_1 + 0x44) = param_2;
  *(uint16_t *)(param_1 + 0x46) = param_3;
  return;
}
