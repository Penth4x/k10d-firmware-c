/* @k10d dispatch_virtual_call_with_offset @ 0x1047d56a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_with_offset(cls_105aac00 *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  short sVar1;
  code *pcVar2;
  int *piVar3;
  uintptr_t sp;
  uint32_t *puVar4;
  uint8_t auStack_18 [4];
  
  puVar4 = (uint32_t *)auStack_18;
  piVar3 = (int *)dispatch_on_state_check((int)param_1,param_3);
  sVar1 = *(short *)(*piVar3 + 0xb8);
  pcVar2 = *(code **)(*piVar3 + 0xbc);
  *puVar4 = param_5;
  (*pcVar2)((int)piVar3 + (int)sVar1,param_2,param_3,param_4);
  return;
}
