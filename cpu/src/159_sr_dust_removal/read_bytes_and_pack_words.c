/* @k10d read_bytes_and_pack_words @ 0x1046f6ea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 159_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Allocates a buffer, reads param_3 bytes via call_subroutine_and_flag_on_error, and
 *   packs them into 32-bit big-endian words at param_4.
 * summary:
 *   Calculates a rounded-up allocation size for param_3 bytes and allocates it via
 *   heap_alloc_2. Calls call_subroutine_and_flag_on_error with param_1, the size, and the
 *   buffer pointer to fill the buffer. Iterates through the buffer, combining 4 bytes at a
 *   time into a 32-bit integer using big-endian byte order (shifts 0x18, 0x10, 8, 0) and
 *   stores it at param_4. Frees the temporary buffer via heap_free_2 and returns the result
 *   of the read call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1046f704) overlaps instruction at (ram,0x1046f702)
    */

int read_bytes_and_pack_words(int param_1,uint32_t param_2,int param_3,int param_4)

{
  struct {
    uint32_t uStack_14;
    uint16_t uStack_10;
    int iStack_c;
  } _cfg_14;
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uintptr_t sp;
  if (param_3 < 1) {
    iVar9 = 0;
  }
  else {
    iVar3 = (int)(((uint)(param_3 >> 1) >> 0x1e) + param_3) >> 2;
    if (param_3 != iVar3 * 4) {
      iVar3 = iVar3 + 1;
    }
    iVar9 = iVar3 * 4;
    iVar8 = heap_alloc_2(iVar9);
    iVar2 = 0;
    if (0 < iVar9) {
      iVar9 = iVar9 + -3;
      if (2 < iVar9) {
        do {
          *(uint8_t *)(iVar2 + iVar8) = 0;
          *(uint8_t *)(iVar2 + 1 + iVar8) = 0;
          *(uint8_t *)(iVar8 + iVar2 + 2) = 0;
          iVar9 = iVar9 + -3;
          iVar2 = iVar2 + 3;
        } while (-1 < iVar9);
      }
      for (iVar9 = iVar9 + 2; -1 < iVar9; iVar9 = iVar9 + -1) {
        *(uint8_t *)(iVar8 + iVar2) = 0;
        iVar2 = iVar2 + 1;
      }
    }
    _cfg_14.uStack_10 = (uint16_t)param_3;
    _cfg_14.uStack_14 = param_2;
    _cfg_14.iStack_c = iVar8;
    iVar9 = call_subroutine_and_flag_on_error(param_1,&_cfg_14.uStack_14,1);
    if (0 < iVar3) {
      iVar2 = 0;
      iVar4 = 1;
      iVar5 = 2;
      iVar3 = iVar3 + -3;
      iVar7 = 3;
      if (2 < iVar3) {
        do {
          *(uint *)(iVar2 + param_4) =
               (uint)*(byte *)(iVar8 + iVar2) << 0x18 | (uint)*(byte *)(iVar8 + iVar4) << 0x10 |
               (uint)*(byte *)(iVar8 + iVar5) << 8 | (uint)*(byte *)(iVar8 + iVar7);
          *(uint *)(iVar2 + 4 + param_4) =
               (uint)*(byte *)(iVar8 + iVar2 + 4) << 0x18 |
               (uint)*(byte *)(iVar8 + iVar4 + 4) << 0x10 | (uint)*(byte *)(iVar8 + iVar5 + 4) << 8
               | (uint)*(byte *)(iVar8 + iVar7 + 4);
          iVar6 = iVar5 + 8;
          iVar5 = iVar5 + 0xc;
          *(uint *)(param_4 + iVar2 + 8) =
               (uint)*(byte *)(iVar8 + iVar2 + 8) << 0x18 |
               (uint)*(byte *)(iVar8 + iVar4 + 8) << 0x10 | (uint)*(byte *)(iVar8 + iVar6) << 8 |
               (uint)*(byte *)(iVar8 + iVar7 + 8);
          iVar2 = iVar2 + 0xc;
          iVar7 = iVar7 + 0xc;
          iVar3 = iVar3 + -3;
          iVar4 = iVar4 + 0xc;
        } while (-1 < iVar3);
      }
      for (iVar3 = iVar3 + 2; -1 < iVar3; iVar3 = iVar3 + -1) {
        pbVar1 = (byte *)(iVar8 + iVar5);
        iVar5 = iVar5 + 4;
        *(uint *)(param_4 + iVar2) =
             (uint)*(byte *)(iVar8 + iVar2) << 0x18 | (uint)*(byte *)(iVar8 + iVar4) << 0x10 |
             (uint)*pbVar1 << 8 | (uint)*(byte *)(iVar8 + iVar7);
        iVar2 = iVar2 + 4;
        iVar7 = iVar7 + 4;
        iVar4 = iVar4 + 4;
      }
    }
    heap_free_2(iVar8);
  }
  return iVar9;
}
