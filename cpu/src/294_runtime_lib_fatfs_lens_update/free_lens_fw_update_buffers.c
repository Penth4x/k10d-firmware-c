/* @k10d free_lens_fw_update_buffers @ 0x105428b4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Releases two heap-allocated buffers referenced by a lens firmware update context
 *   structure.
 * summary:
 *   Checks if the pointer at offset 0x6c of the context structure is non-null. If so, it
 *   calls release_heap_block_1047f9bc on the pointer at offset 8 of that sub-structure and
 *   then on the sub-structure pointer itself, effectively freeing two memory allocations.
 *   Finally, it nulls out the pointer at offset 0x6c to prevent double-free. The module
 *   context indicates this is part of the lens firmware update process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t free_lens_fw_update_buffers(void *param_1)

{
  if (*(int *)((int)param_1 + 0x6c) != 0) {
    release_heap_block_1047f9bc(*(void **)(*(int *)((int)param_1 + 0x6c) + 8));
    release_heap_block_1047f9bc(*(void **)((int)param_1 + 0x6c));
    *(uint32_t *)((int)param_1 + 0x6c) = 0;
  }
  return 0;
}
