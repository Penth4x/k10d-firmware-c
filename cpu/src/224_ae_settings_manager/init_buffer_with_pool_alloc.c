/* @k10d init_buffer_with_pool_alloc @ 0x104bccce
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a buffer descriptor struct by allocating a memory block from the system
 *   heap pool.
 * summary:
 *   Sets the struct's size field to param_2 + 0xf and initializes a status flag. If param_2
 *   is non-zero, it attempts to allocate a memory block of that size from the system heap
 *   using mempool_get_block, retrying up to the limit specified in param_1[2]. On success,
 *   it stores the pointer in param_1[1] and calls get_aligned_next_pointer; on failure, it
 *   sets the status to 2. If param_2 is zero, it sets the status to 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint init_buffer_with_pool_alloc(int *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  
  param_1[4] = 0;
  *param_1 = param_2 + 0xf;
  if (param_2 == 0) {
    param_1[4] = 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    while( true ) {
      pvVar2 = (void *)get_system_heap();
      iVar3 = mempool_get_block(pvVar2,(void *)*param_1,0);
      param_1[1] = iVar3;
      if ((iVar3 != 0) || (uVar1 = uVar1 + 1, (uint)param_1[2] < uVar1)) break;
      check_kernel_call_success_10459fea(0x0);
    }
    if (param_1[1] == 0) {
      *param_1 = 0;
      param_1[4] = 2;
      uVar1 = 0;
    }
    else {
      uVar1 = get_aligned_next_pointer((int)param_1);
    }
  }
  return uVar1;
}
