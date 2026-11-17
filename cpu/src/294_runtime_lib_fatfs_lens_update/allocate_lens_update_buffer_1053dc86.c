/* @k10d allocate_lens_update_buffer_1053dc86 @ 0x1053dc86
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x204-byte buffer for lens firmware update and stores the pointer in the
 *   context structure.
 * summary:
 *   Calls alloc_pool2_block to allocate 0x204 bytes. On success, initializes the first word
 *   of the buffer to 0x100 and stores the pointer at offset 0x70 of the context object
 *   passed in param_1. Returns 0 on success or -12 (0xfffffff4) on allocation failure. The
 *   module context indicates this is part of the lens firmware update process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_lens_update_buffer_1053dc86(void *param_1)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  
  puVar1 = (uint32_t *)alloc_pool2_block((void *)0x204);
  if (puVar1 == (uint32_t *)0x0) {
    uVar2 = 0xfffffff4;
  }
  else {
    *puVar1 = 0x100;
    *(uint32_t **)((int)param_1 + 0x70) = puVar1;
    uVar2 = 0;
  }
  return uVar2;
}
