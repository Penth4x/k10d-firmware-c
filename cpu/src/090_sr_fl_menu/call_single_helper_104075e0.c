/* @k10d call_single_helper_104075e0 @ 0x104075e0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Invokes a single unnamed helper function and returns.
 * summary:
 *   The function consists solely of a call to invoke_virtual_slot_two_1039fd58 with no
 *   arguments and no local state. No side effects or data manipulation are visible in this
 *   wrapper. The role of the callee is unknown, so the wrapper's purpose is limited to
 *   forwarding execution.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_104075e0(cls_105992d4 *param_1)

{
  invoke_virtual_slot_two_1039fd58((cls_1056ac8c *)param_1);
  return;
}
