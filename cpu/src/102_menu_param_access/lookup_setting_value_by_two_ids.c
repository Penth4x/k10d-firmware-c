/* @k10d lookup_setting_value_by_two_ids @ 0x104266ee
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 102_menu_param_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t lookup_setting_value_by_two_ids(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  iVar1 = get_or_create_singleton_object_10485138();
  pvVar3 = *(void **)(iVar1 + 8);
  settings_refresh_working_copy(pvVar3);
  iVar1 = setting_get((int)pvVar3,0x52);
  iVar2 = setting_get((int)pvVar3,0x53);
  return *(uint32_t *)(&DAT_1059dfcc/*ROM*/ + (2 - iVar2) * 4 + iVar1 * 0xc);
}
