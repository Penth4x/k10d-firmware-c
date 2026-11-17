/* @k10d process_mode_transition_request @ 0x000e65e4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks state flags and executes a sequence of cleanup and initialization routines if a
 *   transition condition is met.
 * summary:
 *   The function evaluates bits in DAT_0003c331 and DAT_0003c075 to determine if a state
 *   change is required. If the condition is met, it clears a flag in DAT_0003c331 and calls
 *   call_subroutine_with_arg_9 if DAT_0003c00f bit 6 is clear. It then performs a series of
 *   operations including calling set_flag_and_call_helper_000db7a8, call_d5642_with_100,
 *   clear_bit1_of_dat_0003ce01, set_flag_and_call_helper_000d014c, and
 *   call_subroutine_with_0x40, while setting and clearing various bits in DAT_0003c214,
 *   DAT_0003c066, DAT_0003c07e, and DAT_00000002. It also calls initialize_state_block with
 *   an argument of 1000, run_timed_polling_loop, run_five_iteration_state_loop,
 *   FUN_000d5642 with 0x14, wait_for_status_flag, clear_three_flag_bits, and FUN_000ddea0.
 *   Returns 1 if the transition logic was executed, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_mode_transition_request(void)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  if (((DAT_0003c331 & 0x40) != 0) || ((DAT_0003c075 & 0xf) == 4)) {
    DAT_0003c331 = DAT_0003c331 & 0xbf;
    if ((DAT_0003c00f & 0x40) == 0) {
      call_subroutine_with_arg_9();
    }
    if (((DAT_0003c02f & 8) != 0) || ((DAT_0003c003 & 0x10) == 0)) {
      if (((DAT_0003c036 & 1) == 0) && (iVar1 = set_flag_and_call_helper_000db7a8(), iVar1 != 0)) {
        call_d5642_with_100();
      }
      if ((DAT_0003ce01 & 1) != 0) {
        clear_bit1_of_dat_0003ce01();
      }
      set_flag_and_call_helper_000d014c();
      call_subroutine_with_0x40();
      DAT_0003c214 = DAT_0003c214 | 1;
      DAT_0003c066 = DAT_0003c066 | 0x40;
      DAT_0003c07e = DAT_0003c07e & 0xfd;
      initialize_state_block(1000);
      run_timed_polling_loop();
      DAT_00000002 = DAT_00000002 & 0xfe;
      run_five_iteration_state_loop();
      DAT_00000002 = DAT_00000002 & 0xfd;
      FUN_000d5642(0x14);
      wait_for_status_flag();
      clear_three_flag_bits();
      DAT_0003c214 = DAT_0003c214 & 0xfe;
      DAT_0003c2ca = 0;
      FUN_000ddea0();
      uVar2 = 1;
    }
  }
  return uVar2;
}
