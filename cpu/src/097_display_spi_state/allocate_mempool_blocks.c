/* @k10d allocate_mempool_blocks @ 0x10417a62
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_mempool_blocks(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  uint8_t *puVar6;
  int iVar7;
  uintptr_t sp;
  int iStack_118;
  int aiStack_108 [64];
  
  iVar5 = 0;
  iVar7 = 0;
  iVar2 = 0xf;
  iVar1 = 0;
  do {
    *(uint32_t *)((int)aiStack_108 + iVar1) = 0;
    *(uint32_t *)((int)aiStack_108 + iVar1 + 4) = 0;
    *(uint32_t *)((int)aiStack_108 + iVar1 + 8) = 0;
    *(uint32_t *)((int)aiStack_108 + iVar1 + 0xc) = 0;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0x10;
  } while (-1 < iVar2);
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x1550));
  puVar6 = &stack0xfffffff8;
  for (iVar1 = 0; iVar1 < 0x100; iVar1 = iVar1 + 4) {
    pvVar3 = (void *)get_system_heap();
    iVar2 = mempool_get_block(pvVar3,(void *)0x1312d00,0);
    *(int *)(puVar6 + -0x100) = iVar2;
    if (iVar2 == 0) break;
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 4;
    iVar7 = iVar7 + 20000000;
  }
  iVar1 = iVar5 * 4;
  puVar6 = &stack0xfffffff8 + iVar1;
  for (; iVar1 < 0x100; iVar1 = iVar1 + 4) {
    pvVar3 = (void *)get_system_heap();
    iVar2 = mempool_get_block(pvVar3,(void *)0x989680,0);
    *(int *)(puVar6 + -0x100) = iVar2;
    if (iVar2 == 0) break;
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 4;
    iVar7 = iVar7 + 10000000;
  }
  iVar5 = iVar5 * 4;
  puVar6 = &stack0xfffffff8 + iVar5;
  for (; iVar5 < 0x100; iVar5 = iVar5 + 4) {
    pvVar3 = (void *)get_system_heap();
    iVar1 = mempool_get_block(pvVar3,(void *)0x4c4b40,0);
    *(int *)(puVar6 + -0x100) = iVar1;
    if (iVar1 == 0) break;
    puVar6 = puVar6 + 4;
    iVar7 = iVar7 + 5000000;
  }
  iStack_118 = 0xf;
  iVar1 = 0;
  do {
    pvVar3 = *(void **)((int)aiStack_108 + iVar1);
    if (pvVar3 != (void *)0x0) {
      pvVar4 = (void *)get_system_heap();
      mempool_release_block(pvVar4,pvVar3);
      *(uint32_t *)((int)aiStack_108 + iVar1) = 0;
    }
    pvVar3 = *(void **)((int)aiStack_108 + iVar1 + 4);
    if (pvVar3 != (void *)0x0) {
      pvVar4 = (void *)get_system_heap();
      mempool_release_block(pvVar4,pvVar3);
      *(uint32_t *)((int)aiStack_108 + iVar1 + 4) = 0;
    }
    pvVar3 = *(void **)((int)aiStack_108 + iVar1 + 8);
    if (pvVar3 != (void *)0x0) {
      pvVar4 = (void *)get_system_heap();
      mempool_release_block(pvVar4,pvVar3);
      *(uint32_t *)((int)aiStack_108 + iVar1 + 8) = 0;
    }
    pvVar3 = *(void **)((int)aiStack_108 + iVar1 + 0xc);
    if (pvVar3 != (void *)0x0) {
      pvVar4 = (void *)get_system_heap();
      mempool_release_block(pvVar4,pvVar3);
      *(uint32_t *)((int)aiStack_108 + iVar1 + 0xc) = 0;
    }
    iStack_118 = iStack_118 + -1;
    iVar1 = iVar1 + 0x10;
  } while (-1 < iStack_118);
  *(int *)(param_1 + 0x14ec) = iVar7;
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x1550));
  return iVar7;
}
