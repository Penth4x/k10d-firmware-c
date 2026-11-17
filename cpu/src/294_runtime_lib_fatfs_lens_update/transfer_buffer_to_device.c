/* @k10d transfer_buffer_to_device @ 0x105375a0
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Transfers a buffer to a peripheral device in chunks, handling offset alignment and
 *   error recovery.
 * summary:
 *   The function iterates through a data buffer (param_1) and sends it to a device in
 *   chunks determined by lens_fw_get_block_ptr. It uses memcpy_bytes to perform the actual
 *   data copy and compute_indexed_lookup_value to commit the transfer. On error, it may
 *   call transfer_buffer_in_chunks_10537882 to adjust state or retry. The specific target
 *   device (lens, companion chip, etc.) is not explicitly identified in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int transfer_buffer_to_device(void *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uintptr_t sp;
  uint8_t *puVar5;
  int *piVar6;
  uint8_t auStack_78 [8];
  void *pvStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint auStack_64 [2];
  void *pvStack_5c;
  uint uStack_58;
  uint32_t uStack_54;
  int iStack_50;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  void *pvStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  
  piVar6 = (int *)auStack_78;
  puVar5 = auStack_78;
  uStack_44 = *(uint *)((int)param_1 + 0x10);
  if (uStack_44 < (uint)param_3[2]) {
    uVar1 = unsigned_divide(param_3[2],uStack_44);
    iVar2 = dispatch_lens_fw_update_step_1053d2bc((int)param_1,param_2,uVar1 - 1,&uStack_34);
    if (iVar2 != 0) {
      return iVar2;
    }
    uStack_3c = compute_modulo_10544c28(param_3[2],uStack_44);
    pvStack_40 = (void *)*param_3;
    uVar1 = param_3[1];
    piVar6 = (int *)puVar5;
  }
  else {
    uStack_3c = 0;
    pvStack_40 = (void *)(*param_3 + (uStack_44 - param_3[2]));
    uVar1 = param_3[1] - (uStack_44 - param_3[2]);
    uStack_34 = param_2;
  }
  iVar2 = dispatch_lens_fw_update_step_1053d2bc((int)param_1,uStack_34,1,&uStack_2c);
  if (iVar2 == 0) {
    pvStack_70 = pvStack_40;
    uStack_68 = uStack_3c;
    uStack_6c = uVar1;
    uStack_38 = uVar1;
    do {
      uVar4 = uStack_44;
      if (uVar1 == 0) {
LAB_105377b6:
        uStack_6c = uStack_38 - uVar1;
        if (uVar1 != 0) {
          pvStack_5c = pvStack_40;
          uStack_54 = 0;
          uStack_58 = uVar1;
          uStack_48 = unsigned_divide(uVar1,uStack_44);
          uVar1 = compute_modulo_10544c28(uVar1,uVar4);
          if (uVar1 != 0) {
            uStack_48 = uStack_48 + 1;
          }
          uVar1 = uStack_48;
          *piVar6 = (int)&uStack_30;
          piVar6[1] = 1;
          iVar2 = send_data_chunk_with_retry(param_1,uVar1,(int *)&pvStack_5c,&iStack_50,(int *)*piVar6,
                               *(byte *)((int)piVar6 + 7));
          if (iVar2 != 0) {
            if (iVar2 == -6) {
              return -6;
            }
            if (iStack_4c != 0) {
              dispatch_lens_fw_update_step_1053d138(param_1,uStack_30,*(uint32_t *)((int)param_1 + 0x54),0);
            }
            if (uStack_6c == 0) {
              return iVar2;
            }
            iVar3 = transfer_buffer_in_chunks_10537882(param_1,param_2,param_3[2],(int *)&pvStack_70);
            if (iVar3 == 0) {
              return iVar2;
            }
            return -999;
          }
          iVar2 = dispatch_lens_update_step((int)param_1,uStack_34,uStack_30);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
        return 0;
      }
      if ((uStack_2c < 2) || (*(uint *)((int)param_1 + 0x4c) < uStack_2c)) {
        if (uStack_2c <= *(uint *)((int)param_1 + 0x50)) {
          return -0x38f;
        }
        goto LAB_105377b6;
      }
      iVar2 = lens_fw_get_block_ptr(param_1,uStack_2c,&iStack_24);
      if (iVar2 != 0) {
        if (uStack_38 <= uVar1) {
          return iVar2;
        }
        return -999;
      }
      uVar4 = uVar1;
      if (uStack_44 < uStack_3c + uVar1) {
        uVar4 = uStack_44 - uStack_3c;
      }
      memcpy_bytes((void *)(iStack_24 + 8 + uStack_3c),pvStack_40,uVar4);
      auStack_64[0] = uStack_2c;
      auStack_64[1] = 1;
      iVar2 = compute_indexed_lookup_value((int)param_1,iStack_24 + 8,(int *)auStack_64,&uStack_28);
      if (iVar2 != 0) {
        if (iVar2 == -6) {
          return -6;
        }
        iVar2 = transmit_data_block_with_retry(param_1,iStack_24 + 8,uStack_2c,(int *)&uStack_30);
        if (iVar2 != 0) {
          if (uStack_38 <= uVar1) {
            return iVar2;
          }
          return -999;
        }
        iVar2 = dispatch_lens_update_step((int)param_1,uStack_34,uStack_30);
        if (iVar2 != 0) {
          return iVar2;
        }
        uStack_2c = uStack_30;
      }
      pvStack_40 = (void *)((int)pvStack_40 + uVar4);
      uStack_3c = 0;
      uVar1 = uVar1 - uVar4;
      uStack_34 = uStack_2c;
      iVar2 = dispatch_lens_fw_update_step_1053d2bc((int)param_1,uStack_2c,1,&uStack_2c);
    } while (iVar2 == 0);
    if (uVar1 < uStack_38) {
      iVar2 = -999;
    }
  }
  return iVar2;
}
