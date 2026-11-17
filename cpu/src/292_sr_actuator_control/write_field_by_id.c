/* @k10d write_field_by_id @ 0x10534330
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_field_by_id(uint32_t *param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  
  if (param_2 == 0x2c) {
    *param_1 = param_3;
  }
  else {
    if (param_2 == 0x1a) {
      iVar1 = 4;
    }
    else if (param_2 == 0x29) {
      iVar1 = 8;
    }
    else {
      if (param_2 != 0xb) {
        return;
      }
      iVar1 = 0xc;
    }
    *(uint32_t *)(iVar1 + (int)param_1) = param_3;
  }
  return;
}
