/* @k10d collect_five_virtual_results @ 0x10483dc2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t collect_five_virtual_results(void *param_1,int param_2)

{
  int *piVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uint32_t uStack_c;
  
  iVar4 = 0;
  uStack_c = 5;
  iVar3 = 0;
  do {
    piVar1 = (int *)module_array_getter(param_1,iVar4);
    if (piVar1 == (int *)0x0) {
      *(uint32_t *)(param_2 + iVar3) = 0;
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x2c))((int)*(short *)(*piVar1 + 0x28) + (int)piVar1);
      *(uint32_t *)(param_2 + iVar3) = uVar2;
    }
    piVar1 = (int *)module_array_getter(param_1,iVar4 + 1);
    if (piVar1 == (int *)0x0) {
      *(uint32_t *)(param_2 + iVar3 + 4) = 0;
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x2c))((int)*(short *)(*piVar1 + 0x28) + (int)piVar1);
      *(uint32_t *)(param_2 + iVar3 + 4) = uVar2;
    }
    piVar1 = (int *)module_array_getter(param_1,iVar4 + 2);
    if (piVar1 == (int *)0x0) {
      *(uint32_t *)(param_2 + iVar3 + 8) = 0;
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x2c))((int)*(short *)(*piVar1 + 0x28) + (int)piVar1);
      *(uint32_t *)(param_2 + iVar3 + 8) = uVar2;
    }
    piVar1 = (int *)module_array_getter(param_1,iVar4 + 3);
    if (piVar1 == (int *)0x0) {
      *(uint32_t *)(param_2 + iVar3 + 0xc) = 0;
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x2c))((int)*(short *)(*piVar1 + 0x28) + (int)piVar1);
      *(uint32_t *)(param_2 + iVar3 + 0xc) = uVar2;
    }
    piVar1 = (int *)module_array_getter(param_1,iVar4 + 4);
    if (piVar1 == (int *)0x0) {
      *(uint32_t *)(param_2 + iVar3 + 0x10) = 0;
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x2c))((int)*(short *)(*piVar1 + 0x28) + (int)piVar1);
      *(uint32_t *)(param_2 + iVar3 + 0x10) = uVar2;
    }
    iVar4 = iVar4 + 5;
    uStack_c = uStack_c + -1;
    iVar3 = iVar3 + 0x14;
  } while (-1 < uStack_c);
  return 0x1e;
}
