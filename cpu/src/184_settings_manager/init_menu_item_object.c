/* @k10d init_menu_item_object @ 0x10488ac6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls six helper functions sequentially on the object pointer and returns it.
 * summary:
 *   The function takes a single object pointer (param_1) and passes it to five distinct
 *   callee functions in a fixed order: set_byte_at_offset_0x4f (with a second argument of
 *   0), set_two_fields_to_four, enable_display_output, clear_flag_at_offset_0x4c_10488f62,
 *   clear_byte_at_offset_0x4d_10488f82, and classic_menu_item_render. It then returns the
 *   original pointer. This pattern is typical of an initialization or setup routine for a
 *   class instance, where each helper configures a specific subsystem or field of the
 *   object. The function is identified as virtual method slot 3 of class cls_105b34ec.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b34ec * init_menu_item_object(cls_105b34ec *param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4)
{
  set_byte_at_offset_0x4f(param_1,0);
  set_two_fields_to_four((int)param_1);
  enable_display_output(param_1);
  clear_flag_at_offset_0x4c_10488f62(param_1);
  clear_byte_at_offset_0x4d_10488f82(param_1);
  classic_menu_item_render(param_1,(uint32_t)param_2,(uint32_t)param_3,(void *)(uint32_t)param_4);
  return param_1;
}
