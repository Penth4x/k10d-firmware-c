/* @k10d write_swapped_data_range @ 0x1053c640
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Writes a range of data to a destination buffer, performing byte-swapping and updating
 *   progress counters.
 * summary:
 *   The function calculates a destination address using unsigned_divide and
 *   compute_modulo_10544c28, then calls allocate_lens_fw_segment to perform the write. It
 *   iterates through a range of addresses, byte-swapping data (likely for endianness
 *   conversion) and updating progress counters in param_2. The module context
 *   'lens_firmware_update' suggests this is part of a firmware update process, but the
 *   function itself only handles data transfer and byte-swapping.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_swapped_data_range(void *param_1,uint *param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uintptr_t sp;
  int *piVar6;
  uint8_t auStack_3c [4];
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint *local_28;
  
  piVar6 = (int *)auStack_3c;
  iStack_38 = *(int *)((int)param_1 + 0xc);
  uVar1 = unsigned_divide(param_3,param_2[5]);
  iVar3 = *(int *)((int)param_1 + 0x30);
  uStack_30 = compute_modulo_10544c28(param_3,param_2[5]);
  uStack_30 = uStack_30 << 2;
  *piVar6 = (int)&local_28;
  iVar3 = allocate_lens_fw_segment(param_1,param_2,iVar3 + uVar1,1,(int *)*piVar6);
  if (iVar3 == 0) {
    uVar4 = local_28[2];
    uVar1 = *(uint *)(uStack_30 + uVar4) >> 0x18 | (*(uint *)(uStack_30 + uVar4) & 0xff0000) >> 8 |
            (*(uint *)(uStack_30 + uVar4) & 0xff00) << 8 |
            (*(uint *)(uStack_30 + uVar4) & 0xf) << 0x18;
    if ((uVar1 == 0) || (uVar1 == *(uint *)((int)param_1 + 0x50))) {
      iVar3 = 0;
    }
    else {
      if (local_28[3] != 1) {
        local_28[3] = 1;
        param_2[1] = param_2[1] - local_28[1];
      }
      *(uint *)(uStack_30 + uVar4) =
           (param_5 & 0xff0000) >> 8 | param_5 >> 0x18 | (param_5 & 0xff00) << 8 | param_5 << 0x18;
      if (param_5 == 0) {
        param_2[6] = param_2[6] + 1;
      }
      else if (param_5 == *(uint *)((int)param_1 + 0x50)) {
        *(int *)((int)param_1 + 0x74) = *(int *)((int)param_1 + 0x74) + 1;
      }
      while (((1 < uVar1 && (uVar1 <= *(uint *)((int)param_1 + 0x4c))) && (uVar1 != param_4))) {
        uStack_2c = unsigned_divide(uVar1,param_2[5]);
        uStack_2c = *(int *)((int)param_1 + 0x30) + uStack_2c;
        uVar2 = compute_modulo_10544c28(uVar1,param_2[5]);
        uVar5 = uStack_2c;
        uVar2 = uVar2 << 2;
        uStack_30 = uVar2;
        if (*local_28 != uStack_2c) {
          *piVar6 = (int)&local_28;
          iVar3 = allocate_lens_fw_segment(param_1,param_2,uVar5,1,(int *)*piVar6);
          if (iVar3 != 0) {
            return iVar3;
          }
          uVar4 = local_28[2];
        }
        iStack_34 = 0;
        uVar5 = uVar1;
        while( true ) {
          iVar3 = iStack_34 + 1;
          uVar1 = *(uint *)(uVar2 + uVar4) >> 0x18 | (*(uint *)(uVar2 + uVar4) & 0xff0000) >> 8 |
                  (*(uint *)(uVar2 + uVar4) & 0xff00) << 8 |
                  (*(uint *)(uVar2 + uVar4) & 0xf) << 0x18;
          uVar2 = uVar2 + 4;
          iStack_34 = iVar3;
          if ((uVar1 != uVar5 + 1) || (*(uint *)((int)param_1 + 0x50) < uVar1)) break;
          if ((uVar1 == param_4) || (uVar5 = uVar1, local_28[1] * iStack_38 <= uVar2)) break;
        }
        if (local_28[3] != 1) {
          local_28[3] = 1;
          param_2[1] = param_2[1] - local_28[1];
        }
        fill_byte_array((void *)(uVar4 + uStack_30),0,iVar3 * 4);
        param_2[6] = param_2[6] + iVar3;
      }
      iVar3 = 0;
    }
  }
  return iVar3;
}
