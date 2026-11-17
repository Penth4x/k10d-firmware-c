/* @k10d init_object_state_and_callers @ 0x1048fe18
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 193_sr_state_machine (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling four helper functions and setting two byte fields at
 *   offsets 0x34 and 0x35.
 * summary:
 *   The function takes a pointer to an object (param_1) and calls
 *   set_display_layer_b_frame_1048f96e and write_param_to_object_offset_0x14 with the
 *   object and additional parameters. It then dereferences pointers stored at offsets 0x10
 *   and 0x14 of the object and passes them to write_fixed_values_to_register_block and
 *   call_helper_with_0xc000_104453e6 respectively. Finally, it sets the byte at offset 0x35
 *   to 3 and the byte at offset 0x34 to 0. The specific subsystem is not identifiable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_state_and_callers(int param_1,uint32_t param_2,uint32_t param_3)

{
  set_display_layer_b_frame_1048f96e(param_1);
  write_param_to_object_offset_0x14(param_1,param_3);
  write_fixed_values_to_register_block(*(uint32_t *)(param_1 + 0x10));
  call_helper_with_0xc000_104453e6(*(uint32_t *)(param_1 + 0x14));
  *(uint8_t *)(param_1 + 0x35) = 3;
  *(uint8_t *)(param_1 + 0x34) = 0;
  return;
}
