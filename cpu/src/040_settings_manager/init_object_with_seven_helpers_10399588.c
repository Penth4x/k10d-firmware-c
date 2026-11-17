/* @k10d init_object_with_seven_helpers_10399588 @ 0x10399588
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling seven helper functions and storing their return values
 *   at fixed offsets.
 * summary:
 *   The function takes a base pointer (param_1) and calls a sequence of helper functions
 *   (allocate_and_init_object_1039c94c, allocate_and_store_buffer,
 *   allocate_and_init_buffer_1039c6c2, compute_and_store_offset,
 *   dispatch_six_optional_items) with various constant arguments. It stores the return
 *   values of several calls at offsets 0x4c, 0x5c, 0x90, 0x94, and 0x98 within the object.
 *   The final calls to dispatch_six_optional_items pass the stored values in different
 *   orders, suggesting a finalization or linking step. The specific subsystem is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_object_with_seven_helpers_10399588(void *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  int *piVar5;
  
  piVar5 = (int *)&stack0xffffffc4;
  iVar1 = allocate_and_init_object_1039c94c((int)param_1,param_2,(void *)0x5060031,1,10,0,0);
  *piVar5 = 10;
  iVar2 = allocate_and_store_buffer((int)param_1,iVar1,(void *)0x506003a,1,*(short *)((int)piVar5 + 2));
  *(int *)((int)param_1 + 0xe0) = iVar2;
  *piVar5 = 10;
  piVar5[1] = -4;
  piVar5[2] = 0;
  iVar2 = allocate_and_init_buffer_1039c6c2((int)param_1,param_2,(void *)0x5060038,0x12,*piVar5,piVar5[1],piVar5[2]);
  *(int *)((int)param_1 + 0x4c) = iVar2;
  *piVar5 = 10;
  piVar5[1] = -4;
  piVar5[2] = 0;
  iVar2 = allocate_and_init_buffer_1039c6c2((int)param_1,param_2,(void *)0x5060039,0x12,*piVar5,piVar5[1],piVar5[2]);
  *(int *)((int)param_1 + 0x5c) = iVar2;
  *piVar5 = 10;
  compute_and_store_offset((int)param_1,param_3,(void *)0x506003d,0x13,*(short *)((int)piVar5 + 2));
  *piVar5 = 10;
  piVar5[1] = 0;
  piVar5[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,param_3,(void *)0x5060032,0x13,*piVar5,piVar5[1],
                       *(short *)((int)piVar5 + 10));
  *(int *)((int)param_1 + 0x90) = iVar2;
  *piVar5 = 10;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x5060033,0x13,*(short *)((int)piVar5 + 2));
  iVar2 = *(int *)((int)param_1 + 0x90);
  *piVar5 = 10;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x506003b,1,*(short *)((int)piVar5 + 2));
  *piVar5 = 0xc;
  piVar5[1] = 0;
  piVar5[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,param_3,(void *)0x5060034,0x13,*piVar5,piVar5[1],
                       *(short *)((int)piVar5 + 10));
  *(int *)((int)param_1 + 0x94) = iVar2;
  *piVar5 = 0xc;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x5060035,0x13,*(short *)((int)piVar5 + 2));
  iVar2 = *(int *)((int)param_1 + 0x94);
  *piVar5 = 10;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x506003b,1,*(short *)((int)piVar5 + 2));
  *piVar5 = 0xe;
  piVar5[1] = 0;
  piVar5[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,param_3,(void *)0x5060036,0x13,*piVar5,piVar5[1],
                       *(short *)((int)piVar5 + 10));
  *(int *)((int)param_1 + 0x98) = iVar2;
  *piVar5 = 0xe;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x5060037,0x13,*(short *)((int)piVar5 + 2));
  iVar2 = *(int *)((int)param_1 + 0x98);
  *piVar5 = 10;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x506003b,1,*(short *)((int)piVar5 + 2));
  iVar2 = *(int *)((int)param_1 + 0x90);
  iVar3 = *(int *)((int)param_1 + 0x98);
  iVar4 = *(int *)((int)param_1 + 0x94);
  *piVar5 = 0;
  piVar5[1] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*piVar5,piVar5[1],piVar5[2],piVar5[3]);
  iVar2 = *(int *)((int)param_1 + 0x94);
  iVar3 = *(int *)((int)param_1 + 0x90);
  iVar4 = *(int *)((int)param_1 + 0x98);
  *piVar5 = 0;
  piVar5[1] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*piVar5,piVar5[1],piVar5[2],piVar5[3]);
  iVar2 = *(int *)((int)param_1 + 0x98);
  iVar3 = *(int *)((int)param_1 + 0x94);
  iVar4 = *(int *)((int)param_1 + 0x90);
  *piVar5 = 0;
  piVar5[1] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*piVar5,piVar5[1],piVar5[2],piVar5[3]);
  *piVar5 = 0;
  piVar5[1] = iVar1;
  piVar5[2] = iVar1;
  piVar5[3] = iVar1;
  dispatch_six_optional_items(param_1,param_3,0,0,*piVar5,piVar5[1],piVar5[2],piVar5[3]);
  return iVar1;
}
