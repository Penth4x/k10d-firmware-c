/* @k10d release_object_resources_1052cfd2 @ 0x1052cfd2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Frees heap and memory-pool blocks owned by an object and nulls the owning pointers.
 * summary:
 *   Calls delete_object_and_members on the pointer at offset 0x1f4 with argument 3, then
 *   frees the heap block at offset 0x250 via heap_free if non-NULL. Releases three memory-
 *   pool blocks at offsets 0x1f8, 0x1fc, and 0x200 through mempool_release_block on the
 *   system heap, and invokes virtual slot 2 (release_heap_block_and_clear_104bcd58) on the
 *   sub-object at offset 0x1dc. Finally zeroes the five owning pointers to prevent double-
 *   free.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_resources_1052cfd2(int param_1)

{
  void *pvVar1;
  
  delete_object_and_members(*(uint32_t **)(param_1 + 500),3);
  if (*(int *)(param_1 + 0x250) != 0) {
    heap_free(*(int *)(param_1 + 0x250));
  }
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,*(void **)(param_1 + 0x1f8));
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,*(void **)(param_1 + 0x1fc));
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,*(void **)(param_1 + 0x200));
  release_heap_block_and_clear_104bcd58((cls_105b934c *)(param_1 + 0x1dc));
  *(uint32_t *)(param_1 + 500) = 0;
  *(uint32_t *)(param_1 + 0x250) = 0;
  *(uint32_t *)(param_1 + 0x1f8) = 0;
  *(uint32_t *)(param_1 + 0x1fc) = 0;
  *(uint32_t *)(param_1 + 0x200) = 0;
  return;
}
