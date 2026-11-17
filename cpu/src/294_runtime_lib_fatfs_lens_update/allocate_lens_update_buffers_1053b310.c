/* @k10d allocate_lens_update_buffers_1053b310 @ 0x1053b310
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes memory structures for the lens firmware update process.
 * summary:
 *   The function reads a size parameter from the input structure (capped at 12) and
 *   allocates three heap blocks: a 20-byte header, a data buffer sized by the input, and a
 *   0x50-byte auxiliary buffer. It initializes the auxiliary buffer to zero and populates
 *   the header with pointers and metadata before calling scan_lens_fw_update_blocks to
 *   finalize the setup. On failure, it frees the allocated blocks and returns an error
 *   code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_lens_update_buffers_1053b310(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint32_t *puVar4;
  uint uVar5;
  uintptr_t sp;
  int *piVar6;
  uint8_t auStack_20 [4];
  uint8_t auStack_1c [4];
  
  piVar6 = (int *)auStack_20;
  param_2[5] = 0;
  param_2[4] = 0;
  uVar5 = *(uint *)(param_1 + 0x3c);
  if (0xc < uVar5) {
    uVar5 = 0xc;
  }
  *param_2 = uVar5;
  param_2[2] = *(int *)(param_1 + 0xc) * uVar5;
  uVar1 = alloc_pool2_block((void *)0x14);
  param_2[9] = uVar1;
  if (uVar1 == 0) {
    iVar2 = -0xc;
  }
  else {
    uVar1 = alloc_pool2_block(param_2[2]);
    param_2[3] = uVar1;
    if (uVar1 == 0) {
      release_heap_block_1047f9bc((void *)param_2[9]);
      iVar2 = -0xc;
    }
    else {
      pvVar3 = (void *)alloc_pool2_block((void *)0x50);
      param_2[7] = (uint)pvVar3;
      if (pvVar3 == (void *)0x0) {
        release_heap_block_1047f9bc((void *)param_2[9]);
        release_heap_block_1047f9bc((void *)param_2[3]);
        iVar2 = -0xc;
      }
      else {
        fill_byte_array(pvVar3,0,0x50);
        iVar2 = *(int *)(param_1 + 0x30);
        pvVar3 = (void *)param_2[3];
        *piVar6 = (int)auStack_1c;
        iVar2 = write_buffer_via_virtual_method((void *)param_1,iVar2,uVar5,pvVar3,(int *)*piVar6);
        puVar4 = (uint32_t *)param_2[9];
        if (iVar2 == 0) {
          *puVar4 = *(uint32_t *)(param_1 + 0x30);
          puVar4[1] = uVar5;
          puVar4[2] = param_2[3];
          puVar4[3] = 0;
          puVar4[4] = 0;
          iVar2 = scan_lens_fw_update_blocks(param_1,(int)param_2);
        }
        else {
          release_heap_block_1047f9bc(puVar4);
          release_heap_block_1047f9bc((void *)param_2[3]);
          release_heap_block_1047f9bc((void *)param_2[7]);
          if (iVar2 != -6) {
            iVar2 = -0x385;
          }
        }
      }
    }
  }
  return iVar2;
}
