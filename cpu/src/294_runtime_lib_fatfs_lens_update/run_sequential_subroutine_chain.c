/* @k10d run_sequential_subroutine_chain @ 0x1053c3ca
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Executes a three-step sequence of subroutines, releasing allocated resources if any
 *   step fails.
 * summary:
 *   The function sets a field in param_2 and calls allocate_lens_update_buffers_1053b1e4,
 *   then fetch_and_scan_buffer_segments, and finally transfer_data_in_chunks_1053cb50 in
 *   sequence. If any call returns a non-zero error, it calls release_heap_block_1047f9bc to
 *   free three pointers stored in param_2 (indices 3, 7, and 9) before returning the error
 *   code. The specific role of the subroutines is not determinable from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int run_sequential_subroutine_chain(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uintptr_t sp;
  int *piVar3;
  uint8_t auStack_1c [4];
  uint8_t auStack_18 [4];
  
  piVar3 = (int *)auStack_1c;
  param_2[5] = *(uint *)(param_1 + 0xc) >> 2;
  iVar1 = allocate_lens_update_buffers_1053b1e4(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = fetch_and_scan_buffer_segments(param_1,param_2);
    if (iVar1 == 0) {
      uVar2 = *(uint *)(param_1 + 0x28);
      *piVar3 = (int)auStack_18;
      iVar1 = transfer_data_in_chunks_1053cb50(param_1,param_2,uVar2,1,(uint *)*piVar3);
      if (iVar1 != 0) {
        release_heap_block_1047f9bc((void *)param_2[9]);
        release_heap_block_1047f9bc((void *)param_2[3]);
        release_heap_block_1047f9bc((void *)param_2[7]);
        if ((iVar1 != -6) && (iVar1 != -0x385)) {
          iVar1 = -0x38e;
        }
      }
    }
    else {
      release_heap_block_1047f9bc((void *)param_2[9]);
      release_heap_block_1047f9bc((void *)param_2[3]);
      release_heap_block_1047f9bc((void *)param_2[7]);
    }
  }
  return iVar1;
}
