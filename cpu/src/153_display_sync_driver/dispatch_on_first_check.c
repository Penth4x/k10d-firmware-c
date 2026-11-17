/* @k10d dispatch_on_first_check @ 0x1046cc2c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Calls a first predicate and branches to one of two secondary predicates based on its
 *   result.
 * summary:
 *   The function takes a single integer argument and passes it to
 *   check_setting_0x96_enabled. If that call returns true, it calls
 *   check_setting_0xa8_enabled; otherwise it calls check_setting_0xa7_enabled. The boolean
 *   result of the secondary call is returned as an unsigned integer. No camera-specific
 *   subsystem is identifiable from the available callees or code structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_on_first_check(int param_1)

{
  bool bVar1;
  
  bVar1 = check_setting_0x96_enabled(param_1);
  if (bVar1) {
    bVar1 = check_setting_0xa8_enabled(param_1);
  }
  else {
    bVar1 = check_setting_0xa7_enabled(param_1);
  }
  return (uint)bVar1;
}
