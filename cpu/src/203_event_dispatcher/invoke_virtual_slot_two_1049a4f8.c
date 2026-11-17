/* @k10d invoke_virtual_slot_two_1049a4f8 @ 0x1049a4f8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_1049a4f8(int *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  param_1 = (int *)*param_1;
  uVar1 = 1;
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0x14))
                      ((int)*(short *)(*param_1 + 0x10) + (int)param_1,0x41100,param_2);
    uVar1 = 1;
    if (iVar2 != 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
