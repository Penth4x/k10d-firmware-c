/* @k10d set_two_point_deltas @ 0x1045bf20
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Stores two coordinate values and their computed differences into a structure.
 * summary:
 *   The function calls four helper functions to write param_2 and param_3 into the first
 *   two fields of the structure pointed to by param_1. It then calculates the differences
 *   (param_4 - param_2) and (param_5 - param_3) and stores them in the next two fields via
 *   store_value_to_pointer_1045c510 and write_field_at_offset_four_1045c518. The specific
 *   meaning of the coordinates or deltas is not determinable from the provided pseudocode
 *   and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_point_deltas(uint32_t *param_1,int param_2,int param_3,int param_4,int param_5)

{
  store_word_to_pointer_1045bd48(param_1,param_2);
  write_field_at_offset_four_1045bd50(param_1,param_3);
  store_value_to_pointer_1045c510(param_1 + 2,param_4 - param_2);
  write_field_at_offset_four_1045c518(param_1 + 2,param_5 - param_3);
  return;
}
