/* @k10d init_struct_with_three_calls @ 0x10367ba6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 009_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a struct by zeroing a field and calling three helper functions on its
 *   members.
 * summary:
 *   The function takes a pointer to a structure, sets the 4-byte field at offset 0x14 to
 *   zero, then calls call_helper_on_struct_field_1036c46c with no arguments. It
 *   subsequently calls compute_and_send_two_value_pairs_1037f606 with the address of the
 *   field at offset 0x18, and finally calls call_helper_on_struct_field_1036c41a with the
 *   struct pointer, the address of the field at offset 0x18, and the integer 1. The
 *   specific roles of the callees and the struct are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_with_three_calls(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x14) = 0;
  call_helper_on_struct_field_1036c46c();
  compute_and_send_two_value_pairs_1037f606((int)param_1 + 0x18);
  call_helper_on_struct_field_1036c41a(param_1,(void *)((int)param_1 + 0x18),1);
  return;
}
