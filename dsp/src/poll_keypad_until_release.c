/* @k10d poll_keypad_until_release @ 0x000e962e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Polls a key state byte in a loop until a release code (0xfe) or a specific high-range
 *   code is detected.
 * summary:
 *   The function initializes several status flags and enters a polling loop that repeatedly
 *   calls clear_and_set_status_flags_000e9c42 and poll_status_bit_sequence to update a key
 *   state variable (DAT_0003c219). It handles specific key codes: 0xff triggers
 *   clear_two_flag_bits_and_call_helpers, 0xfe triggers call_subroutine_with_ten and
 *   returns, and codes in the range 0xf6-0xfd may trigger
 *   dispatch_state_transition_000e996a. Other codes trigger dispatch_by_state_range. The
 *   loop exits on release or a specific condition, returning 1 if the loop was entered.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_keypad_until_release(void)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  DAT_00000400 = DAT_00000400 & 0xfe;
  DAT_0000000a = DAT_0000000a | 1;
  DAT_0000040a = DAT_0000040a | 1;
  DAT_00000063 = 0xb2;
  DAT_00000062 = 0x10;
  call_d5678_with_0x14();
  iVar1 = poll_status_bit_and_loop();
  if (iVar1 == 0) {
    bRam00000000 = bRam00000000 | 0x80;
    call_d5678_with_0x14();
    if ((bRam00000000 & 1) == 0) {
      clear_and_set_status_flags_000e9c42();
      call_subroutine_with_arg_9();
      set_flag_and_call_helper_000e9e08();
      set_global_to_eight_and_call_helper();
      uVar2 = 1;
      while( true ) {
        clear_and_set_status_flags_000e9c42();
        DAT_0003c214 = DAT_0003c214 | 1;
        poll_status_bit_sequence();
        DAT_0003c219 = DAT_0003c21f;
        if (DAT_0003c21f == 0xff) {
          clear_two_flag_bits_and_call_helpers();
          dispatch_on_flag_bits_000e7846();
          DAT_00000481 = DAT_00000481 & 0xef;
        }
        if (DAT_0003c219 == 0xfe) {
          call_subroutine_with_ten();
          clear_and_set_status_flags_000e9c42();
          DAT_0003c214 = DAT_0003c214 & 0xfe;
          return 1;
        }
        if (((0xf6 < DAT_0003c219) && (DAT_0003c219 < 0xfe)) && (iVar1 = dispatch_state_transition_000e996a(), iVar1 == 1)
           ) break;
        if ((DAT_0003c219 == 0) || ((DAT_0003c219 != 0 && (DAT_0003c219 < 0xf4)))) {
          dispatch_by_state_range();
        }
      }
      clear_and_set_status_flags_000e9c42();
    }
    else {
      clear_and_set_status_flags_000e9c42();
    }
  }
  return uVar2;
}
