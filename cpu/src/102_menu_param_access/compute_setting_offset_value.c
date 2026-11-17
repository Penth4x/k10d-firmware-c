/* @k10d compute_setting_offset_value @ 0x10426740
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 102_menu_param_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_setting_offset_value(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  iVar1 = get_or_create_singleton_object_10485138();
  pvVar3 = *(void **)(iVar1 + 8);
  settings_refresh_working_copy(pvVar3);
  iVar1 = setting_get((int)pvVar3,0x52);
  iVar2 = setting_get((int)pvVar3,0x53);
  return *(int *)(&DAT_1059e014/*ROM*/ + (2 - iVar2) * 4 + iVar1 * 0xc) + -63000;
}
