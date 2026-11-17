/* @k10d allocate_lens_fw_buffer_1053d612 @ 0x1053d612
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Allocates a contiguous block of memory from a lens firmware update buffer pool,
 *   returning the pointer and size.
 * summary:
 *   The function manages a pool of memory blocks (up to 10, each 8 bytes: pointer + size)
 *   located at offset 0x68 of the context object. It first attempts to find a free block
 *   large enough for param_2. If none is found, it calls iterate_struct_array_entries and
 *   dispatch_lens_fw_update_step_1053d0fa, likely to expand the pool or free unused blocks,
 *   then retries. Upon success, it updates the block's size, the pool's total free count
 *   (puVar7[6]), and returns the allocated pointer and size in param_3. This is a standard
 *   memory allocator for the lens firmware update process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_lens_fw_buffer_1053d612(void *param_1,uint param_2,uint32_t *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  
  puVar7 = *(uint **)((int)param_1 + 0x68);
  if (puVar7[6] == 0) {
    iVar5 = -0x1c;
  }
  else {
    uVar6 = puVar7[7];
    while( true ) {
      iVar5 = 0;
      uVar4 = 0;
      iVar8 = 0;
      iVar3 = 0;
      iVar2 = 0;
      do {
        if (*(int *)(uVar6 + iVar2 + 4) != 0) {
          if (param_2 <= *(uint *)(uVar6 + iVar2 + 4)) {
            *param_3 = *(uint32_t *)(iVar3 * 8 + uVar6);
            param_3[1] = param_2;
            piVar1 = (int *)(iVar3 * 8 + uVar6);
            *piVar1 = *piVar1 + param_2;
            iVar8 = uVar6 + iVar3 * 8;
            *(uint *)(iVar8 + 4) = *(int *)(iVar8 + 4) - param_2;
            puVar7[6] = puVar7[6] - param_2;
            return 0;
          }
          if (uVar4 < *(uint *)(uVar6 + iVar2 + 4)) {
            uVar4 = *(uint *)(uVar6 + iVar2 + 4);
            iVar8 = iVar3;
          }
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 8;
      } while (iVar3 < 10);
      if (uVar4 != 0) break;
      iVar8 = iterate_struct_array_entries(param_1,puVar7);
      if (iVar8 != 0) {
        return iVar8;
      }
      iVar8 = dispatch_lens_fw_update_step_1053d0fa(param_1,puVar7);
      if (iVar8 != 0) {
        return iVar8;
      }
    }
    *param_3 = *(uint32_t *)(iVar8 * 8 + uVar6);
    param_3[1] = uVar4;
    piVar1 = (int *)(iVar8 * 8 + uVar6);
    *piVar1 = *piVar1 + uVar4;
    iVar8 = uVar6 + iVar8 * 8;
    *(uint *)(iVar8 + 4) = *(int *)(iVar8 + 4) - uVar4;
    puVar7[6] = puVar7[6] - uVar4;
  }
  return iVar5;
}
