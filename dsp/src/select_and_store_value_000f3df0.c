/* @k10d select_and_store_value_000f3df0 @ 0x000f3df0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Selects a value from one of two functions based on a flag and stores it in multiple
 *   global variables.
 * summary:
 *   Checks the flag at DAT_0003c3ac to decide whether to call add_signed_offset_by_mode or
 *   add_byte_offset_by_mode with arguments DAT_0003c489 and 3. The result is stored in
 *   DAT_0003c488 and copied to DAT_0003c487. If DAT_0003c440 equals 6, the result is also
 *   copied to DAT_0003c483. The specific roles of the callees and the meaning of the global
 *   variables are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_and_store_value_000f3df0(void)

{
  if (DAT_0003c3ac == '\0') {
    DAT_0003c488 = add_signed_offset_by_mode(DAT_0003c489,3);
  }
  else {
    DAT_0003c488 = add_byte_offset_by_mode(DAT_0003c489,3);
  }
  DAT_0003c487 = DAT_0003c488;
  if (DAT_0003c440 == '\x06') {
    DAT_0003c483 = DAT_0003c488;
  }
  return;
}
