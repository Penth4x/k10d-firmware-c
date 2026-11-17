/* @k10d init_object_with_offset_field_10366c8a @ 0x10366c8a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling three helpers on the object and its offset-0x20 field.
 * summary:
 *   Takes a pointer param_1 and calls call_helper_on_struct_field_1036c46c with no
 *   arguments, then compute_and_send_two_channel_values_1037cc36 with param_1+0x20, and
 *   finally call_helper_on_struct_field_1036c41a with param_1, param_1+0x20, and the
 *   constant 1. The pattern suggests setting up or linking a sub-structure at offset 0x20
 *   of the object. No camera-specific behavior is evident from the pseudocode or callee
 *   names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_offset_field_10366c8a(void *param_1)

{
  call_helper_on_struct_field_1036c46c();
  compute_and_send_two_channel_values_1037cc36((int)param_1 + 0x20);
  call_helper_on_struct_field_1036c41a(param_1,(void *)((int)param_1 + 0x20),1);
  return;
}
