/* @k10d init_object_with_three_helpers_10370a68 @ 0x10370a68
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 031_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by zeroing a field and calling three helper functions on it.
 * summary:
 *   The function takes a pointer to an object, sets the 4-byte field at offset 0x14 to
 *   zero, then calls call_helper_on_struct_field_1036c46c with no arguments. It
 *   subsequently calls compute_and_send_two_channel_offsets with a pointer to the field at
 *   offset 0x18, and finally calls call_helper_on_struct_field_1036c41a with the object
 *   pointer, the offset 0x18 pointer, and the integer 1. The specific roles of the callees
 *   are unknown, so the operation is described mechanically as an initialization sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_three_helpers_10370a68(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x14) = 0;
  call_helper_on_struct_field_1036c46c();
  compute_and_send_two_channel_offsets((int)param_1 + 0x18);
  call_helper_on_struct_field_1036c41a(param_1,(void *)((int)param_1 + 0x18),1);
  return;
}
