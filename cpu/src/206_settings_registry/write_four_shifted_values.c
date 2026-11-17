/* @k10d write_four_shifted_values @ 0x104a5e74
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_four_shifted_values(int param_1,int param_2)

{
  write_word_to_dynamic_array(param_2,0,*(short *)(*(int *)(param_1 + 0x60) + 8) << 5);
  write_word_to_dynamic_array(param_2,1,*(short *)(*(int *)(param_1 + 0x60) + 10) << 5);
  write_word_to_dynamic_array(param_2,2,*(short *)(*(int *)(param_1 + 0x60) + 0xc) << 5);
  write_word_to_dynamic_array(param_2,3,*(short *)(*(int *)(param_1 + 0x60) + 0xe) << 5);
  return;
}
