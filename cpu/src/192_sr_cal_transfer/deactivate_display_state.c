/* @k10d deactivate_display_state @ 0x1048f8ac
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 192_sr_cal_transfer (unit names are model-proposed)
 * purpose:
 *   Turns off display output by clearing state flags and calling subsystem shutdown
 *   routines based on a mode byte.
 * summary:
 *   Checks byte at offset 0x35 of the state object. If set, calls two getters and a setter
 *   (sr_cal_transfer) with values 1 and 0. Otherwise, calls a series of functions on
 *   pointers at offsets 0xc and 0x10, including a check for value 0xc000. Finally, clears
 *   the byte at offset 0x37. Called by display_off_locked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void deactivate_display_state(int param_1)

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
    call_single_helper_with_param_104436e2((void *)(*(uint32_t *)(param_1 + 0xc)));
    call_helper_with_zero_104436a0((void *)(*(uint32_t *)(param_1 + 0xc)));
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
