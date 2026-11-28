/* @k10d heap_free_2 @ 0x10459e72
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void heap_free_2(int block_ptr)

{
  void *heap_base;

  if (block_ptr != 0) {
    heap_base = (void *)get_system_heap();
    mempool_release_block(heap_base, (void *)block_ptr);
  }
  return;
}
