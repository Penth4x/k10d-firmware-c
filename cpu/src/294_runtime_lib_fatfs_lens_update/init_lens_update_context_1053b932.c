/* @k10d init_lens_update_context_1053b932 @ 0x1053b932
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Initializes a lens update context by setting a field and calling two setup routines,
 *   freeing buffers on failure.
 * summary:
 *   The function writes a shifted value from param_1 into param_2[5], then calls
 *   allocate_lens_update_buffers_1053b1e4. If that returns 0, it calls
 *   write_buffer_in_chunks_1053b988; if that returns non-zero, it frees three pointers in
 *   param_2 (indices 9, 3, 7) via release_heap_block_1047f9bc. The cleanup pattern suggests
 *   param_2 holds allocated resources for a lens-related operation, but the specific
 *   firmware loading role is not confirmed by the code itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_lens_update_context_1053b932(int param_1,uint *param_2)

{
  int iVar1;
  
  param_2[5] = *(uint *)(param_1 + 0xc) >> 1;
  iVar1 = allocate_lens_update_buffers_1053b1e4(param_1,param_2);
  if ((iVar1 == 0) && (iVar1 = write_buffer_in_chunks_1053b988(param_1,param_2), iVar1 != 0)) {
    release_heap_block_1047f9bc((void *)param_2[9]);
    release_heap_block_1047f9bc((void *)param_2[3]);
    release_heap_block_1047f9bc((void *)param_2[7]);
  }
  return iVar1;
}
