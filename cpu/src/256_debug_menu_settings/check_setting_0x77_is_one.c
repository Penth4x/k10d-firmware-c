/* @k10d check_setting_0x77_is_one @ 0x104f1946
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_setting_0x77_is_one(int param_1)

{
  int iVar1;
  
  iVar1 = setting_get(*(int *)(param_1 + 0xc),0x77);
  return iVar1 == 1;
}
