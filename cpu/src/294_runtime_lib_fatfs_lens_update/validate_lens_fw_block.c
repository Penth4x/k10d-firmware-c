/* @k10d validate_lens_fw_block @ 0x105371b0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Checks if a lens firmware block fits in the buffer and prepares parameters for the
 *   update operation.
 * summary:
 *   The function verifies that the size of the data block (param_2[1] + param_2[2]) does
 *   not exceed the buffer capacity derived from param_1. It calls unsigned_divide and
 *   compute_modulo_10544c28 to compute offsets or addresses, then invokes
 *   write_aligned_data_block to perform the actual operation. It returns specific error
 *   codes (-0x32a for size overflow, -0x388 for operation failure or partial write) or 0 on
 *   success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int validate_lens_fw_block(void *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uintptr_t sp;
  uint *puVar7;
  uint8_t auStack_30 [8];
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  uint local_1c;
  
  puVar7 = (uint *)auStack_30;
  uVar6 = *(uint *)((int)param_1 + 0xc);
  uVar5 = param_2[2];
  iStack_28 = param_2[1];
  if ((uint)(*(int *)((int)param_1 + 0x1c) * 0x20) < iStack_28 + uVar5) {
    iVar2 = -0x32a;
  }
  else {
    uVar3 = unsigned_divide(uVar5,uVar6);
    iStack_20 = *(int *)((int)param_1 + 0x34) + uVar3;
    uStack_24 = compute_modulo_10544c28(uVar5,uVar6);
    iVar4 = *param_2;
    *puVar7 = uStack_24;
    iVar1 = iStack_20;
    iVar2 = iStack_28;
    puVar7[1] = (uint)&local_1c;
    iVar2 = write_aligned_data_block((int)param_1,iVar1,iVar4,iVar2,*puVar7,(int *)puVar7[1]);
    if (iVar2 == 0) {
      if (local_1c < (uint)param_2[1]) {
        iVar2 = -0x388;
      }
    }
    else if (iVar2 == -5) {
      iVar2 = -0x388;
    }
  }
  return iVar2;
}
