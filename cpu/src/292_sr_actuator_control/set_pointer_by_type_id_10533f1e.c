/* @k10d set_pointer_by_type_id_10533f1e @ 0x10533f1e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_pointer_by_type_id_10533f1e(void *param_1,int param_2,void *param_3)

{
  int iVar1;
  
  if (param_2 == 0x14a) {
    iVar1 = 4;
  }
  else if (param_2 == 0x8769) {
    iVar1 = 8;
  }
  else {
    if (param_2 != 0x8825) {
      return 0;
    }
    iVar1 = 0xc;
  }
  *(void **)(iVar1 + (int)param_1) = param_3;
  return 1;
}
