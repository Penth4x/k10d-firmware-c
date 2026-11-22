/* @k10d init_object_with_timer_and_vcalls_1049cca8 @ 0x1049cca8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets a 45000ms field, calls six init helpers, and invokes virtual slot 2 on two
 *   embedded objects.
 * summary:
 *   Writes 45000 to offset 0x93 of the object. Calls
 *   init_object_with_virtual_calls_1049ce4c and five other functions passing the object
 *   pointer. Performs virtual calls to slot 2 on objects at offsets 0x52 and 0x6b with
 *   adjusted this pointers. Finally calls initialize_object_state_104a387c on a sub-object
 *   at offset 0x77.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_timer_and_vcalls_1049cca8(cls_105b5b0c *param_1)

{
  param_1->field_0x24c = 45000;
  init_object_with_virtual_calls_1049ce4c((int)(param_1)/* B-3: stock r4 = param_1 */);
  register_event_handlers_1049d09e((int)param_1);
  init_object_with_virtual_calls_1049d4d8((int)param_1);
  copy_stack_and_query_six_ids_1049d54e((int)param_1);
  copy_virtual_values_to_buffer_1049d648((int)param_1);
  compute_cumulative_offsets_1049df2e(param_1);
  (((vtbl_entry*)(param_1->field_0x148))[2].fn)
            ((int)&param_1->field_0x144 + (int)((vtbl_entry*)(param_1->field_0x148))[2].adj,0);
  (((vtbl_entry*)(param_1->field_0x1ac))[2].fn)
            ((int)&param_1->field_0x1a8 + (int)((vtbl_entry*)(param_1->field_0x1ac))[2].adj,0);
  initialize_object_state_104a387c((cls_105b6554 *)&param_1->field_0x1dc);
  return;
}
