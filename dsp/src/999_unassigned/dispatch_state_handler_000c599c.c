/* @k10d dispatch_state_handler_000c599c @ 0x000c599c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Dispatches to one of several handler functions based on the value of DAT_0003c440 and
 *   sets two bits in DAT_0003c58c.
 * summary:
 *   The function uses a switch statement on the global variable DAT_0003c440 to call one of
 *   nine different sub-functions (compute_and_store_clamped_value through FUN_000c617a).
 *   After the dispatch, it checks two conditions involving DAT_0003c5a2 and DAT_0003c58c to
 *   set bit 0 and bit 1 of DAT_0003c58c respectively. The specific roles of the callees and
 *   the meaning of the state variables are not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_handler_000c599c(void)

{
  switch(DAT_0003c440) {
  case 0:
  case 1:
  case 6:
    compute_and_store_clamped_value();
    break;
  case 2:
    FUN_000c6002();
    break;
  case 3:
    advance_buffer_pointer_on_event();
    break;
  case 4:
    FUN_000c60c4();
    break;
  case 5:
    adjust_buffer_pointer_and_flags();
    break;
  case 7:
    select_and_call_pair();
    break;
  case 8:
    select_and_dispatch_state_pair();
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    FUN_000c617a();
    break;
  case 0x11:
    branch_on_three_flag_bits();
  }
  if (((DAT_0003c5a2 & 1) != 0) || ((DAT_0003c58c & 0x10) != 0)) {
    DAT_0003c58c = DAT_0003c58c | 1;
  }
  if (((DAT_0003c5a2 & 1) != 0) || ((DAT_0003c58c & 0x20) != 0)) {
    DAT_0003c58c = DAT_0003c58c | 2;
  }
  return;
}
