/* @k10d write_three_values_to_target_104aa0a4 @ 0x104aa0a4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Writes three parameters to a target object via a helper function with indices 0, 1, and
 *   2.
 * summary:
 *   The function calls set_bitfield_in_table_entry three times, passing param_1 as the
 *   first argument and param_2, param_3, and param_4 as the third argument, with the second
 *   argument being 0, 1, and 2 respectively. This pattern suggests it is setting three
 *   distinct fields or values within a structure or object identified by param_1. The
 *   specific role of the target object is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_three_values_to_target_104aa0a4(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  set_bitfield_in_table_entry(param_1,0,param_2);
  set_bitfield_in_table_entry(param_1,1,param_3);
  set_bitfield_in_table_entry(param_1,2,param_4);
  return;
}
