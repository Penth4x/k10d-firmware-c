/* @k10d call_single_helper_1036c660 @ 0x1036c660
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 020_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single unnamed helper function and returns.
 * summary:
 *   The function consists solely of a call to lens_fw_update_teardown with no arguments and
 *   no local state manipulation. It acts as a thin wrapper or trampoline to the callee. No
 *   side effects are visible beyond those of the called function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_1036c660(void)

{
  lens_fw_update_teardown();
  return;
}
