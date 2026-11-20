/* @k10d call_d5678_with_0x14 @ 0x000d5672
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes busy_wait_on_mode_flag with the constant argument 0x14.
 * summary:
 *   This function is a one-line wrapper that calls busy_wait_on_mode_flag passing the
 *   immediate value 0x14. It has no other logic, local state, or side effects beyond that
 *   single call. The role of busy_wait_on_mode_flag is unknown, so the semantic meaning of
 *   the 0x14 argument cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_d5678_with_0x14(void)

{
  busy_wait_on_mode_flag(0x14);
  return;
}
