/* @k10d store_value_if_flag_is_one @ 0x103974ec
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a value into a struct field when a status flag equals 1, then calls an unknown
 *   helper.
 * summary:
 *   Checks if the first word of param_2 is 1. If so, writes param_2[1] into the field at
 *   offset 0x48 of the object pointed to by param_1. It then calls
 *   map_mode_code_to_index_103975a8 with no arguments. The specific subsystem or meaning of
 *   the flag and stored value is not determinable from the provided pseudocode and unknown
 *   callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_value_if_flag_is_one(cls_10563098 *param_1,int *param_2)

{
  if (*param_2 == 1) {
    param_1->field_0x48 = param_2[1];
    map_mode_code_to_index_103975a8(__frv_reg_unset(4));
  }
  return;
}
