/* @k10d heap_free @ 0x10459e30
 * name: verified (structural evidence: decomp: FUN_10459b3e gets the heap, FUN_10459bb8 releases param_1; mbx_send_message heap_alloc's a block and frees it here on send failure)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Frees a heap block (no-op on NULL); also the operator delete called by C++ deleting
 *   destructors (store vtable, then free if flags&1).
 * summary:
 *   VERIFIED: decomp: get_system_heap gets the heap, mempool_release_block releases
 *   param_1; mbx_send_message heap_alloc's a block and frees it here on send failure
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Activation call (1141 callers): makes menu items visible. Gated by (param2&1) in classic ctor */

void heap_free(int param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,(void *)param_1);
  }
  return;
}
