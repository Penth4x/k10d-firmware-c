/* @k10d set_state_and_init_subobject @ 0x10365032
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Sets a state field to 3 and initializes a sub-object at offset 0x1dc via three helper
 *   calls.
 * summary:
 *   Writes the constant 3 to the field at offset 0x204 of the object passed in param_1.
 *   Calls call_helper_on_struct_field_1036c46c with no arguments, then calls
 *   compute_and_store_pair_deltas and call_helper_on_struct_field_1036c41a using a pointer
 *   to offset 0x1dc of the object. The specific roles of the callees and the object are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_state_and_init_subobject(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x204) = 3;
  call_helper_on_struct_field_1036c46c();
  compute_and_store_pair_deltas((int)param_1 + 0x1dc);
  call_helper_on_struct_field_1036c41a(param_1,(void *)((int)param_1 + 0x1dc),1);
  return;
}
