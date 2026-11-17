/* @k10d invoke_object_method_chain @ 0x105088e6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool invoke_object_method_chain(int param_1,uint32_t *param_2)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar1 = **(int **)(param_1 + 0x300);
  iVar1 = (**(code **)(iVar1 + 0x2c))
                    ((int)*(int **)(param_1 + 0x300) + (int)*(short *)(iVar1 + 0x28),param_2 + 2,0,
                     &uStack_c);
  if (iVar1 != 0) {
    iVar2 = **(int **)(param_1 + 0x300);
    (**(code **)(iVar2 + 0x44))
              ((int)*(int **)(param_1 + 0x300) + (int)*(short *)(iVar2 + 0x40),uStack_c,param_2[1],
               *param_2);
    iVar2 = **(int **)(param_1 + 0x300);
    (**(code **)(iVar2 + 0x34))
              ((int)*(int **)(param_1 + 0x300) + (int)*(short *)(iVar2 + 0x30),uStack_c);
  }
  return iVar1 != 0;
}
