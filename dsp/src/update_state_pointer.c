/* @k10d update_state_pointer @ 0x000c6570
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates a state pointer by calling one of two helper functions based on a flag.
 * summary:
 *   Checks the flag at DAT_0003c3ac. If zero, calls add_signed_offset_by_mode; otherwise
 *   calls add_byte_offset_by_mode, passing DAT_0003c564 and 0. Stores the result in
 *   DAT_0003c47d, then copies it to DAT_0003c47e and DAT_0003c564. The specific role of the
 *   helper functions and the data structures is not determinable from the provided
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_state_pointer(void)

{
  if (DAT_0003c3ac == '\0') {
    DAT_0003c47d = add_signed_offset_by_mode(DAT_0003c564,0);
  }
  else {
    DAT_0003c47d = add_byte_offset_by_mode(DAT_0003c564,0);
  }
  DAT_0003c47e = DAT_0003c47d;
  DAT_0003c564 = DAT_0003c47d;
  return;
}
