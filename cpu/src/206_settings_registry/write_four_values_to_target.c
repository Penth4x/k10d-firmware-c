/* @k10d write_four_values_to_target @ 0x104a5e0e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_four_values_to_target(int param_1,int param_2)

{
  write_word_to_dynamic_array(param_2,0,*(uint16_t *)(*(int *)(param_1 + 0x58) + 0x4dc));
  write_word_to_dynamic_array(param_2,1,*(uint16_t *)(*(int *)(param_1 + 0x58) + 0x4de));
  write_word_to_dynamic_array(param_2,2,*(uint16_t *)(*(int *)(param_1 + 0x58) + 0x4e0));
  write_word_to_dynamic_array(param_2,3,*(uint16_t *)(*(int *)(param_1 + 0x58) + 0x4e2));
  return;
}
