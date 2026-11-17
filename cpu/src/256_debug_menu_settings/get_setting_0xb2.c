/* @k10d get_setting_0xb2 @ 0x104f180c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_0xb2(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = setting_get(*(int *)(param_1 + 0xc),0xb2);
  return uVar1;
}
