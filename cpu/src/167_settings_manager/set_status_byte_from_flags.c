/* @k10d set_status_byte_from_flags @ 0x10479ef4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_status_byte_from_flags(uint32_t param_1,void *param_2,void *param_3)

{
  uint8_t uVar1;
  
  if (*(short *)((int)param_3 + 0x5c) == 1) {
    if (*(int *)((int)param_3 + 0x54) == 0) {
      uVar1 = 0;
      goto LAB_10479f18;
    }
  }
  else {
    if (*(short *)((int)param_3 + 0x5c) != 2) {
      uVar1 = 7;
      goto LAB_10479f18;
    }
    uVar1 = 2;
    if (*(int *)((int)param_3 + 0x54) == 0) goto LAB_10479f18;
  }
  uVar1 = 7;
LAB_10479f18:
  *(uint8_t *)((int)param_2 + 7) = uVar1;
  return;
}
