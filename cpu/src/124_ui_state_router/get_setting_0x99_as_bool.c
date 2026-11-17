/* @k10d get_setting_0x99_as_bool @ 0x104350d4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 124_ui_state_router (unit names are model-proposed)
 * purpose:
 *   Refreshes the settings working copy if needed and returns setting 0x99 as a 1/2
 *   boolean-like value.
 * summary:
 *   Calls check_object_field_via_helper on the object at param_1+0xc; if true, calls
 *   settings_refresh_working_copy to sync the working copy. Then reads setting ID 0x99 via
 *   setting_get. Returns 2 if the value is 2, otherwise returns 1. The specific meaning of
 *   setting 0x99 is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_0x99_as_bool(int param_1)

{
  bool bVar3;
  int iVar1;
  uint32_t uVar2;
  
  bVar3 = check_object_field_via_helper(*(void **)(param_1 + 0xc));
  if (bVar3) {
    settings_refresh_working_copy(*(void **)(param_1 + 0xc));
  }
  iVar1 = setting_get(*(int *)(param_1 + 0xc),0x99);
  uVar2 = 2;
  if (iVar1 != 2) {
    uVar2 = 1;
  }
  return uVar2;
}
