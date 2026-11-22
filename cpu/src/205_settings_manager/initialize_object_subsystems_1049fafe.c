/* @k10d initialize_object_subsystems_1049fafe @ 0x1049fafe
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling a sequence of setup routines and two virtual methods
 *   on embedded sub-objects.
 * summary:
 *   The function takes an object pointer (param_1) and calls six unnamed helper functions,
 *   passing the object or a derived pointer. It then invokes virtual slot 2 on two sub-
 *   objects located at offsets 0x50 and 0x69 within the main object, passing adjusted
 *   'this' pointers and a zero argument. Finally, it calls virtual slot 2 on a sub-object
 *   at offset 0x74. The pattern suggests a comprehensive initialization or reset sequence
 *   for a composite object with multiple embedded components.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_subsystems_1049fafe(cls_105b5c34 *param_1)

{
  populate_status_struct_via_virtual_calls((int)(param_1)/* B-3: stock r4 = param_1 */);
  register_event_handlers_1049ff3e((int)param_1);
  copy_stack_and_dispatch_virtual_calls((int)param_1);
  register_event_handlers_104a038a((int)param_1);
  populate_struct_from_virtual_table((int)param_1);
  compute_cumulative_offsets_104a0ffa(param_1);
  (((vtbl_entry*)(param_1->field_0x140))[2].fn)
            ((int)&param_1->field_0x13c + (int)((vtbl_entry*)(param_1->field_0x140))[2].adj,0);
  (((vtbl_entry*)(param_1->field_0x1a4))[2].fn)
            ((int)&param_1->field_0x1a0 + (int)((vtbl_entry*)(param_1->field_0x1a4))[2].adj,0);
  initialize_object_state_104a387c((cls_105b6554 *)&param_1->field_0x1d0);
  return;
}
