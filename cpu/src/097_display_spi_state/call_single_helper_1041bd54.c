/* @k10d call_single_helper_1041bd54 @ 0x1041bd54
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Invokes a single unnamed helper function and returns.
 * summary:
 *   The function consists solely of a call to set_state_two_and_clear_flag with no
 *   arguments and no return value handling. No other operations, memory accesses, or state
 *   changes are visible in the pseudocode. The role of the callee is unknown, so the
 *   wrapper's specific purpose cannot be determined beyond forwarding the call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_1041bd54(void)

{
  set_state_two_and_clear_flag(__frv_reg_unset(4));
  return;
}
