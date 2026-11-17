/* @k10d compute_lens_fw_block_offset_10542e98 @ 0x10542e98
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Calculates a byte offset within a lens firmware image using a block index and size,
 *   then passes it to a transfer routine.
 * summary:
 *   The function reads a block size (param_1+0xc) and a stride/step (param_1+0x14) from a
 *   context structure. It calls unsigned_divide to determine a base index (uVar1) from
 *   param_5, then computes a remainder offset (param_5 - uVar1 * block_size). This offset,
 *   along with param_6 and a calculated address (param_1+0x38 + (param_2-2)*stride +
 *   uVar1), is passed to transfer_buffer_with_alignment, which likely handles the actual
 *   data transfer or memory copy for the lens firmware update.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_lens_fw_block_offset_10542e98(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uintptr_t sp;
  int *piVar5;
  uint8_t auStack_28 [8];
  
  piVar5 = (int *)auStack_28;
  iVar2 = *(int *)(param_1 + 0x14);
  uVar4 = *(uint *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x38);
  uVar1 = unsigned_divide(param_5,uVar4);
  *piVar5 = param_5 - uVar1 * uVar4;
  piVar5[1] = param_6;
  transfer_buffer_with_alignment(param_1,iVar3 + (param_2 + -2) * iVar2 + uVar1,(void *)param_3,(void *)param_4,
               *piVar5,(int *)piVar5[1]);
  return;
}
