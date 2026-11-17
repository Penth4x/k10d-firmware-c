/* @k10d allocate_lens_update_buffer_1053d014 @ 0x1053d014
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x28-byte buffer and dispatches to a type-specific lens firmware update
 *   routine based on the value at param_1+0x48.
 * summary:
 *   The function calls alloc_pool2_block to allocate 0x28 bytes (40 bytes). If allocation
 *   fails, it returns -0xc. On success, it zeroes the buffer via fill_byte_array and reads
 *   a type identifier from offset 0x48 of the context structure. It then branches to one of
 *   three callees (run_sequential_subroutine_chain, init_lens_update_context_1053b932, or
 *   allocate_lens_update_buffers_1053b310) depending on whether the type is 4, 2, or 1. If
 *   the selected routine returns 0, the buffer pointer is stored at offset 0x68 of the
 *   context; otherwise, the buffer is freed via release_heap_block_1047f9bc. This fits the
 *   'lens_firmware_update' module context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_lens_update_buffer_1053d014(void *param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)alloc_pool2_block((void *)0x28);
  if (puVar1 == (uint *)0x0) {
    iVar2 = -0xc;
  }
  else {
    fill_byte_array(puVar1,0,0x28);
    iVar2 = *(int *)((int)param_1 + 0x48);
    *(uint32_t *)((int)param_1 + 0x74) = 0;
    if (iVar2 == 4) {
      iVar2 = run_sequential_subroutine_chain((int)param_1,puVar1);
    }
    else if (iVar2 == 2) {
      iVar2 = init_lens_update_context_1053b932((int)param_1,puVar1);
    }
    else if (iVar2 == 1) {
      iVar2 = allocate_lens_update_buffers_1053b310((int)param_1,puVar1);
    }
    else {
      iVar2 = -0x321;
    }
    if (iVar2 == 0) {
      *(uint **)((int)param_1 + 0x68) = puVar1;
      iVar2 = 0;
    }
    else {
      release_heap_block_1047f9bc(puVar1);
    }
  }
  return iVar2;
}
