/* @k10d initialize_object_subcomponents_10518232 @ 0x10518232
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Initializes multiple sub-objects and fields of a class instance by calling a series of
 *   helper functions.
 * summary:
 *   The function takes a pointer to an object (param_1) and performs initialization on
 *   various parts of it. It calls copy_string_to_heap_field on a sub-object at offset 0x50,
 *   invokes a function at 0x104a1998 with a pointer to offset 0x6d, calls
 *   initialize_object_state_104a387c on a sub-object at offset 0x79 (storing the result),
 *   and then calls six other functions (query_camera_property_table through
 *   compute_cumulative_offsets_10519cb4) passing the main object pointer. It returns the
 *   value obtained from initialize_object_state_104a387c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_subcomponents_10518232(int *param_1)

{
  uint32_t uVar1;
  
  copy_string_to_heap_field((int)(param_1 + 0x50));
  (*(code *)0x104a1998/*ROM*/)(param_1 + 0x6d,0);
  uVar1 = initialize_object_state_104a387c((int)(param_1 + 0x79));
  query_camera_property_table((int)param_1);
  populate_event_handler_table((int)param_1);
  populate_struct_with_virtual_queries((int)param_1);
  register_twelve_event_handlers((int)param_1);
  populate_struct_from_virtual_slots((int)param_1);
  compute_cumulative_offsets_10519cb4(param_1);
  return uVar1;
}
