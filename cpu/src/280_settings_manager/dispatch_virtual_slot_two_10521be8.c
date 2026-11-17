/* @k10d dispatch_virtual_slot_two_10521be8 @ 0x10521be8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_slot_two_10521be8(uint32_t *param_1,uint32_t param_2)

{
  int *piVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  if ((*(char *)(param_1 + 5) != '\0') && (param_1[1] == 1)) {
    param_1[1] = 2;
    piVar1 = (int *)param_1[6];
    if (piVar1 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,param_2);
    }
    *param_1 = param_2;
  }
  return uVar2;
}
