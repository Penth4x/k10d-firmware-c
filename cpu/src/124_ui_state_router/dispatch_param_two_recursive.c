/* @k10d dispatch_param_two_recursive @ 0x10435094
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 124_ui_state_router (unit names are model-proposed)
 * purpose:
 *   Selects a value based on param_2, calling get_setting_0x99_as_bool and recursing when
 *   param_2 is 3.
 * summary:
 *   The function branches on param_2. If param_2 is 1 it returns DAT_105bb610, if 2 it
 *   returns DAT_105bb614, and if 3 it calls get_setting_0x99_as_bool(param_1) and then
 *   recursively calls itself with that result as the new param_2. For any other value it
 *   returns 0. The caller is set_field_at_offset_0x14_1043506a.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_param_two_recursive(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = _DAT_105bb610/*ROM*/;
  if (((param_2 != 1) && (uVar1 = _DAT_105bb614/*ROM*/, param_2 != 2)) && (uVar1 = 0, param_2 == 3)) {
    uVar1 = get_setting_0x99_as_bool(param_1);
    uVar1 = dispatch_param_two_recursive(param_1,uVar1);
  }
  return uVar1;
}
