/* @k10d init_object_with_flag_and_callbacks @ 0x10365cfa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 006_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Sets a flag at offset 0x14 and initializes an object by calling three helper functions
 *   with derived pointers.
 * summary:
 *   The function writes the value 1 to the 4-byte field at offset 0x14 of the object
 *   pointed to by param_1. It then calls call_helper_on_struct_field_1036c46c with no
 *   arguments, compute_and_send_two_point_offsets_1037aecc with a pointer to offset 0x40 of
 *   the object, and call_helper_on_struct_field_1036c41a with the object pointer, the
 *   offset 0x40 pointer, and the integer 1. The callees are not named, so the specific
 *   subsystem role is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_flag_and_callbacks(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x14) = 1;
  call_helper_on_struct_field_1036c46c();
  compute_and_send_two_point_offsets_1037aecc((cls_10558990 *)((int)param_1 + 0x40));
  call_helper_on_struct_field_1036c41a(param_1,(cls_10558990 *)((int)param_1 + 0x40),1);
  return;
}
