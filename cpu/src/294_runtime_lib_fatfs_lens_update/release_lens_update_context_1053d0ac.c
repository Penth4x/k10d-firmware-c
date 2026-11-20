/* @k10d release_lens_update_context_1053d0ac @ 0x1053d0ac
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Frees the lens firmware update context object and its three internal sub-objects.
 * summary:
 *   Retrieves a pointer from offset 0x68 of the input structure. If non-null, it calls
 *   release_heap_block_1047f9bc on three sub-pointers at offsets 0xc, 0x1c, and 0x24 of
 *   that object, then calls release_heap_block_1047f9bc on the object itself. Finally, it
 *   nulls the pointer at offset 0x68. This pattern is consistent with a destructor or
 *   cleanup routine for a lens firmware update state structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t release_lens_update_context_1053d0ac(int param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x68);
  if (pvVar1 != 0) {
    release_heap_block_1047f9bc(*(void **)((int)pvVar1 + 0xc));
    release_heap_block_1047f9bc(*(void **)((int)pvVar1 + 0x1c));
    release_heap_block_1047f9bc(*(void **)((int)pvVar1 + 0x24));
    release_heap_block_1047f9bc(pvVar1);
    *(uint32_t *)(param_1 + 0x68) = 0;
  }
  return 0;
}
