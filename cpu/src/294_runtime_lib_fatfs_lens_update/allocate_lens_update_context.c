/* @k10d allocate_lens_update_context @ 0x10542852
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a two-block memory structure for the lens firmware update
 *   process.
 * summary:
 *   The function allocates a 0x14-byte header and a variable-sized payload (size derived
 *   from param_1+0x10) using alloc_pool2_block. It links these blocks, stores the header
 *   pointer in param_1+0x6c, and calls clear_lens_fw_update_info to initialize the update
 *   state. Returns 0 on success or -12 (0xfffffff4) on allocation failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_lens_update_context(void *param_1)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)param_1 + 0x10) + 8;
  puVar1 = (uint32_t *)alloc_pool2_block((void *)0x14);
  if (puVar1 == (uint32_t *)0x0) {
    uVar2 = 0xfffffff4;
  }
  else {
    iVar3 = alloc_pool2_block((void *)(iVar4));
    puVar1[2] = iVar3;
    if (iVar3 == 0) {
      release_heap_block_1047f9bc(puVar1);
      uVar2 = 0xfffffff4;
    }
    else {
      puVar1[1] = iVar4;
      *puVar1 = 1;
      *(uint32_t **)((int)param_1 + 0x6c) = puVar1;
      clear_lens_fw_update_info((int)param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}
