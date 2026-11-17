/* @k10d read_data_into_buffer @ 0x1053d3a8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x40-byte buffer and fills it by repeatedly calling a read helper until the
 *   requested size is met.
 * summary:
 *   The function initializes a structure at param_2, allocating a 0x40-byte buffer via
 *   alloc_pool2_block. It then enters a loop calling dispatch_lens_fw_update to fetch data
 *   chunks, writing them into the allocated buffer and updating a total size counter. If
 *   the allocation fails, it delegates to dispatch_lens_fw_update_step_1053d2bc. The
 *   function returns an error code if the read loop fails or if the requested size is not
 *   met.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int read_data_into_buffer(int param_1,int param_2)

{
  uint32_t uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uintptr_t sp;
  uint uStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  int iStack_c;
  
  iStack_10 = 0;
  *(uint32_t *)(param_2 + 0x28) = 0;
  uVar1 = alloc_pool2_block((void *)0x40);
  *(uint32_t *)(param_2 + 0x2c) = uVar1;
  if (*(int *)(param_2 + 0x2c) == 0) {
    uVar2 = unsigned_divide(*(int *)(param_2 + 0x10) - 1,*(uint *)(param_1 + 0x10));
    iVar3 = dispatch_lens_fw_update_step_1053d2bc(param_1,*(uint *)(param_2 + 0x14),uVar2,(uint *)(param_2 + 0x18));
  }
  else {
    fill_byte_array(*(void **)(param_2 + 0x2c),0,0x40);
    uVar2 = unsigned_divide(*(uint *)(param_2 + 0x10),*(uint *)(param_1 + 0x10));
    uVar4 = compute_modulo_10544c28(*(uint *)(param_2 + 0x10),*(uint *)(param_1 + 0x10));
    if (uVar4 != 0) {
      uVar2 = uVar2 + 1;
    }
    uStack_1c = *(uint *)(param_2 + 0x14);
    iVar3 = iStack_10 << 3;
    while (uVar2 != 0) {
      iStack_c = dispatch_lens_fw_update(param_1,uVar2,&uStack_1c);
      if (iStack_c != 0) {
        release_heap_block_1047f9bc(*(void **)(param_2 + 0x2c));
        *(uint32_t *)(param_2 + 0x2c) = 0;
        return iStack_c;
      }
      if (iVar3 < 0x40) {
        *(uint *)(iVar3 + *(int *)(param_2 + 0x2c)) = uStack_1c;
        *(int *)(*(int *)(param_2 + 0x2c) + iVar3 + 4) = iStack_18;
        *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + iStack_18;
        iVar3 = iVar3 + 8;
        if (iVar3 == 0x40) {
          *(uint *)(param_2 + 0x30) = uStack_14;
        }
      }
      uVar2 = uVar2 - iStack_18;
      iStack_c = 0;
      if (*(uint *)(param_1 + 0x50) < uStack_14) {
        if (uVar2 != 0) {
          return -0x390;
        }
        *(uint *)(param_2 + 0x18) = uStack_1c + iStack_18 + -1;
      }
      else {
        uStack_1c = uStack_14;
      }
    }
    if (*(int *)(param_2 + 0x18) == 0) {
      iVar3 = -0x390;
    }
    else {
      iVar3 = 0;
    }
  }
  return iVar3;
}
