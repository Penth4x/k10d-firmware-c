/* @k10d allocate_pool_block_for_object_1041819e @ 0x1041819e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_pool_block_for_object_1041819e(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 1;
  if (*(int *)(param_2 + 0x5c) == 0) {
    call_kernel_with_short_id((uint32_t *)(param_1 + 0x1550));
    pvVar1 = (void *)get_system_heap();
    iVar2 = mempool_get_block(pvVar1,*(void **)(param_2 + 0x78),0);
    check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x1550));
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      (((vtbl_entry*)(*(int *)(param_2 + 0x8d4)))[12].fn)
                (((vtbl_entry*)(*(int *)(param_2 + 0x8d4)))[12].adj + param_2,iVar2);
      uVar3 = 1;
    }
  }
  return uVar3;
}
