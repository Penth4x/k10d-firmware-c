/* @k10d init_object_with_three_calls_103934b2 @ 0x103934b2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling three consecutive setup functions with a derived
 *   parameter.
 * summary:
 *   The function retrieves a value from get_value_from_object and passes it to
 *   add_offset_to_pointer_104df392. It then obtains a value from
 *   return_r4_passthrough_104d800e, modifies it via adjust_pointer_by_flag with a constant
 *   argument of 1, and finally calls three functions (copy_four_values_to_struct,
 *   copy_four_words_from_source_10393586, copy_three_fields_to_offset) passing the original
 *   parameter and the modified value. The specific subsystem is not identifiable from the
 *   provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_three_calls_103934b2(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  uVar2 = return_r4_passthrough_104d800e();
  uVar2 = adjust_pointer_by_flag(uVar2,1);
  copy_four_values_to_struct(param_1,uVar2);
  copy_four_words_from_source_10393586(param_1,uVar2);
  copy_three_fields_to_offset(param_1,uVar2);
  return;
}
