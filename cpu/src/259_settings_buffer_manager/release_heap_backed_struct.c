/* @k10d release_heap_backed_struct @ 0x104f4786
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 259_settings_buffer_manager (unit names are model-proposed)
 * purpose:
 *   Frees four heap-allocated sub-blocks referenced by a struct and optionally frees the
 *   struct itself.
 * summary:
 *   If param_1 is non-NULL and its byte at offset 0x40 is set, it releases the pointers
 *   stored at offsets 0x10, 0x14, 0x18, and 0x1c via mempool_release_block against the
 *   system heap, zeroing the corresponding fields and the 0x30-0x3c range. It then clears
 *   the 0x40 flag and, if bit 0 of param_2 is set, frees the struct itself with heap_free.
 *   The struct layout and subsystem role are not identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_heap_backed_struct(int param_1,uint param_2)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x40) != '\0') {
      pvVar1 = (void *)get_system_heap();
      mempool_release_block(pvVar1,*(void **)(param_1 + 0x10));
      *(uint32_t *)(param_1 + 0x30) = 0;
      *(uint32_t *)(param_1 + 0x10) = 0;
      pvVar1 = (void *)get_system_heap();
      mempool_release_block(pvVar1,*(void **)(param_1 + 0x14));
      *(uint32_t *)(param_1 + 0x34) = 0;
      *(uint32_t *)(param_1 + 0x14) = 0;
      pvVar1 = (void *)get_system_heap();
      mempool_release_block(pvVar1,*(void **)(param_1 + 0x18));
      *(uint32_t *)(param_1 + 0x38) = 0;
      *(uint32_t *)(param_1 + 0x18) = 0;
      pvVar1 = (void *)get_system_heap();
      mempool_release_block(pvVar1,*(void **)(param_1 + 0x1c));
      *(uint32_t *)(param_1 + 0x3c) = 0;
      *(uint32_t *)(param_1 + 0x1c) = 0;
    }
    *(uint8_t *)(param_1 + 0x40) = 0;
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
