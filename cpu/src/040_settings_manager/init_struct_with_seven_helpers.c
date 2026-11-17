/* @k10d init_struct_with_seven_helpers @ 0x1039905c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Populates a structure by calling seven helper functions with command codes and storing
 *   results at fixed offsets.
 * summary:
 *   The function initializes a structure pointed to by param_1 by calling
 *   allocate_and_init_object_1039c94c, allocate_and_store_buffer,
 *   allocate_and_init_buffer_1039c6c2, allocate_and_init_2d_buffer_1039c78a, and
 *   compute_and_store_offset with specific command codes (0x5060013-0x5060021) and storing
 *   the return values at offsets 0x44, 0x54, 0x70, 0x74, 0x78, 0x7c, and 0xd8. It then
 *   calls set_object_field_by_index_10398bf2 four times and dispatch_six_optional_items
 *   five times to finalize the configuration. The mechanical behavior is structure
 *   initialization via helper calls, but the specific subsystem is not determinable from
 *   the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_struct_with_seven_helpers(void *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  int *piVar5;
  
  piVar5 = (int *)&stack0xffffffcc;
  iVar1 = allocate_and_init_object_1039c94c((int)param_1,param_2,(void *)0x5060013,1,6,0,0);
  *piVar5 = 6;
  iVar2 = allocate_and_store_buffer((int)param_1,iVar1,(void *)0x506001e,1,*(short *)((int)piVar5 + 2));
  *(int *)((int)param_1 + 0xd8) = iVar2;
  *piVar5 = 6;
  piVar5[1] = -4;
  piVar5[2] = 0;
  iVar2 = allocate_and_init_buffer_1039c6c2((int)param_1,param_2,(void *)0x506001c,0x12,*piVar5,piVar5[1],piVar5[2]);
  *(int *)((int)param_1 + 0x44) = iVar2;
  *piVar5 = 6;
  piVar5[1] = -4;
  piVar5[2] = 0;
  iVar2 = allocate_and_init_buffer_1039c6c2((int)param_1,param_2,(void *)0x506001d,0x12,*piVar5,piVar5[1],piVar5[2]);
  *(int *)((int)param_1 + 0x54) = iVar2;
  *piVar5 = 6;
  compute_and_store_offset((int)param_1,param_3,(void *)0x5060021,0x13,*(short *)((int)piVar5 + 2));
  *piVar5 = 6;
  piVar5[1] = 0;
  piVar5[2] = 0;
  iVar2 = allocate_and_init_object_1039c94c((int)param_1,param_3,(void *)0x5060014,0x13,*piVar5,piVar5[1],
                       *(short *)((int)piVar5 + 10));
  *(int *)((int)param_1 + 0x70) = iVar2;
  *piVar5 = 6;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x5060015,0x13,*(short *)((int)piVar5 + 2));
  iVar2 = *(int *)((int)param_1 + 0x70);
  *piVar5 = 6;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x506001f,1,*(short *)((int)piVar5 + 2));
  *piVar5 = 8;
  iVar2 = allocate_and_init_2d_buffer_1039c78a((int)param_1,param_3,(void *)0x5060016,0x13,*piVar5);
  *(int *)((int)param_1 + 0x74) = iVar2;
  *piVar5 = 8;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x5060017,0x13,*(short *)((int)piVar5 + 2));
  iVar2 = *(int *)((int)param_1 + 0x74);
  *piVar5 = 6;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x506001f,1,*(short *)((int)piVar5 + 2));
  *piVar5 = 10;
  iVar2 = allocate_and_init_2d_buffer_1039c78a((int)param_1,param_3,(void *)0x5060018,0x13,*piVar5);
  *(int *)((int)param_1 + 0x78) = iVar2;
  *piVar5 = 10;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x5060019,0x13,*(short *)((int)piVar5 + 2));
  iVar2 = *(int *)((int)param_1 + 0x78);
  *piVar5 = 6;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x506001f,1,*(short *)((int)piVar5 + 2));
  *piVar5 = 0xc;
  iVar2 = allocate_and_init_2d_buffer_1039c78a((int)param_1,param_3,(void *)0x506001a,0x13,*piVar5);
  *(int *)((int)param_1 + 0x7c) = iVar2;
  *piVar5 = 0xc;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x506001b,0x13,*(short *)((int)piVar5 + 2));
  iVar2 = *(int *)((int)param_1 + 0x7c);
  *piVar5 = 6;
  allocate_and_store_buffer((int)param_1,iVar2,(void *)0x506001f,1,*(short *)((int)piVar5 + 2));
  set_object_field_by_index_10398bf2(param_1,0,1);
  set_object_field_by_index_10398bf2(param_1,1,1);
  set_object_field_by_index_10398bf2(param_1,2,1);
  set_object_field_by_index_10398bf2(param_1,3,1);
  iVar2 = *(int *)((int)param_1 + 0x70);
  iVar3 = *(int *)((int)param_1 + 0x7c);
  iVar4 = *(int *)((int)param_1 + 0x74);
  *piVar5 = 0;
  piVar5[1] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*piVar5,piVar5[1],piVar5[2],piVar5[3]);
  iVar2 = *(int *)((int)param_1 + 0x74);
  iVar3 = *(int *)((int)param_1 + 0x70);
  iVar4 = *(int *)((int)param_1 + 0x78);
  *piVar5 = 0;
  piVar5[1] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*piVar5,piVar5[1],piVar5[2],piVar5[3]);
  iVar2 = *(int *)((int)param_1 + 0x78);
  iVar3 = *(int *)((int)param_1 + 0x74);
  iVar4 = *(int *)((int)param_1 + 0x7c);
  *piVar5 = 0;
  piVar5[1] = 0;
  piVar5[2] = 0;
  piVar5[3] = 0;
  dispatch_six_optional_items(param_1,iVar2,iVar3,iVar4,*piVar5,piVar5[1],piVar5[2],piVar5[3]);
  iVar2 = *(int *)((int)param_1 + 0x7c);
  iVar3 = *(int *)((int)param_1 + 0x78);
  iVar4 = *(int *)((int)param_1 + 0x70);
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
