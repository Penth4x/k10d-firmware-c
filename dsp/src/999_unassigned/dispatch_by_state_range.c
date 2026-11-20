/* @k10d dispatch_by_state_range @ 0x000e970c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Checks a global state value against several numeric ranges and calls a specific handler
 *   for each matching range.
 * summary:
 *   The function reads DAT_0003c219 and evaluates it against seven distinct integer ranges.
 *   Depending on which range the value falls into, it invokes one or more of the provided
 *   callee functions. It does not modify the state variable itself and returns void.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_by_state_range(void)

{
  if ((0x2f < DAT_0003c219) && (DAT_0003c219 < 0x40)) {
    FUN_000e238a();
  }
  if ((0x1f < DAT_0003c219) && (DAT_0003c219 < 0x30)) {
    dispatch_table_entry();
  }
  if ((0xf < DAT_0003c219) && (DAT_0003c219 < 0x20)) {
    dispatch_on_state_word();
    dispatch_on_state_byte_000e9924();
  }
  if ((7 < DAT_0003c219) && (DAT_0003c219 < 0x10)) {
    dispatch_on_byte_flag_000e9798();
    dispatch_state_transition_000e9812();
  }
  if ((1 < DAT_0003c219) && (DAT_0003c219 < 8)) {
    process_command_stream();
  }
  if ((DAT_0003c219 == 0) || (DAT_0003c219 == 1)) {
    dispatch_on_byte_flag_000e9798();
  }
  if ((0xef < DAT_0003c219) && (DAT_0003c219 < 0xf4)) {
    poll_status_and_transfer_bytes();
  }
  return;
}
