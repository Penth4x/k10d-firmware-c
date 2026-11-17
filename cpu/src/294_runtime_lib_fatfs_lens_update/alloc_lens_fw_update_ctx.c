/* @k10d alloc_lens_fw_update_ctx @ 0x105381e0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Allocates and zero-initializes a 28-byte context structure for lens firmware update
 *   operations.
 * summary:
 *   Calls alloc_pool2_block to allocate 0x1c (28) bytes of memory. If successful, it zeroes
 *   the entire structure and stores the pointer at offset 100 of the object passed in
 *   param_1. Returns 0 on success or -12 (0xfffffff4) on allocation failure. The module
 *   context indicates this is part of the lens firmware update subsystem.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t alloc_lens_fw_update_ctx(void *param_1)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  
  puVar1 = (uint32_t *)alloc_pool2_block((void *)0x1c);
  if (puVar1 == (uint32_t *)0x0) {
    uVar2 = 0xfffffff4;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(uint16_t *)(puVar1 + 3) = 0;
    *(uint16_t *)((int)puVar1 + 0xe) = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(uint32_t **)((int)param_1 + 100) = puVar1;
    uVar2 = 0;
  }
  return uVar2;
}
