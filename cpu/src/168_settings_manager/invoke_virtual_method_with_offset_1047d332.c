/* @k10d invoke_virtual_method_with_offset_1047d332 @ 0x1047d332
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_with_offset_1047d332(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  short sVar1;
  code *pcVar2;
  int *piVar3;
  uintptr_t sp;
  uint32_t *puVar4;
  uint8_t auStack_1c [8];
  
  puVar4 = (uint32_t *)auStack_1c;
  piVar3 = (int *)dispatch_on_state_check(param_1,param_3);
  sVar1 = *(short *)(*piVar3 + 0x58);
  pcVar2 = *(code **)(*piVar3 + 0x5c);
  *puVar4 = param_5;
  puVar4[1] = param_6;
  (*pcVar2)((int)piVar3 + (int)sVar1,param_2,param_3,param_4);
  return;
}
