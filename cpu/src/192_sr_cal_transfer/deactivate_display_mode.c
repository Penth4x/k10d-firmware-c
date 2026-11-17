/* @k10d deactivate_display_mode @ 0x1048f8ac
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 192_sr_cal_transfer (unit names are model-proposed)
 * purpose:
 *   Deactivates a display state by either toggling two sub-states or releasing associated
 *   resources based on a mode flag.
 * summary:
 *   Checks byte at offset 0x35 of the object. If set to 1, it calls
 *   set_high_bit_of_read_value and set_high_bit_of_field to get values and passes them to
 *   sr_cal_transfer with flags 1 and 0. Otherwise, it calls a sequence of functions
 *   (call_single_helper_with_param_104436e2, call_helper_with_zero_104436a0,
 *   dispatch_on_flag_param) on the pointer at offset 0xc, calls
 *   check_kernel_call_success_10459fea, and conditionally calls
 *   call_two_initializers_with_zero and call_subroutine_with_zero if
 *   read_display_controller_status_bits returns 0xc000. Finally, it clears the byte at
 *   offset 0x37.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void deactivate_display_mode(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  if (*(char *)(param_1 + 0x35) == '\x01') {
    uVar2 = set_high_bit_of_read_value(param_1);
    sr_cal_transfer(param_1,uVar2,1);
    uVar2 = set_high_bit_of_field(param_1);
    sr_cal_transfer(param_1,uVar2,0);
  }
  else {
    call_single_helper_with_param_104436e2(*(uint32_t *)(param_1 + 0xc));
    call_helper_with_zero_104436a0(*(uint32_t *)(param_1 + 0xc));
    dispatch_on_flag_param(*(void **)(param_1 + 0xc),0);
    check_kernel_call_success_10459fea();
    iVar1 = read_display_controller_status_bits(*(uint32_t *)(param_1 + 0x10));
    if (iVar1 == 0xc000) {
      call_two_initializers_with_zero(*(uint32_t *)(param_1 + 0x14));
      check_kernel_call_success_10459fea();
      call_subroutine_with_zero(*(uint32_t *)(param_1 + 0x10));
    }
  }
  *(uint8_t *)(param_1 + 0x37) = 0;
  return;
}
