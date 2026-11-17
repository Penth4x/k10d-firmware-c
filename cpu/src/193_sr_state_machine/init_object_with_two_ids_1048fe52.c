/* @k10d init_object_with_two_ids_1048fe52 @ 0x1048fe52
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 193_sr_state_machine (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling four setup functions and setting two byte fields.
 * summary:
 *   The function takes a pointer to an object and two additional parameters. It calls
 *   set_display_layer_b_frame_1048f96e and write_param_to_object_offset_0x14 with the
 *   object pointer, then calls write_fixed_register_values_10445f42 and
 *   call_helper_with_0x4000_104453da with values from offsets 0x10 and 0x14 of the object.
 *   Finally, it sets the byte at offset 0x35 to 2 and the byte at offset 0x34 to 0. The
 *   specific roles of the callees and the object structure are not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_1048fe52(int param_1,uint32_t param_2,uint32_t param_3)

{
  set_display_layer_b_frame_1048f96e(param_1);
  write_param_to_object_offset_0x14(param_1,param_3);
  write_fixed_register_values_10445f42(*(uint32_t *)(param_1 + 0x10));
  call_helper_with_0x4000_104453da(*(uint32_t *)(param_1 + 0x14));
  *(uint8_t *)(param_1 + 0x35) = 2;
  *(uint8_t *)(param_1 + 0x34) = 0;
  return;
}
