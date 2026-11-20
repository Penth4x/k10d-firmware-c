/* @k10d update_byte_from_two_callees @ 0x000c6534
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Calls one of two functions based on a flag and stores the result in two byte globals.
 * summary:
 *   Checks the byte at DAT_0003c3ac. If zero, it calls add_signed_offset_by_mode with
 *   DAT_0003c565 and 0; otherwise it calls add_byte_offset_by_mode with the same arguments.
 *   The return value is stored into DAT_0003c480, then copied to DAT_0003c481 and
 *   DAT_0003c565. The specific roles of the callees and the data globals are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_byte_from_two_callees(void)

{
  if (DAT_0003c3ac == '\0') {
    DAT_0003c480 = add_signed_offset_by_mode(DAT_0003c565,0);
  }
  else {
    DAT_0003c480 = add_byte_offset_by_mode(DAT_0003c565,0);
  }
  DAT_0003c481 = DAT_0003c480;
  DAT_0003c565 = DAT_0003c480;
  return;
}
