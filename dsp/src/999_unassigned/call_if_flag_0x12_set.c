/* @k10d call_if_flag_0x12_set @ 0x000daffe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls set_flag_and_call_helper_000db7a8 only when the byte at DAT_0003c493 equals 0x12.
 * summary:
 *   Checks the global byte DAT_0003c493 against the constant 0x12. If the value matches, it
 *   invokes the single callee set_flag_and_call_helper_000db7a8 and returns. The role of
 *   DAT_0003c493 and set_flag_and_call_helper_000db7a8 is not determinable from the
 *   provided pseudocode and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_if_flag_0x12_set(void)

{
  if (DAT_0003c493 == '\x12') {
    set_flag_and_call_helper_000db7a8();
  }
  return;
}
