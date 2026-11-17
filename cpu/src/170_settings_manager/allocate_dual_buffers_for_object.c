/* @k10d allocate_dual_buffers_for_object @ 0x1047e176
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates two memory blocks of size param_3*4 from the system heap and stores their
 *   pointers in the object at offsets 0x10 and 0x14.
 * summary:
 *   Checks a virtual method (slot 2 of base class) via allocate_pool_block_if_null. If non-
 *   zero, allocates two blocks from the system heap using mempool_get_block with pool ID
 *   param_2 and size param_3<<2. Stores the first pointer at offset 0x10 and the second at
 *   offset 0x14 of the object passed in param_1. If either allocation fails, invokes a
 *   virtual method (slot 3, offset 0x1c) on the object at offset 0xc, likely for cleanup or
 *   error handling. Returns 1 on success, 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_dual_buffers_for_object(void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  
  uVar4 = 0;
  iVar1 = allocate_pool_block_if_null((int *)__frv_reg_unset(4),__frv_reg_unset(5),(void *)__frv_reg_unset(6));
  if (iVar1 != 0) {
    pvVar2 = (void *)get_system_heap();
    uVar3 = mempool_get_block(pvVar2,(void *)(param_3 << 2),param_2);
    *(uint32_t *)((int)param_1 + 0x10) = uVar3;
    pvVar2 = (void *)get_system_heap();
    iVar1 = mempool_get_block(pvVar2,(void *)(param_3 << 2),param_2);
    *(int *)((int)param_1 + 0x14) = iVar1;
    if ((*(int *)((int)param_1 + 0x10) == 0) || (iVar1 == 0)) {
      (**(code **)(*(int *)((int)param_1 + 0xc) + 0x1c))
                ((int)*(short *)(*(int *)((int)param_1 + 0xc) + 0x18) + (int)param_1);
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}
