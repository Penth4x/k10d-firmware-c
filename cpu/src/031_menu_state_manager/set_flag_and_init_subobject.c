/* @k10d set_flag_and_init_subobject @ 0x10370a9e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 031_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Sets a flag at offset 0x14 and initializes a sub-object at offset 0x40 via three helper
 *   calls.
 * summary:
 *   The function writes the value 1 to the 4-byte field at offset 0x14 of the object
 *   pointed to by param_1. It then calls call_helper_on_struct_field_1036c46c with no
 *   arguments, followed by compute_and_send_two_point_offsets_1038eab4 with a pointer to
 *   offset 0x40 of the object. Finally, it calls call_helper_on_struct_field_1036c41a
 *   passing the object pointer, the pointer to offset 0x40, and the integer 1. The specific
 *   roles of the callees and the object structure are not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_init_subobject(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x14) = 1;
  call_helper_on_struct_field_1036c46c();
  compute_and_send_two_point_offsets_1038eab4((cls_1055a090 *)((int)param_1 + 0x40));
  call_helper_on_struct_field_1036c41a(param_1,(cls_1055a090 *)((int)param_1 + 0x40),1);
  return;
}
