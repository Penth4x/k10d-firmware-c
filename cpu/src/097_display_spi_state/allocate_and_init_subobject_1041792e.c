/* @k10d allocate_and_init_subobject_1041792e @ 0x1041792e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Allocates two memory blocks from a mempool and initializes a sub-object via virtual
 *   calls.
 * summary:
 *   The function checks a flag at param_1+0x14f4 and ensures a pointer at param_1+0x84 is
 *   valid, calling alloc_first_ring_entry if necessary. If the sub-object at param_1+0x84
 *   is not already initialized (offset 0x34 is 0), it allocates two blocks from the system
 *   heap mempool using sizes stored in the sub-object. It then invokes three virtual
 *   methods on the sub-object to configure the allocated blocks and a value from
 *   param_1+0x98. Finally, it calls call_kernel_with_short_id and
 *   check_kernel_call_success_10459d88 on a structure at param_1+0x1550, likely for locking
 *   or state management.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_and_init_subobject_1041792e(int param_1)

{
  uint32_t uVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  uint32_t uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (*(char *)(param_1 + 0x14f4) != '\0') {
    *(uint32_t *)(param_1 + 0x84) = *(uint32_t *)(param_1 + 0x14f8);
  }
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar1 = (uintptr_t)(alloc_first_ring_entry(*(uint32_t *)(param_1 + 0x54),param_1 + 0x40));
    *(uint32_t *)(param_1 + 0x84) = uVar1;
  }
  if (*(int *)(param_1 + 0x84) == 0) {
    return 0;
  }
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x1550));
  if (*(int *)(*(int *)(param_1 + 0x84) + 0x34) == 0) {
    pvVar2 = (void *)get_system_heap();
    pvVar2 = (void *)mempool_get_block(pvVar2,*(void **)(*(int *)(param_1 + 0x84) + 0x60),0);
    if (pvVar2 != 0) {
      pvVar3 = (void *)get_system_heap();
      iVar4 = mempool_get_block(pvVar3,*(void **)(*(int *)(param_1 + 0x84) + 0x74),0);
      if (iVar4 != 0) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
        (((vtbl_entry*)(iVar6))[2].fn)(*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar6))[2].adj,pvVar2)
        ;
        iVar6 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
        (((vtbl_entry*)(iVar6))[10].fn)(*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar6))[10].adj,iVar4);
        iVar4 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
        (((vtbl_entry*)(iVar4))[11].fn)
                  (*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar4))[11].adj,
                   *(uint32_t *)(param_1 + 0x98));
        uVar5 = 1;
        goto LAB_10417a4e;
      }
      pvVar3 = (void *)get_system_heap();
      mempool_release_block(pvVar3,pvVar2);
    }
    pvVar2 = (void *)get_system_heap();
    mempool_release_block(pvVar2,(void *)0x0);
  }
  else {
    uVar5 = 1;
  }
LAB_10417a4e:
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x1550));
  return uVar5;
}
