/* @k10d dispatch_state_handler_000d64ca @ 0x000d64ca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Reads a state value from DAT_0003c31a and calls one of several handlers based on that
 *   value.
 * summary:
 *   The function calls shift_right_four_bits with DAT_0003c31a to obtain an integer state
 *   code. It then uses a switch statement to dispatch to different handler functions
 *   (FUN_000d5b38, set_bit2_if_param_is_0x50, dispatch_event_by_code_000d6552,
 *   call_function_from_table_000d65f4, call_function_from_table_000d671a,
 *   call_function_from_table_000d6732) depending on whether the state is 4, 5, 6, 7, 8-11,
 *   or 12-13. The specific behavior of each handler is unknown as their names are not
 *   verified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_handler_000d64ca(void)

{
  uint32_t uVar1;
  
  uVar1 = shift_right_four_bits(DAT_0003c31a);
  switch(uVar1) {
  case 4:
    FUN_000d5b38(DAT_0003c31a);
    break;
  case 5:
    set_bit2_if_param_is_0x50(DAT_0003c31a);
    FUN_000d5b38(DAT_0003c31a);
    break;
  case 6:
    dispatch_event_by_code_000d6552(DAT_0003c31a);
    break;
  case 7:
    call_function_from_table_000d65f4(DAT_0003c31a);
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    call_function_from_table_000d671a(DAT_0003c31a);
    break;
  case 0xc:
  case 0xd:
    call_function_from_table_000d6732(DAT_0003c31a);
  }
  return;
}
