/* @k10d init_object_with_timer_and_vcalls_1049e204 @ 0x1049e204
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets a 45000 field, calls six init helpers, and invokes two virtual methods on embedded
 *   objects.
 * summary:
 *   Writes the constant 45000 to offset 0x93 of the object. Calls six unnamed helper
 *   functions (init_object_with_virtual_queries through
 *   compute_cumulative_offsets_1049f3fe) passing the object pointer. Performs two virtual
 *   calls (slot 2) on objects at offsets 0x52 and 0x6b with adjusted this pointers, then
 *   calls a virtual method on an object at offset 0x77. The 45000 value could be a timer or
 *   threshold, but the specific subsystem is not determinable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_timer_and_vcalls_1049e204(cls_105b5b6c *param_1)

{
  param_1->field_0x24c = 45000;
  init_object_with_virtual_queries(__frv_reg_unset(4));
  send_twenty_six_virtual_commands((int)param_1);
  init_object_with_stack_copy_and_vcall((int)param_1);
  copy_stack_and_query_six_ids_1049ea1e((int)param_1);
  copy_virtual_values_to_buffer_1049eb18((int)param_1);
  compute_cumulative_offsets_1049f3fe(param_1);
  (((vtbl_entry*)(param_1->field_0x148))[2].fn)
            ((int)&param_1->field_0x144 + (int)((vtbl_entry*)(param_1->field_0x148))[2].adj,0);
  (((vtbl_entry*)(param_1->field_0x1ac))[2].fn)
            ((int)&param_1->field_0x1a8 + (int)((vtbl_entry*)(param_1->field_0x1ac))[2].adj,0);
  initialize_object_state_104a387c((cls_105b6554 *)&param_1->field_0x1dc);
  return;
}
