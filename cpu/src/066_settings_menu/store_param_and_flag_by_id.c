/* @k10d store_param_and_flag_by_id @ 0x103d0706
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 066_settings_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_param_and_flag_by_id(cls_10595e74 *param_1,int param_2)

{
  uint8_t uVar1;
  
  param_1->field_0x18 = param_2;
  uVar1 = uRam10595e70;
  if (((param_2 == 0x1920012) || (uVar1 = uRam10595e71, param_2 == 0x1920014)) ||
     (uVar1 = uRam10595e72, param_2 == 0x1920016)) {
    param_1->field_0x20 = uVar1;
    invoke_two_virtual_operations((int *)__frv_reg_unset(4));
  }
  return;
}
