/* @k10d alloc_pool_and_init_task @ 0x1045a056
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Allocates a block from a kernel memory pool and initializes a task control block via
 *   create_message_box_1045a190.
 * summary:
 *   Retrieves the system heap descriptor and allocates a block from the pool specified by
 *   param_3. It stores the pool ID in a local variable and calls
 *   create_message_box_1045a190 with the allocated block and other parameters. If the
 *   initialization fails, it releases the allocated block and returns -1; otherwise, it
 *   returns the result of the initialization call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int alloc_pool_and_init_task(int *param_1,int param_2,int param_3,int param_4)

{
  void *pvVar1;
  uint32_t *puVar2;
  int iVar3;
  uintptr_t sp;
  int *piVar4;
  uint8_t local_20 [4];
  
  piVar4 = (int *)local_20;
  pvVar1 = (void *)get_system_heap();
  puVar2 = (uint32_t *)mempool_get_block(pvVar1,(void *)param_3,param_4);
  if (puVar2 == (uint32_t *)0x0) {
    iVar3 = -1;
  }
  else {
    *piVar4 = param_3;
    iVar3 = create_message_box_1045a190(param_1,0,param_2,puVar2,*piVar4);
    if (iVar3 < 0) {
      mempool_release_block(pvVar1,puVar2);
    }
  }
  return iVar3;
}
