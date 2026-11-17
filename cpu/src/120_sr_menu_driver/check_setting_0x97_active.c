/* @k10d check_setting_0x97_active @ 0x10433d46
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * purpose:
 *   Refreshes the settings working copy if needed and returns 1 if setting 0x97 is 1, 2, or
 *   3.
 * summary:
 *   The function takes an object pointer, calls an unknown helper on the sub-object at
 *   offset 0xc. If that helper returns true, it refreshes the settings working copy. It
 *   then reads setting ID 0x97 from the working copy and returns 1 if the value is 1, 2, or
 *   3, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_setting_0x97_active(int param_1)

{
  bool bVar3;
  int iVar1;
  uint32_t uVar2;
  
  bVar3 = check_object_field_via_helper(*(void **)(param_1 + 0xc));
  if (bVar3) {
    settings_refresh_working_copy(*(void **)(param_1 + 0xc));
  }
  iVar1 = setting_get(*(int *)(param_1 + 0xc),0x97);
  if (((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
