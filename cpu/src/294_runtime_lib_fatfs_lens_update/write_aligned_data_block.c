/* @k10d write_aligned_data_block @ 0x1053dce0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Writes a data block to a device, splitting the operation into unaligned and aligned
 *   segments based on the current offset.
 * summary:
 *   The function calculates the alignment of the starting offset (param_5) using
 *   unsigned_divide and compute_modulo_10544c28. It splits the write into up to three
 *   parts: an initial unaligned segment, a middle aligned segment (using
 *   transfer_data_via_virtual_method), and a final unaligned segment (using
 *   write_two_buffer_blocks). It updates *param_6 with the number of bytes successfully
 *   written and returns an error code if any part fails. The specific device or subsystem
 *   is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_aligned_data_block(int param_1,int param_2,int param_3,int param_4,uint param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint *puVar4;
  uint8_t auStack_38 [8];
  uint uStack_30;
  uint uStack_2c;
  uint local_28;
  
  puVar4 = (uint *)auStack_38;
  iVar2 = 0;
  *param_6 = 0;
  if (param_4 == 0) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0xc);
  local_28 = param_5 + param_4;
  uStack_30 = unsigned_divide(local_28,uVar3);
  uVar1 = compute_modulo_10544c28(local_28,uVar3);
  if (uVar1 != 0) {
    uStack_30 = uStack_30 + 1;
  }
  if (*(uint *)(param_1 + 0x20) < uStack_30 + param_2) {
    return -0x16;
  }
  uVar1 = param_4;
  uStack_2c = uVar3;
  if (param_5 != 0) {
    if (local_28 < uVar3) {
      *puVar4 = param_4;
      puVar4[1] = param_5;
      iVar2 = write_two_buffer_blocks(param_1,param_2,param_2,(void *)param_3,*puVar4,puVar4[1]);
      if (iVar2 == 0) {
        *param_6 = param_4;
        return 0;
      }
      goto LAB_1053dde6;
    }
    local_28 = uVar3 - param_5;
    *puVar4 = local_28;
    puVar4[1] = param_5;
    iVar2 = write_two_buffer_blocks(param_1,param_2,param_2,(void *)param_3,*puVar4,puVar4[1]);
    if (iVar2 < 0) goto LAB_1053dde6;
    param_2 = param_2 + 1;
    param_3 = param_3 + local_28;
    uVar1 = param_4 - local_28;
  }
  uVar3 = unsigned_divide(uVar1,uStack_2c);
  uStack_30 = uVar3;
  if (uVar3 != 0) {
    *puVar4 = (uint)&local_28;
    iVar2 = transfer_data_via_virtual_method(param_1,param_2,uVar3,param_3,(int *)*puVar4);
    uVar1 = uVar1 - local_28 * uStack_2c;
    param_3 = param_3 + local_28 * uStack_2c;
    param_2 = param_2 + local_28;
    if (iVar2 < 0) goto LAB_1053dde6;
  }
  if (uVar1 != 0) {
    *puVar4 = uVar1;
    puVar4[1] = 0;
    iVar2 = write_two_buffer_blocks(param_1,param_2,param_2,(void *)param_3,*puVar4,puVar4[1]);
    if (-1 < iVar2) {
      uVar1 = 0;
    }
  }
LAB_1053dde6:
  *param_6 = param_4 - uVar1;
  return iVar2;
}
