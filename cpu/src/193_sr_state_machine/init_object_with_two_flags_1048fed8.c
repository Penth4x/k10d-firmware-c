/* @k10d init_object_with_two_flags_1048fed8 @ 0x1048fed8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 193_sr_state_machine (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling five helpers on its fields and setting two byte flags
 *   to 1.
 * summary:
 *   The function takes a pointer to an object (param_1) and calls
 *   call_single_helper_with_param_104436e2 on the value at offset 0xc,
 *   set_display_layer_b_frame_1048f96e on the object itself,
 *   write_param_to_object_offset_0x14 with the object and param_3,
 *   write_thirty_two_config_values on the value at offset 0x10, and
 *   call_subroutine_with_0x8000 on the value at offset 0x14. It then sets the bytes at
 *   offsets 0x34 and 0x35 to 1. The specific roles of the callees and the object are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_flags_1048fed8(int param_1,uint32_t param_2,uint32_t param_3)

{
  call_single_helper_with_param_104436e2((void *)(*(uint32_t *)(param_1 + 0xc)));
  set_display_layer_b_frame_1048f96e(param_1);
  write_param_to_object_offset_0x14(param_1,param_3);
  write_thirty_two_config_values(*(uint32_t *)(param_1 + 0x10));
  call_subroutine_with_0x8000(*(uint32_t *)(param_1 + 0x14));
  *(uint8_t *)(param_1 + 0x35) = 1;
  *(uint8_t *)(param_1 + 0x34) = 1;
  return;
}
