/* @k10d activate_sr_mode_state @ 0x1048fe8c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 193_sr_state_machine (unit names are model-proposed)
 * purpose:
 *   Initializes object fields and calls five setup routines to activate the Shake Reduction
 *   mode.
 * summary:
 *   The function takes an object pointer and calls call_single_helper_with_param_104436e2,
 *   set_display_layer_b_frame_1048f96e, write_param_to_object_offset_0x14,
 *   write_fixed_register_values_10446024, and call_subroutine_with_0x8000, passing various
 *   fields from the object (at offsets 0xc, 0x10, 0x14) and the third parameter. It then
 *   sets byte flags at offsets 0x34 and 0x35 to 0 and 1 respectively. The prior analysis
 *   note suggests this is the SR (Shake Reduction) active path, which aligns with the
 *   initialization pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void activate_sr_mode_state(int param_1,uint32_t param_2,uint32_t param_3)

{
  call_single_helper_with_param_104436e2((void *)(*(uint32_t *)(param_1 + 0xc)));
  set_display_layer_b_frame_1048f96e(param_1);
  write_param_to_object_offset_0x14(param_1,param_3);
  write_fixed_register_values_10446024(*(uint32_t *)(param_1 + 0x10));
  call_subroutine_with_0x8000(*(uint32_t *)(param_1 + 0x14));
  *(uint8_t *)(param_1 + 0x35) = 1;
  *(uint8_t *)(param_1 + 0x34) = 0;
  return;
}
