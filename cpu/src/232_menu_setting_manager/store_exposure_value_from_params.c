/* @k10d store_exposure_value_from_params @ 0x104c4480
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_exposure_value_from_params(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 != 0x10009) {
    if (param_2 < 0x1000a) {
      if (param_2 != 0x10008) {
        return 0;
      }
    }
    else if ((param_2 != 0x1000d) && (param_2 != 0x41000)) {
      return 0;
    }
  }
  iVar1 = *param_3;
  if (iVar1 == 3) {
    *(int *)(param_1 + 0x3c) = (param_3[2] * 100) / param_3[3];
  }
  else if (iVar1 == 0) {
    *(uint32_t *)(param_1 + 0x40) = 1;
  }
  else if (iVar1 == 1) {
    *(int *)(param_1 + 0x44) = param_3[1];
    *(uint32_t *)(param_1 + 0x40) = 0;
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    *(uint32_t *)(param_1 + 0x40) = 1;
  }
  set_flg_obj((uint32_t *)(param_1 + 0x34));
  return 0;
}
