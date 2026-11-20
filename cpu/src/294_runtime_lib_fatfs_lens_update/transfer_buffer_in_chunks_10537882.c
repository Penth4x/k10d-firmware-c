/* @k10d transfer_buffer_in_chunks_10537882 @ 0x10537882
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Transfers a buffer in chunks using a prepare, copy, and commit sequence.
 * summary:
 *   The function iterates over a data buffer (param_4) in chunks. For each chunk, it calls
 *   dispatch_lens_fw_update_step_1053d2bc to prepare a transfer, lens_fw_get_block_ptr to
 *   get a destination address, memcpy_bytes to copy data, and compute_indexed_lookup_value
 *   to commit the transfer. It updates the buffer pointer and remaining size until the
 *   transfer is complete.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int transfer_buffer_in_chunks_10537882(void *param_1,uint param_2,uint param_3,int *param_4)

{
  struct {
    uint uStack_28;
    uint uStack_24;
    int iStack_20;
  } _cfg_28;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uintptr_t sp;
  uint auStack_40 [4];
  uint uStack_30;
  auStack_40[2] = *param_4;
  for (iVar3 = (((uint)param_4[1] >> 5) - 1) * 0x20; -1 < iVar3; iVar3 = iVar3 + -0x20) {
    *(uint8_t *)(iVar3 + auStack_40[2]) = 0xe5;
  }
  uVar5 = *(uint *)((int)param_1 + 0x10);
  uVar1 = unsigned_divide(param_3,uVar5);
  iVar3 = dispatch_lens_fw_update_step_1053d2bc((int)param_1,param_2,uVar1,&_cfg_28.uStack_28);
  if (iVar3 == 0) {
    iVar3 = param_4[1];
    uStack_30 = uVar5;
    do {
      if ((_cfg_28.uStack_28 < 2) || (*(uint *)((int)param_1 + 0x4c) < _cfg_28.uStack_28)) {
        if (_cfg_28.uStack_28 <= *(uint *)((int)param_1 + 0x50)) {
          return -0x38f;
        }
        break;
      }
      iVar2 = lens_fw_get_block_ptr(param_1,_cfg_28.uStack_28,&_cfg_28.iStack_20);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar4 = param_4[2];
      iVar2 = iVar3;
      if (uStack_30 < (uint)(iVar4 + iVar3)) {
        iVar2 = uStack_30 - iVar4;
      }
      memcpy_bytes((void *)(_cfg_28.iStack_20 + 8 + iVar4),(void *)*param_4,iVar2);
      auStack_40[0] = _cfg_28.uStack_28;
      auStack_40[1] = 1;
      iVar4 = compute_indexed_lookup_value((int)param_1,_cfg_28.iStack_20 + 8,(int *)auStack_40,&_cfg_28.uStack_24);
      if (iVar4 != 0) {
        return iVar4;
      }
      *param_4 = *param_4 + iVar2;
      iVar3 = iVar3 - iVar2;
      param_4[2] = 0;
      iVar2 = dispatch_lens_fw_update_step_1053d2bc((int)param_1,_cfg_28.uStack_28,1,&_cfg_28.uStack_28);
      if (iVar2 != 0) {
        return iVar2;
      }
    } while (iVar3 != 0);
    iVar3 = 0;
  }
  return iVar3;
}
