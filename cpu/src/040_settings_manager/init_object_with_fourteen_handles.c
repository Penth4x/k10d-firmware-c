/* @k10d init_object_with_fourteen_handles @ 0x10398e22
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a struct by calling helper functions to populate 14 consecutive integer
 *   fields with returned handles.
 * summary:
 *   The function calls allocate_and_init_object_1039c94c once, then repeatedly calls
 *   allocate_and_init_object_entry with incrementing constants (0x5060004-0x506000f) to
 *   store results in fields 0x9c through 0xc4. It also calls allocate_and_store_buffer and
 *   allocate_and_init_2d_buffer_1039c664 to populate fields 0xd4, 0x40, and 0x50. A local
 *   stack struct is reused for arguments in each call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_object_with_fourteen_handles(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  int *piVar3;
  
  piVar3 = (int *)&stack0xffffffd0;
  iVar1 = allocate_and_init_object_1039c94c((int)param_1,param_2,(void *)0x5060003,1,4,0,0);
  *piVar3 = 4;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,param_2,(void *)0x5060004,0xd,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)((int)param_1 + 0x9c) = iVar2;
  *piVar3 = 4;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,param_2,(void *)0x5060005,0xd,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)((int)param_1 + 0xa0) = iVar2;
  *piVar3 = 4;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,param_2,(void *)0x5060006,0xd,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)((int)param_1 + 0xa4) = iVar2;
  *piVar3 = 4;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,param_2,(void *)0x5060007,0xd,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)((int)param_1 + 0xa8) = iVar2;
  *piVar3 = 4;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,param_2,(void *)0x5060008,0xd,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)((int)param_1 + 0xac) = iVar2;
  *piVar3 = 4;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,param_2,(void *)0x5060009,0xd,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)((int)param_1 + 0xb0) = iVar2;
  *piVar3 = 4;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,param_2,(void *)0x506000a,0xd,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)((int)param_1 + 0xb4) = iVar2;
  *piVar3 = 4;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,param_2,(void *)0x506000b,0xd,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)((int)param_1 + 0xb8) = iVar2;
  *piVar3 = 4;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,param_2,(void *)0x506000c,0xd,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)((int)param_1 + 0xbc) = iVar2;
  *piVar3 = 4;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,param_2,(void *)0x506000d,0xd,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)((int)param_1 + 0xc0) = iVar2;
  *piVar3 = 4;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,param_2,(void *)0x506000e,0xd,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)((int)param_1 + 0xc4) = iVar2;
  *piVar3 = 4;
  *(uint8_t *)((int)piVar3 + 7) = 1;
  piVar3[2] = 0;
  piVar3[3] = 0;
  iVar2 = allocate_and_init_object_entry((int)param_1,param_2,(void *)0x506000f,0xd,*piVar3,
                       *(uint8_t *)((int)piVar3 + 7),piVar3[2],*(short *)((int)piVar3 + 0xe));
  *(int *)((int)param_1 + 200) = iVar2;
  select_one_of_twelve_slots_10398aac((int)param_1,0);
  *piVar3 = 4;
  iVar2 = allocate_and_store_buffer((int)param_1,iVar1,(void *)0x5060012,1,*(short *)((int)piVar3 + 2));
  *(int *)((int)param_1 + 0xd4) = iVar2;
  *piVar3 = 4;
  iVar2 = allocate_and_init_2d_buffer_1039c664((int)param_1,param_2,(void *)0x5060010,0x18,*piVar3);
  *(int *)((int)param_1 + 0x40) = iVar2;
  *piVar3 = 4;
  iVar2 = allocate_and_init_2d_buffer_1039c664((int)param_1,param_2,(void *)0x5060011,0x18,*piVar3);
  *(int *)((int)param_1 + 0x50) = iVar2;
  return iVar1;
}
