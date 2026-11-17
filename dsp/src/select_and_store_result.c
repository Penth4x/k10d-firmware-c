/* @k10d select_and_store_result @ 0x000f3db2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Calls one of two functions based on a flag and stores the result in a global variable.
 * summary:
 *   Checks the value of DAT_0003c3ac. If it is zero, it calls add_signed_offset_by_mode
 *   with arguments DAT_0003c48c and 1; otherwise, it calls add_byte_offset_by_mode with the
 *   same arguments. The return value is stored in DAT_0003c48b and then copied to
 *   DAT_0003c48a. The specific roles of the callees and the data globals are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_and_store_result(void)

{
  if (DAT_0003c3ac == '\0') {
    DAT_0003c48b = add_signed_offset_by_mode(DAT_0003c48c,1);
  }
  else {
    DAT_0003c48b = add_byte_offset_by_mode(DAT_0003c48c,1);
  }
  DAT_0003c48a = DAT_0003c48b;
  return;
}
