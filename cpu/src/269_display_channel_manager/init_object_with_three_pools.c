/* @k10d init_object_with_three_pools @ 0x1050731a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a 0x330-byte object by allocating three memory pool blocks and setting
 *   initial state flags.
 * summary:
 *   The function takes an object pointer (param_1) and performs initialization. It calls
 *   two unknown setup functions on offsets 0x328 and 0x308. It then allocates three blocks
 *   from the system heap using mempool_get_block, storing the pointers at offsets 0x310,
 *   0x314, and 0x318. It sets offset 0x24 to 0 and offset 0x58 to 1. Finally, it calls
 *   alloc_pool_and_init_task with parameters (0xe, 0x1000, 4) on offset 8 and returns 1.
 *   The specific camera subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_three_pools(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint8_t uStack_9;
  
  wait_flg_obj((void *)((int)param_1 + 0x328),0);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x308),1,0x1f);
  pvVar1 = (void *)get_system_heap();
  pvVar2 = (void *)return_constant_0x33((int)&uStack_9);
  uVar3 = mempool_get_block(pvVar1,pvVar2,0);
  *(uint32_t *)((int)param_1 + 0x310) = uVar3;
  pvVar1 = (void *)get_system_heap();
  pvVar2 = (void *)return_constant_0x5468((int)&uStack_9);
  uVar3 = mempool_get_block(pvVar1,pvVar2,0);
  *(uint32_t *)((int)param_1 + 0x314) = uVar3;
  pvVar1 = (void *)get_system_heap();
  pvVar2 = (void *)call_subroutine_and_return_0x2026((int)&uStack_9);
  uVar3 = mempool_get_block(pvVar1,pvVar2,0);
  *(uint32_t *)((int)param_1 + 0x318) = uVar3;
  *(uint32_t *)((int)param_1 + 0x24) = 0;
  *(uint32_t *)((int)param_1 + 0x58) = 1;
  alloc_pool_and_init_task((int *)((int)param_1 + 8),0xe,0x1000,4);
  return 1;
}
