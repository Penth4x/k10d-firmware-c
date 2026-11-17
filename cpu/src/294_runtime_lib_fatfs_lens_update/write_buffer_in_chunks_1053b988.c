/* @k10d write_buffer_in_chunks_1053b988 @ 0x1053b988
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Writes a buffer to a destination in chunks of up to 0x100 bytes, tracking zero-byte
 *   runs.
 * summary:
 *   The function iterates through a source buffer, calling write_buffer_via_virtual_method
 *   to write chunks of data. It scans each written chunk for zero bytes and calls
 *   insert_lens_fw_block when a run of zeros is detected or completed. It returns specific
 *   error codes if the underlying write operation fails.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_buffer_in_chunks_1053b988(int param_1,uint *param_2)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uintptr_t sp;
  int *piVar7;
  uint8_t auStack_58 [4];
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  int iStack_30;
  void *pvStack_2c;
  int *piStack_28;
  uint8_t auStack_24 [4];
  
  piVar7 = (int *)auStack_58;
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_34 = 0;
  uVar5 = 0;
  uStack_44 = *param_2;
  if (0x100 < uStack_44) {
    uStack_44 = 0x100;
  }
  uStack_4c = unsigned_divide(*(uint *)(param_1 + 0x4c),param_2[5]);
  uVar3 = compute_modulo_10544c28(*(uint *)(param_1 + 0x4c),param_2[5]);
  if (uVar3 != 0) {
    uStack_4c = uStack_4c + 1;
  }
  piStack_28 = (int *)param_2[9];
  piStack_28[1] = *param_2;
  pvStack_2c = (void *)piStack_28[2];
  uVar3 = 2;
  uVar6 = 2;
  iStack_30 = *(int *)(param_1 + 0x30);
  uStack_50 = *(uint *)(param_1 + 0x4c);
  uStack_54 = 0;
  while( true ) {
    pvVar1 = pvStack_2c;
    iVar4 = iStack_30;
    if (uStack_4c <= uStack_54) {
      if (uVar5 != 0) {
        insert_lens_fw_block((int)param_2,uStack_3c,uVar5);
      }
      pvVar1 = pvStack_2c;
      param_2[6] = uStack_34;
      if (*piStack_28 != *(int *)(param_1 + 0x30)) {
        *piStack_28 = *(int *)(param_1 + 0x30);
        iVar4 = *(int *)(param_1 + 0x30);
        uVar5 = piStack_28[1];
        *piVar7 = (int)auStack_24;
        iVar4 = write_buffer_via_virtual_method((void *)param_1,iVar4,uVar5,pvVar1,(int *)*piVar7);
        if (iVar4 != 0) {
          if (iVar4 == -6) {
            return 0xfffffffa;
          }
          return 0xfffffc7b;
        }
      }
      return 0;
    }
    uVar2 = uStack_44;
    if (uStack_4c - uStack_54 < uStack_44) {
      uVar2 = uStack_4c - uStack_54;
    }
    uStack_48 = uVar2;
    *piVar7 = (int)auStack_24;
    iVar4 = write_buffer_via_virtual_method((void *)param_1,iVar4,uVar2,pvVar1,(int *)*piVar7);
    if (iVar4 != 0) break;
    *piStack_28 = iStack_30;
    iStack_30 = iStack_30 + uStack_48;
    uStack_54 = uStack_54 + uStack_48;
    uStack_38 = param_2[5] * uStack_48;
    iVar4 = uVar6 << 1;
    for (; (uVar6 < uStack_38 && (uVar3 < uStack_50)); uVar3 = uVar3 + 1) {
      if (*(short *)(iVar4 + (int)pvStack_2c) == 0) {
        uStack_34 = uStack_34 + 1;
        if (uVar3 == uStack_40 + 1) {
          uVar5 = uVar5 + 1;
          uStack_40 = uVar3;
        }
        else {
          if (uVar5 != 0) {
            insert_lens_fw_block((int)param_2,uStack_3c,uVar5);
          }
          uStack_3c = uVar3;
          uStack_40 = uVar3;
          uVar5 = 1;
        }
      }
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + 2;
    }
    uVar6 = 0;
  }
  if (iVar4 == -6) {
    return 0xfffffffa;
  }
  return 0xfffffc7b;
}
