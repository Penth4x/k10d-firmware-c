/* @k10d classify_state_by_two_checks @ 0x104f06ee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Returns 0, 1, or 2 based on the results of two sequential predicate calls on param_1.
 * summary:
 *   First calls get_setting_0xb3(param_1); if it returns 0 the function returns 0.
 *   Otherwise it calls get_setting_0xb2(param_1) twice: if the first call returns 0 it
 *   returns 1, and if the second call returns 1 it returns 2. The callees are unnamed, so
 *   the specific subsystem is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t classify_state_by_two_checks(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  iVar1 = get_setting_0xb3(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = get_setting_0xb2(param_1);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = get_setting_0xb2(param_1);
      if (iVar1 == 1) {
        uVar2 = 2;
      }
    }
  }
  return uVar2;
}
