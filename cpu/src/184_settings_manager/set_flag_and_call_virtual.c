/* @k10d set_flag_and_call_virtual @ 0x10489b80
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * set_flag_and_call_virtual(uint32_t *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 == 2) {
    if (*(char *)(param_1 + 0x1a) != '\0') {
      return (uint32_t *)0x0;
    }
    iVar1 = (**(code **)(*param_3 + 0x24))((int)*(short *)(*param_3 + 0x20) + (int)param_3,0x17);
    if (iVar1 == 0) {
      return param_1;
    }
    *(uint8_t *)((int)param_1 + 0x31) = 1;
  }
  else {
    if (param_2 != 1) {
      return param_1;
    }
    *(uint8_t *)((int)param_1 + 0x31) = 1;
  }
  (*(code *)0x1046fd04/*ROM*/)(*param_1);
  return param_1;
}
