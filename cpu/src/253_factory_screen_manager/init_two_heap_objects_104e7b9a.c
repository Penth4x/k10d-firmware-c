/* @k10d init_two_heap_objects_104e7b9a @ 0x104e7b9a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_two_heap_objects_104e7b9a(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = get_or_create_singleton_object_104fb12e();
  iVar2 = get_or_init_singleton_object_10516bf2();
  iVar3 = heap_alloc((void *)400);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_105c1610_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 8) = iVar3;
  *(uint32_t *)(iVar3 + 0x30) = *(uint32_t *)(iVar2 + 8);
  *(uint32_t *)(*(int *)((int)param_1 + 8) + 0x2c) = *(uint32_t *)(iVar2 + 4);
  *(uint32_t *)(*(int *)((int)param_1 + 8) + 0x34) = *(uint32_t *)(iVar2 + 0xc);
  iVar3 = heap_alloc((void *)0x15d4);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    cls_1059c10c_new((void *)iVar3);
  }
  *(int *)((int)param_1 + 4) = iVar3;
  *(uint32_t *)(iVar3 + 0x4c) = *(uint32_t *)(iVar1 + 0x6c);
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x50) = *(uint32_t *)(iVar2 + 4);
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x54) = *(uint32_t *)(iVar2 + 8);
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x58) = *(uint32_t *)((int)param_1 + 8);
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x5c) = *(uint32_t *)(iVar1 + 0x74);
  iVar1 = **(int **)((int)param_1 + 4);
  (**(code **)(iVar1 + 0x14))((int)*(int **)((int)param_1 + 4) + (int)*(short *)(iVar1 + 0x10),0);
  *(uint32_t *)(*(int *)((int)param_1 + 8) + 0x38) = *(uint32_t *)((int)param_1 + 4);
  iVar1 = **(int **)((int)param_1 + 8);
  (**(code **)(iVar1 + 0x14))((int)*(int **)((int)param_1 + 8) + (int)*(short *)(iVar1 + 0x10),0);
  piVar4 = (int *)get_or_create_sram_object_1039fa94();
  (**(code **)(*piVar4 + 0x14))((int)piVar4 + (int)*(short *)(*piVar4 + 0x10),0);
  return;
}
