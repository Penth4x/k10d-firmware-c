/* @k10d call_single_helper_103adb72 @ 0x103adb72
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with the given parameter and returns.
 * summary:
 *   This function is a thin wrapper that passes its sole argument to
 *   init_subobject_at_offset_8 and returns immediately. No local state is modified and no
 *   other operations are performed. The role of the callee is unknown, so the wrapper's
 *   specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_103adb72(cls_10565d08 *param_1)

{
  init_subobject_at_offset_8((cls_105992d4 *)param_1);
  return;
}
