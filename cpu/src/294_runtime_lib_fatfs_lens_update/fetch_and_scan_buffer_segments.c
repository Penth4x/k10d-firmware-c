/* @k10d fetch_and_scan_buffer_segments @ 0x1053c478
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Fetches data into a buffer in chunks and reports the offsets and lengths of non-zero
 *   segments.
 * summary:
 *   The function iterates through a buffer (param_2[9]) in chunks capped at 0x100 bytes,
 *   calling write_buffer_via_virtual_method to populate the memory. After each fetch, it
 *   scans the chunk for zero-valued words and calls insert_lens_fw_block to report the
 *   offset and length of each contiguous non-zero run. It returns 0 on success or specific
 *   error codes (0xfffffffa, 0xfffffc7b) if the transfer call fails.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1053c534) overlaps instruction at (ram,0x1053c532)
    */

uint32_t fetch_and_scan_buffer_segments(int param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uintptr_t sp;
  int *piVar7;
  uint8_t auStack_4c [4];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  uint uStack_34;
  int iStack_30;
  int *piStack_2c;
  int *piStack_28;
  uint8_t auStack_24 [4];
  
  piVar7 = (int *)auStack_4c;
  uStack_34 = 0;
  uStack_3c = *param_2;
  if (0x100 < uStack_3c) {
    uStack_3c = 0x100;
  }
  uStack_44 = unsigned_divide(*(uint *)(param_1 + 0x4c),param_2[5]);
  uVar1 = compute_modulo_10544c28(*(uint *)(param_1 + 0x4c),param_2[5]);
  if (uVar1 != 0) {
    uStack_44 = uStack_44 + 1;
  }
  piStack_28 = (int *)param_2[9];
  piStack_28[1] = *param_2;
  piVar6 = (int *)piStack_28[2];
  iStack_30 = *(int *)(param_1 + 0x30);
  uStack_48 = *(uint *)(param_1 + 0x4c);
  uVar1 = 0;
  while( true ) {
    iVar3 = iStack_30;
    if (uStack_44 <= uVar1) {
      param_2[6] = uStack_34;
      param_2[8] = uStack_34;
      if (*piStack_28 != *(int *)(param_1 + 0x30)) {
        *piStack_28 = *(int *)(param_1 + 0x30);
        iVar3 = *(int *)(param_1 + 0x30);
        uVar1 = piStack_28[1];
        *piVar7 = (int)auStack_24;
        iVar3 = write_buffer_via_virtual_method((void *)param_1,iVar3,uVar1,piVar6,(int *)*piVar7);
        if (iVar3 != 0) {
          if (iVar3 == -6) {
            return 0xfffffffa;
          }
          return 0xfffffc7b;
        }
      }
      return 0;
    }
    uVar5 = uStack_3c;
    if (uStack_44 - uVar1 < uStack_3c) {
      uVar5 = uStack_44 - uVar1;
    }
    uStack_40 = uVar5;
    iStack_38 = uVar1 * param_2[5];
    *piVar7 = (int)auStack_24;
    iVar3 = write_buffer_via_virtual_method((void *)param_1,iVar3,uVar5,piVar6,(int *)*piVar7);
    if (iVar3 != 0) break;
    *piStack_28 = iStack_30;
    uVar1 = uVar1 + uStack_40;
    iVar3 = param_2[5] * uStack_40;
    iStack_30 = iStack_30 + uStack_40;
    if (uStack_48 < (uint)(iStack_38 + iVar3)) {
      iVar3 = uStack_48 - iStack_38;
    }
    piStack_2c = piVar6 + iVar3;
    piVar4 = piVar6;
    if (uVar1 == 0) {
      piVar4 = piVar6 + 2;
    }
    piVar2 = (int *)0x0;
    for (; piVar4 < piStack_2c; piVar4 = piVar4 + 1) {
      if (*piVar4 == 0) {
        if (piVar2 == (int *)0x0) {
          piVar2 = piVar4;
        }
      }
      else if (piVar2 != (int *)0x0) {
        uVar5 = (uint)((int)piVar4 - (int)piVar2) >> 2;
        insert_lens_fw_block((int)param_2,((uint)((int)piVar2 - (int)piVar6) >> 2) + iStack_38,uVar5);
        piVar2 = (int *)0x0;
        uStack_34 = uStack_34 + uVar5;
      }
    }
    if (piVar2 != (int *)0x0) {
      uVar5 = (uint)((int)piVar4 - (int)piVar2) >> 2;
      insert_lens_fw_block((int)param_2,((uint)((int)piVar2 - (int)piVar6) >> 2) + iStack_38,uVar5);
      uStack_34 = uStack_34 + uVar5;
    }
  }
  if (iVar3 == -6) {
    return 0xfffffffa;
  }
  return 0xfffffc7b;
}
