/* @k10d copy_and_send_two_values @ 0x000ed7ec
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Copies DAT_0003c207 into DAT_0003c007 and sends both values via
 *   write_masked_field_and_call_two_routines with fixed first arguments.
 * summary:
 *   The function performs a simple copy of the global DAT_0003c207 into DAT_0003c007. It
 *   then calls write_masked_field_and_call_two_routines twice: first with arguments (6,
 *   DAT_0003c207), and second with arguments (0x15, (DAT_0003c006 & 0x9f) | 0x10). The role
 *   of write_masked_field_and_call_two_routines and the specific globals is not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_and_send_two_values(void)

{
  DAT_0003c007 = DAT_0003c207;
  write_masked_field_and_call_two_routines(6,DAT_0003c207);
  write_masked_field_and_call_two_routines(0x15,DAT_0003c006 & 0x9f | 0x10);
  return;
}
