/* @k10d invoke_virtual_write_and_cleanup @ 0x104b5794
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 217_error_display_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_write_and_cleanup(int *param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar2 = *(int *)*param_1;
  iVar2 = (**(code **)(iVar2 + 0x2c))
                    (*param_1 + (int)*(short *)(iVar2 + 0x28),param_1 + 1,1,&uStack_c);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)*param_1;
    iVar2 = (**(code **)(iVar2 + 0x3c))
                      (*param_1 + (int)*(short *)(iVar2 + 0x38),uStack_c,param_2,param_3);
    if (iVar2 == 0) {
      iVar2 = *(int *)*param_1;
      (**(code **)(iVar2 + 0x34))(*param_1 + (int)*(short *)(iVar2 + 0x30),uStack_c);
      uVar1 = 0;
    }
    else {
      *(uint8_t *)(param_2 + param_3) = 0;
      iVar2 = *(int *)*param_1;
      (**(code **)(iVar2 + 0x34))(*param_1 + (int)*(short *)(iVar2 + 0x30),uStack_c);
      uVar1 = 1;
    }
  }
  return uVar1;
}
