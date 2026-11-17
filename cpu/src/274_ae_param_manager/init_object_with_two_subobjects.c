/* @k10d init_object_with_two_subobjects @ 0x10516c24
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_subobjects(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  pvVar1 = (void *)heap_alloc((void *)0x161d4);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    allocate_and_init_seven_entry_array(pvVar1);
  }
  *(void **)((int)param_1 + 8) = pvVar1;
  iVar2 = get_or_create_singleton_object_104fb12e();
  iVar3 = heap_alloc((void *)0x358);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105d624c_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 4) = iVar3;
  *(uint32_t *)(iVar3 + 0x34) = *(uint32_t *)(iVar2 + 0x14);
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x38) = *(uint32_t *)(iVar2 + 0xc);
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x3c) = *(uint32_t *)(iVar2 + 0x3c);
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x40) = *(uint32_t *)(iVar2 + 0x20);
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x44) = *(uint32_t *)(iVar2 + 0x4c);
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x58) = *(uint32_t *)((int)param_1 + 8);
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x48) = *(uint32_t *)(iVar2 + 0x18);
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x4c) = *(uint32_t *)(iVar2 + 100);
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x50) = *(uint32_t *)(iVar2 + 4);
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x54) = *(uint32_t *)(iVar2 + 0x34);
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x5c) = *(uint32_t *)(iVar2 + 0x68);
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x60) = *(uint32_t *)(iVar2 + 0x54);
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 100) = *(uint32_t *)(iVar2 + 0x7c);
  iVar3 = get_or_create_singleton_object_1050b118();
  *(int *)((int)param_1 + 0xc) = iVar3;
  *(uint32_t *)(iVar3 + 0x2c) = *(uint32_t *)((int)param_1 + 8);
  *(uint32_t *)(*(int *)((int)param_1 + 0xc) + 0x28) = *(uint32_t *)((int)param_1 + 4);
  *(uint32_t *)(*(int *)((int)param_1 + 0xc) + 0x30) = *(uint32_t *)(iVar2 + 0xc);
  *(uint32_t *)(*(int *)((int)param_1 + 0xc) + 0x34) = *(uint32_t *)(iVar2 + 0x3c);
  *(uint32_t *)(*(int *)((int)param_1 + 0xc) + 0x38) = *(uint32_t *)(iVar2 + 0x20);
  *(uint32_t *)(*(int *)((int)param_1 + 0xc) + 0x3c) = *(uint32_t *)(iVar2 + 0x4c);
  *(uint32_t *)(*(int *)((int)param_1 + 0xc) + 0x40) = *(uint32_t *)(iVar2 + 0x18);
  *(uint32_t *)(*(int *)((int)param_1 + 0xc) + 0x44) = *(uint32_t *)(iVar2 + 100);
  *(uint32_t *)(*(int *)((int)param_1 + 0xc) + 0x48) = *(uint32_t *)(iVar2 + 4);
  *(uint32_t *)(*(int *)((int)param_1 + 0xc) + 0x4c) = *(uint32_t *)(iVar2 + 0x34);
  *(uint32_t *)(*(int *)((int)param_1 + 0xc) + 0x50) = *(uint32_t *)(iVar2 + 0x54);
  *(uint32_t *)(*(int *)((int)param_1 + 0xc) + 0x54) = *(uint32_t *)(iVar2 + 0x50);
  iVar2 = **(int **)((int)param_1 + 4);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 4) + (int)*(short *)(iVar2 + 0x10),0);
  iVar2 = **(int **)((int)param_1 + 0xc);
  (**(code **)(iVar2 + 0x14))((int)*(int **)((int)param_1 + 0xc) + (int)*(short *)(iVar2 + 0x10),0);
  return;
}
