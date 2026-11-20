/* @k10d init_context_with_four_objects @ 0x10466658
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_context_with_four_objects(void *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  pvVar3 = (void *)((int)param_1 + 0x14);
  forward_three_args_to_helper_10459d64(pvVar3,1,0x1f);
  iVar1 = heap_alloc((void *)0x28);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a7d14_new((uint32_t *)(iVar1));
  }
  *(int *)((int)param_1 + 0xc) = iVar1;
  *(void **)(iVar1 + 0x24) = pvVar3;
  iVar1 = **(int **)((int)param_1 + 0xc);
  (((vtbl_entry*)(iVar1))[2].fn)((int)*(int **)((int)param_1 + 0xc) + (int)((vtbl_entry*)(iVar1))[2].adj,0);
  iVar1 = heap_alloc((void *)0x3c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105a7df8_new((uint32_t *)(iVar1));
  }
  *(int *)((int)param_1 + 8) = iVar1;
  *(void **)(iVar1 + 0x30) = pvVar3;
  *(uint32_t *)(*(int *)((int)param_1 + 8) + 0x34) = *(uint32_t *)((int)param_1 + 0xc);
  iVar1 = initialize_singleton_object_1045d6a0();
  pvVar3 = *(void **)(iVar1 + 0x20);
  if (*(int *)((int)param_1 + 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)param_1 + 8) + 0x14;
  }
  allocate_first_free_slot(pvVar3,6,iVar2);
  *(void **)(*(int *)((int)param_1 + 8) + 0x38) = pvVar3;
  iVar2 = **(int **)((int)param_1 + 8);
  (((vtbl_entry*)(iVar2))[2].fn)((int)*(int **)((int)param_1 + 8) + (int)((vtbl_entry*)(iVar2))[2].adj,0);
  iVar2 = heap_alloc((void *)0x140);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105a7d6c_new((uint32_t *)(iVar2));
  }
  *(int *)((int)param_1 + 4) = iVar2;
  *(uint32_t *)(iVar2 + 0x24) = *(uint32_t *)((int)param_1 + 0xc);
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x20) = *(uint32_t *)((int)param_1 + 8);
  iVar2 = heap_alloc((void *)0x54);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    cls_105a7ea0_new((uint32_t *)(iVar2));
  }
  *(int *)((int)param_1 + 0x10) = iVar2;
  *(uint32_t *)(iVar2 + 0x30) = *(uint32_t *)(iVar1 + 8);
  *(uint32_t *)(*(int *)((int)param_1 + 0x10) + 0x34) = *(uint32_t *)((int)param_1 + 0xc);
  *(uint32_t *)(*(int *)((int)param_1 + 0x10) + 0x38) = *(uint32_t *)((int)param_1 + 4);
  iVar1 = **(int **)((int)param_1 + 0x10);
  (((vtbl_entry*)(iVar1))[2].fn)((int)*(int **)((int)param_1 + 0x10) + (int)((vtbl_entry*)(iVar1))[2].adj,0)
  ;
  *(uint32_t *)(*(int *)((int)param_1 + 4) + 0x138) = *(uint32_t *)((int)param_1 + 0x10);
  iVar1 = **(int **)((int)param_1 + 4);
  (((vtbl_entry*)(iVar1))[2].fn)((int)*(int **)((int)param_1 + 4) + (int)((vtbl_entry*)(iVar1))[2].adj,0);
  return;
}
