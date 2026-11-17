/* @k10d allocate_lens_update_buffers_1053b1e4 @ 0x1053b1e4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes memory structures for lens firmware update data based on
 *   calculated segment count.
 * summary:
 *   Calculates the number of data segments (capped at 0x1800) using helper functions on the
 *   lens object. Allocates three buffers: a header array (0x14 bytes per segment), a data
 *   buffer (segment count * segment size), and a 0x50-byte status/control block.
 *   Initializes the header array with pointers to the data buffer and zeroed flags. Returns
 *   0 on success or -12 (0xfffffff4) on allocation failure, freeing any partially allocated
 *   buffers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_lens_update_buffers_1053b1e4(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = unsigned_divide(*(uint *)(param_1 + 0x4c),param_2[5]);
  uVar2 = compute_modulo_10544c28(*(uint *)(param_1 + 0x4c),param_2[5]);
  if (uVar2 != 0) {
    uVar1 = uVar1 + 1;
  }
  uVar7 = *(uint *)(param_1 + 0xc);
  uVar2 = unsigned_divide(0x1800,uVar7);
  if (uVar1 < uVar2) {
    uVar2 = uVar1;
  }
  *param_2 = uVar2;
  param_2[2] = uVar7 * uVar2;
  param_2[1] = uVar2;
  uVar1 = alloc_pool2_block((void *)(uVar2 * 0x14));
  param_2[9] = uVar1;
  if (param_2[9] == 0) {
    uVar3 = 0xfffffff4;
  }
  else {
    uVar1 = alloc_pool2_block((void *)(param_2[2]));
    param_2[3] = uVar1;
    if (param_2[3] == 0) {
      release_heap_block_1047f9bc((void *)param_2[9]);
      uVar3 = 0xfffffff4;
    }
    else {
      uVar1 = alloc_pool2_block((void *)0x50);
      param_2[7] = uVar1;
      if (param_2[7] == 0) {
        release_heap_block_1047f9bc((void *)param_2[9]);
        release_heap_block_1047f9bc((void *)param_2[3]);
        uVar3 = 0xfffffff4;
      }
      else {
        fill_byte_array((void *)param_2[7],0,0x50);
        uVar6 = param_2[9];
        *(uint *)(uVar6 + 4) = uVar2;
        iVar4 = 0;
        iVar5 = 0;
        for (uVar1 = 0; uVar1 < uVar2; uVar1 = uVar1 + 1) {
          *(uint *)(uVar6 + iVar4 + 8) = param_2[3] + iVar5;
          *(uint32_t *)(uVar6 + iVar4 + 0xc) = 0;
          iVar5 = iVar5 + uVar7;
          iVar4 = iVar4 + 0x14;
        }
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}
