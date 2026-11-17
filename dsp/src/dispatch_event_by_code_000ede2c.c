/* @k10d dispatch_event_by_code_000ede2c @ 0x000ede2c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Clears two flag bits in global state and dispatches to a handler based on the event
 *   code in param_1.
 * summary:
 *   The function masks bit 7 of DAT_0000000a and bit 2 of DAT_00000405, calls
 *   call_subroutine_with_arg_9 and FUN_000d5642(10), then uses a switch statement on
 *   param_1 to call one of 21 different handler functions. The specific roles of the
 *   handlers and the meaning of the event codes are not determinable from the provided
 *   pseudocode and unverified callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_by_code_000ede2c(uint32_t param_1)

{
  DAT_0000000a = DAT_0000000a & 0x7f;
  call_subroutine_with_arg_9();
  DAT_00000405 = DAT_00000405 & 0xfb;
  FUN_000d5642(10);
  switch(param_1) {
  case 2:
    initialize_and_wait_for_state();
    break;
  case 4:
    toggle_bit_flags_and_wait_000ee246();
    break;
  case 5:
    toggle_bit_flags_and_wait_000edfdc();
    break;
  case 8:
    wait_for_flag_transition();
    break;
  case 9:
    toggle_bit_and_wait_for_flag_000eedd2();
    break;
  case 10:
    toggle_bit_and_wait_for_flag_000eeb06();
    break;
  case 0xb:
    toggle_bit_and_wait_for_flag_000eec6c();
    break;
  case 0xc:
    wait_for_bit2_toggle();
    break;
  case 0xd:
    toggle_bit_and_wait_for_flag_000ee6d4();
    break;
  case 0xe:
    wait_for_bit_toggle();
    break;
  case 0xf:
    toggle_bit_and_wait_for_flag_000ee83a();
    break;
  case 0x14:
    toggle_bit_in_global_flags();
    break;
  case 0x18:
    wait_for_bit4_toggle();
    break;
  case 0x19:
    toggle_bit_and_wait_for_flag_000ef1fa();
    break;
  case 0x1a:
    wait_for_bit_toggle_sequence();
    break;
  case 0x1b:
    toggle_bit_7_and_wait();
    break;
  case 0x1c:
    FUN_000df57e();
    break;
  case 0x1d:
    toggle_gpio_pin_4();
    break;
  case 0x1e:
    FUN_000ef65e();
    break;
  case 0x1f:
    FUN_000df418();
  }
  return;
}
