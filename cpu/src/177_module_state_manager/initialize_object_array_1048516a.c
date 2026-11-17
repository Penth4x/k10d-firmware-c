/* @k10d initialize_object_array_1048516a @ 0x1048516a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1048528c) overlaps instruction at (ram,0x1048528a)
    */

void initialize_object_array_1048516a(void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iStack_10;
  
  iStack_10 = 1;
  iVar3 = 0;
  while( true ) {
    iVar1 = (int)heap_alloc((void *)0x358);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      cls_105ab904_new((void *)iVar1);
    }
    *(int *)((int)param_1 + iVar3 + 4) = iVar1;
    piVar2 = *(int **)((int)param_1 + iVar3 + 4);
    iVar1 = *piVar2;
    (**(code **)(iVar1 + 0x14))((int)piVar2 + (int)*(short *)(iVar1 + 0x10),0);
    iVar1 = (int)heap_alloc((void *)0x358);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      cls_105ab904_new((void *)iVar1);
    }
    *(int *)((int)param_1 + iVar3 + 8) = iVar1;
    piVar2 = *(int **)((int)param_1 + iVar3 + 8);
    iVar1 = *piVar2;
    (**(code **)(iVar1 + 0x14))((int)piVar2 + (int)*(short *)(iVar1 + 0x10),0);
    iVar1 = (int)heap_alloc((void *)0x358);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      cls_105ab904_new((void *)iVar1);
    }
    *(int *)((int)param_1 + iVar3 + 0xc) = iVar1;
    piVar2 = *(int **)((int)param_1 + iVar3 + 0xc);
    iVar1 = *piVar2;
    (**(code **)(iVar1 + 0x14))((int)piVar2 + (int)*(short *)(iVar1 + 0x10),0);
    iVar1 = (int)heap_alloc((void *)0x358);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      cls_105ab904_new((void *)iVar1);
    }
    *(int *)((int)param_1 + iVar3 + 0x10) = iVar1;
    piVar2 = *(int **)((int)param_1 + iVar3 + 0x10);
    iVar1 = *piVar2;
    (**(code **)(iVar1 + 0x14))((int)piVar2 + (int)*(short *)(iVar1 + 0x10),0);
    iStack_10 = iStack_10 + -1;
    if (iStack_10 < 0) break;
    iVar3 = iVar3 + 0x10;
  }
  piVar2 = (int *)heap_alloc((void *)0x1d4);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    cls_105d6da0_new(piVar2);
  }
  *(int **)((int)param_1 + 0x24) = piVar2;
  (**(code **)(*piVar2 + 0x14))((int)*(short *)(*piVar2 + 0x10) + (int)piVar2,0);
  return;
}
