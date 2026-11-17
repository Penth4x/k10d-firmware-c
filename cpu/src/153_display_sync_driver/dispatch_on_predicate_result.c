/* @k10d dispatch_on_predicate_result @ 0x1046cc10
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Calls a predicate on param_1 and branches to one of two handlers based on the boolean
 *   result.
 * summary:
 *   The function invokes check_setting_0x96_enabled(param_1) to obtain a boolean condition.
 *   If true, it calls refresh_settings_if_dirty_1046cb1a(param_1); otherwise, it calls
 *   refresh_settings_if_dirty_1046cae4(param_1). It returns the value from the executed
 *   handler in r4. The specific subsystem is not identifiable from the pseudocode or callee
 *   names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_predicate_result(int param_1)

{
  bool bVar2;
  uint32_t extraout_r4;
  uint32_t extraout_r4_00;
  uint32_t uVar1;
  
  bVar2 = check_setting_0x96_enabled(param_1);
  if (bVar2) {
    refresh_settings_if_dirty_1046cb1a(param_1);
    uVar1 = extraout_r4;
  }
  else {
    refresh_settings_if_dirty_1046cae4(param_1);
    uVar1 = extraout_r4_00;
  }
  return uVar1;
}
