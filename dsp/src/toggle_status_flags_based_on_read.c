/* @k10d toggle_status_flags_based_on_read @ 0x000ef6bc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Reads a value via accumulate_ten_sample_values_000e9304 and sets or clears specific
 *   bits in DAT_00000001 and DAT_00000004 based on range checks.
 * summary:
 *   The function performs two sequences of operations. In each sequence, it calls
 *   write_masked_field_and_call_two_routines and accumulate_ten_sample_values_000e9304 to
 *   read a value into _DAT_0003c210. It then checks if this value falls within specific
 *   ranges (100-0x83 or 0x22-0x2f) to set or clear bits 0, 1, and 4 in the global variables
 *   DAT_00000001 and DAT_00000004. It also calls busy_wait_on_mode_flag(0x113) between the
 *   two sequences. The specific meaning of the flags and the read operation is not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_status_flags_based_on_read(void)

{
  write_masked_field_and_call_two_routines(0xf,2);
  _DAT_0003c21e = 2;
  accumulate_ten_sample_values_000e9304();
  if ((_DAT_0003c210 < 0x84) && (100 < _DAT_0003c210)) {
    DAT_00000004 = DAT_00000004 | 0x10;
  }
  write_masked_field_and_call_two_routines(0xf,3);
  _DAT_0003c21e = 2;
  accumulate_ten_sample_values_000e9304();
  if ((_DAT_0003c210 < 0x84) && (100 < _DAT_0003c210)) {
    DAT_00000001 = DAT_00000001 | 1;
  }
  _DAT_0003c21e = 1;
  accumulate_ten_sample_values_000e9304();
  if ((_DAT_0003c210 < 0x30) && (0x21 < _DAT_0003c210)) {
    DAT_00000001 = DAT_00000001 | 2;
  }
  busy_wait_on_mode_flag(0x113);
  write_masked_field_and_call_two_routines(0xf,2);
  _DAT_0003c21e = 2;
  accumulate_ten_sample_values_000e9304();
  if ((_DAT_0003c210 < 0x84) && (100 < _DAT_0003c210)) {
    DAT_00000004 = DAT_00000004 & 0xef;
  }
  write_masked_field_and_call_two_routines(0xf,3);
  _DAT_0003c21e = 2;
  accumulate_ten_sample_values_000e9304();
  if ((_DAT_0003c210 < 0x84) && (100 < _DAT_0003c210)) {
    DAT_00000001 = DAT_00000001 & 0xfe;
  }
  _DAT_0003c21e = 1;
  accumulate_ten_sample_values_000e9304();
  if ((_DAT_0003c210 < 0x30) && (0x21 < _DAT_0003c210)) {
    DAT_00000001 = DAT_00000001 & 0xfd;
  }
  busy_wait_on_mode_flag(0x113);
  return;
}
