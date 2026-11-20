/* @k10d initialize_object_with_four_helpers_10489112 @ 0x10489112
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls four helper functions on the object pointer and returns the pointer.
 * summary:
 *   The function takes an object pointer (param_1) and sequentially calls four other
 *   functions (set_two_fields_to_four, enable_display_output,
 *   clear_flag_at_offset_0x50_104894f6, sibling_item_register) passing the same pointer to
 *   each. It then returns the original pointer. This pattern is typical of an
 *   initialization or setup routine for an object, where each helper configures a different
 *   aspect of the object's state. The function is virtual slot 3 of class cls_105b3658.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int initialize_object_with_four_helpers_10489112(cls_105b3658 *param_1)

{
  set_two_fields_to_four((int)param_1);
  enable_display_output(param_1);
  clear_flag_at_offset_0x50_104894f6(param_1);
  sibling_item_register((void *)param_1,__frv_reg_unset(5),__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  return (int)param_1;
}
