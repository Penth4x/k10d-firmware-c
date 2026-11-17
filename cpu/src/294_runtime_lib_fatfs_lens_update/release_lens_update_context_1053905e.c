/* @k10d release_lens_update_context_1053905e @ 0x1053905e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Releases the lens firmware update context object and its embedded sub-object at offset
 *   0x34.
 * summary:
 *   The function takes a context pointer and calls release_heap_block_1047f9bc on the
 *   pointer stored at offset 0x34, then calls release_heap_block_1047f9bc on the context
 *   pointer itself. This pattern is consistent with freeing a composite object and its
 *   owned member. It is called from three functions within the lens_firmware_update module,
 *   suggesting it is a cleanup or teardown routine for the lens CPU firmware update
 *   process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_lens_update_context_1053905e(void *param_1)

{
  release_heap_block_1047f9bc(*(void **)((int)param_1 + 0x34));
  release_heap_block_1047f9bc(param_1);
  return;
}
