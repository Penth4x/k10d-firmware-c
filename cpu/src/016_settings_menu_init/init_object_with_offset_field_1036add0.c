/* @k10d init_object_with_offset_field_1036add0 @ 0x1036add0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 016_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling three helpers on the object and its field at offset
 *   0x14.
 * summary:
 *   The function takes a pointer param_1 and calls call_helper_on_struct_field_1036c46c
 *   with no arguments. It then calls compute_and_send_two_channel_values_10387d3a with the
 *   address of the field at offset 0x14 in param_1. Finally, it calls
 *   call_helper_on_struct_field_1036c41a with param_1, the address of the field at offset
 *   0x14, and the integer 1. The specific roles of the callees are unknown, but the pattern
 *   suggests initializing or configuring an object and a specific member within it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_offset_field_1036add0(void *param_1)

{
  call_helper_on_struct_field_1036c46c();
  compute_and_send_two_channel_values_10387d3a((int)param_1 + 0x14);
  call_helper_on_struct_field_1036c41a(param_1,(void *)((int)param_1 + 0x14),1);
  return;
}
