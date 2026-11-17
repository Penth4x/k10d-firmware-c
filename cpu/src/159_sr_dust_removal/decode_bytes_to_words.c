/* @k10d decode_bytes_to_words @ 0x1046f3b4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 159_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Allocates a buffer, calls a helper to fill it, and converts the byte stream into big-
 *   endian 32-bit words.
 * summary:
 *   The function calculates a size rounded up to a multiple of 4 based on param_3 and
 *   allocates a buffer via heap_alloc_2. It initializes the buffer to zero and calls
 *   call_subroutine_and_flag_on_error with param_1 and a stack-constructed struct
 *   containing param_2 and the buffer pointer. It then iterates through the buffer, packing
 *   every 4 bytes into a 32-bit integer in big-endian format (byte 0 at 0x18, byte 3 at
 *   0x00) and writing the result to param_4. Finally, it frees the temporary buffer using
 *   heap_free_2 and returns the result from call_subroutine_and_flag_on_error.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1046f3ce) overlaps instruction at (ram,0x1046f3cc)
    */

int decode_bytes_to_words(int param_1,uint32_t param_2,int param_3,int param_4)

{
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
  uint32_t uStack_14;
  uint16_t uStack_10;
  int iStack_c;
  
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
    uStack_10 = (uint16_t)param_3;
    uStack_14 = param_2;
    iStack_c = iVar8;
    iVar9 = call_subroutine_and_flag_on_error(param_1,&uStack_14,0);
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
