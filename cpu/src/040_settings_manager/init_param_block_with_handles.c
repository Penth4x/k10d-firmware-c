/* @k10d init_param_block_with_handles @ 0x103992e6
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Populates a parameter structure with handles from helper calls and enables four sub-
 *   items.
 * summary:
 *   The function calls a series of helper functions (allocate_and_init_object_1039c94c,
 *   allocate_and_store_buffer, allocate_and_init_buffer_1039c6c2,
 *   allocate_and_init_2d_buffer_1039c78a, compute_and_store_offset) with specific command
 *   codes (0x5060022-0x5060030) and stores the returned values at fixed offsets (0x48,
 *   0x58, 0x80-0x8c) in the structure pointed to by param_1. It then calls
 *   set_object_field_and_notify four times with indices 0-3 to enable sub-items, and
 *   finally calls dispatch_six_optional_items five times with combinations of the stored
 *   handles and zeroed parameters. The specific subsystem is not identifiable from the code
 *   or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_param_block_with_handles(void *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  int *piVar5;
  
  piVar5 = (int *)&stack0xffffffcc;
  iVar1 = allocate_and_init_object_1039c94c((int)param_1,param_2,(void *)0x5060022,1,8,0,0);
  *piVar5 = 8;
  iVar2 = allocate_and_store_buffer((int)param_1,iVar1,(void *)0x506002d,1,*(short *)((int)piVar5 + 2));
  *(int *)((int)param_1 + 0xdc) = iVar2;
  *piVar5 = 8;
  piVar5[1] = -4;
  piVar5[2] = 0;
  iVar2 = allocate_and_init_buffer_1039c6c2((int)param_1,param_2,(void *)0x506002b,0x12,*piVar5,piVar5[1],piVar5[2]);
  *(int *)((int)param_1 + 0x48) = iVar2;
  *piVar5 = 8;
  piVar5[1] = -4;
  piVar5[2] = 0;
  iVar2 = allocate_and_init_buffer_1039c6c2((int)param_1,param_2,(void *)0x506002c,0x12,*piVar5,piVar5[1],piVar5[2]);
  *(int *)((int)param_1 + 0x58) = iVar2;
  *piVar5 = 8;
  compute_and_store_offset((int)param_1,param_3,(void *)0x5060030,0x13,*(short *)((int)piVar5 + 2));
  *piVar5 = 8;
  piVar5[1] = 0;
  piVar5[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,param_3,(void *)0x5060023,0x13,*piVar5,piVar5[1],
                       *(short *)((int)piVar5 + 10));
  *(int *)((int)param_1 + 0x80) = iVar2;
  *piVar5 = 8;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x5060024,0x13,*(short *)((int)piVar5 + 2));
  iVar2 = *(int *)((int)param_1 + 0x80);
  *piVar5 = 8;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x506002e,1,*(short *)((int)piVar5 + 2));
  *piVar5 = 10;
  iVar2 = allocate_and_init_2d_buffer_1039c78a((int)param_1,param_3,(void *)0x5060025,0x13,*piVar5);
  *(int *)((int)param_1 + 0x84) = iVar2;
  *piVar5 = 10;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x5060026,0x13,*(short *)((int)piVar5 + 2));
  iVar2 = *(int *)((int)param_1 + 0x84);
  *piVar5 = 8;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x506002e,1,*(short *)((int)piVar5 + 2));
  *piVar5 = 0xc;
  iVar2 = allocate_and_init_2d_buffer_1039c78a((int)param_1,param_3,(void *)0x5060027,0x13,*piVar5);
  *(int *)((int)param_1 + 0x88) = iVar2;
  *piVar5 = 0xc;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x5060028,0x13,*(short *)((int)piVar5 + 2));
  iVar2 = *(int *)((int)param_1 + 0x88);
  *piVar5 = 8;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x506002e,1,*(short *)((int)piVar5 + 2));
  *piVar5 = 0xe;
  iVar2 = allocate_and_init_2d_buffer_1039c78a((int)param_1,param_3,(void *)0x5060029,0x13,*piVar5);
  *(int *)((int)param_1 + 0x8c) = iVar2;
  *piVar5 = 0xe;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x506002a,0x13,*(short *)((int)piVar5 + 2));
  iVar2 = *(int *)((int)param_1 + 0x8c);
  *piVar5 = 8;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x506002e,1,*(short *)((int)piVar5 + 2));
  set_object_field_and_notify(param_1,0,1);
  set_object_field_and_notify(param_1,1,1);
  set_object_field_and_notify(param_1,2,1);
  set_object_field_and_notify(param_1,3,1);
  iVar2 = *(int *)((int)param_1 + 0x80);
  iVar3 = *(int *)((int)param_1 + 0x8c);
  iVar4 = *(int *)((int)param_1 + 0x84);
  *piVar5 = 0;
  piVar5[1] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*piVar5,piVar5[1],piVar5[2],piVar5[3]);
  iVar2 = *(int *)((int)param_1 + 0x84);
  iVar3 = *(int *)((int)param_1 + 0x80);
  iVar4 = *(int *)((int)param_1 + 0x88);
  *piVar5 = 0;
  piVar5[1] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*piVar5,piVar5[1],piVar5[2],piVar5[3]);
  iVar2 = *(int *)((int)param_1 + 0x88);
  iVar3 = *(int *)((int)param_1 + 0x84);
  iVar4 = *(int *)((int)param_1 + 0x8c);
  *piVar5 = 0;
  piVar5[1] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*piVar5,piVar5[1],piVar5[2],piVar5[3]);
  iVar2 = *(int *)((int)param_1 + 0x8c);
  iVar3 = *(int *)((int)param_1 + 0x88);
  iVar4 = *(int *)((int)param_1 + 0x80);
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
