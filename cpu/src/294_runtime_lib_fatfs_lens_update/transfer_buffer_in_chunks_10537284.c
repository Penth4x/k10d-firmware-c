/* @k10d transfer_buffer_in_chunks_10537284 @ 0x10537284
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Transfers data from a source buffer to a destination in chunks, managing offset and
 *   remaining size.
 * summary:
 *   The function iterates through a data buffer (param_3[0]) of size param_3[1], sending
 *   chunks to a destination. It uses lens_fw_get_block_ptr to prepare/receive data and
 *   memcpy_bytes to transmit it. The loop continues until the entire buffer is sent or an
 *   error occurs. The module context 'lens_firmware_update' suggests this is part of a
 *   firmware update process, but the function itself performs generic chunked data
 *   transfer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int transfer_buffer_in_chunks_10537284(void *param_1,uint param_2,uint32_t *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uintptr_t sp;
  uint uStack_28;
  int iStack_24;
  
  uVar4 = *(uint *)((int)param_1 + 0x10);
  uVar2 = param_2;
  if (uVar4 <= (uint)param_3[2]) {
    uVar2 = unsigned_divide(param_3[2],uVar4);
    iVar3 = dispatch_lens_fw_update_step_1053d2bc((int)param_1,param_2,uVar2,&uStack_28);
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar2 = uStack_28;
    if (*(uint *)((int)param_1 + 0x50) < uStack_28) {
      return -2;
    }
  }
  uStack_28 = uVar2;
  uVar2 = compute_modulo_10544c28(param_3[2],uVar4);
  pvVar5 = (void *)*param_3;
  while( true ) {
    iVar3 = lens_fw_get_block_ptr(param_1,uStack_28,&iStack_24);
    if (iVar3 < 0) {
      return iVar3;
    }
    iVar3 = param_3[1];
    if (uVar4 < uVar2 + iVar3) {
      iVar3 = uVar4 - uVar2;
    }
    memcpy_bytes(pvVar5,(void *)(iStack_24 + 8 + uVar2),iVar3);
    iVar1 = param_3[1];
    pvVar5 = (void *)((int)pvVar5 + iVar3);
    param_3[1] = iVar1 - iVar3;
    if ((iVar1 - iVar3 != 0) &&
       (iVar3 = dispatch_lens_fw_update_step_1053d2bc((int)param_1,uStack_28,1,&uStack_28), iVar3 != 0)) break;
    uVar2 = 0;
    if (param_3[1] == 0) {
      return 0;
    }
  }
  return iVar3;
}
