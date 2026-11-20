/* @k10d convert_be32_array_to_le_bytes @ 0x1046f226
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 159_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Allocates a buffer, converts a big-endian 32-bit array to little-endian byte order, and
 *   passes it to a processing function.
 * summary:
 *   The function calculates the size of a new buffer based on param_3 (number of 32-bit
 *   words) and allocates it using heap_alloc_2. It then iterates through the source array
 *   (param_4), swapping the byte order of each 32-bit word from big-endian to little-endian
 *   and storing the result in the new buffer. Finally, it calls
 *   dispatch_event_with_timeout_1046f1d8 with the original first argument and a pointer to
 *   a stack structure containing the new buffer pointer and size, then frees the temporary
 *   buffer using heap_free_2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1046f240) overlaps instruction at (ram,0x1046f23e)
    */

int convert_be32_array_to_le_bytes(int param_1,uint32_t param_2,int param_3,int param_4)

{
  struct {
    uint32_t uStack_14;
    uint16_t uStack_10;
    int iStack_c;
  } _cfg_14;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uintptr_t sp;
  if (param_3 < 1) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)(((uint)(param_3 >> 1) >> 0x1e) + param_3) >> 2;
    if (param_3 != iVar7 * 4) {
      iVar7 = iVar7 + 1;
    }
    iVar6 = heap_alloc_2(iVar7 << 2);
    if (0 < iVar7) {
      iVar1 = 0;
      iVar3 = 1;
      iVar4 = 2;
      iVar7 = iVar7 + -3;
      iVar5 = 3;
      if (2 < iVar7) {
        do {
          *(char *)(iVar1 + iVar6) = (char)((uint)*(uint32_t *)(iVar1 + param_4) >> 0x18);
          *(char *)(iVar6 + iVar3) = (char)((uint)*(uint32_t *)(iVar1 + param_4) >> 0x10);
          *(char *)(iVar6 + iVar4) = (char)((uint)*(uint32_t *)(param_4 + iVar1) >> 8);
          *(char *)(iVar6 + iVar5) = (char)*(uint32_t *)(param_4 + iVar1);
          iVar2 = iVar1 + 4;
          *(char *)(iVar2 + iVar6) = (char)((uint)*(uint32_t *)(iVar2 + param_4) >> 0x18);
          *(char *)(iVar6 + iVar3 + 4) = (char)((uint)*(uint32_t *)(iVar2 + param_4) >> 0x10);
          *(char *)(iVar6 + iVar4 + 4) = (char)((uint)*(uint32_t *)(param_4 + iVar2) >> 8);
          *(char *)(iVar6 + iVar5 + 4) = (char)*(uint32_t *)(param_4 + iVar2);
          iVar2 = iVar1 + 8;
          *(char *)(iVar2 + iVar6) = (char)((uint)*(uint32_t *)(iVar2 + param_4) >> 0x18);
          *(char *)(iVar6 + iVar3 + 8) = (char)((uint)*(uint32_t *)(iVar2 + param_4) >> 0x10);
          *(char *)(iVar6 + iVar4 + 8) = (char)((uint)*(uint32_t *)(param_4 + iVar2) >> 8);
          *(char *)(iVar6 + iVar5 + 8) = (char)*(uint32_t *)(param_4 + iVar2);
          iVar1 = iVar1 + 0xc;
          iVar5 = iVar5 + 0xc;
          iVar4 = iVar4 + 0xc;
          iVar7 = iVar7 + -3;
          iVar3 = iVar3 + 0xc;
        } while (-1 < iVar7);
      }
      for (iVar7 = iVar7 + 2; -1 < iVar7; iVar7 = iVar7 + -1) {
        *(char *)(iVar1 + iVar6) = (char)((uint)*(uint32_t *)(iVar1 + param_4) >> 0x18);
        *(char *)(iVar6 + iVar3) = (char)((uint)*(uint32_t *)(iVar1 + param_4) >> 0x10);
        *(char *)(iVar6 + iVar4) = (char)((uint)*(uint32_t *)(param_4 + iVar1) >> 8);
        *(char *)(iVar6 + iVar5) = (char)*(uint32_t *)(param_4 + iVar1);
        iVar1 = iVar1 + 4;
        iVar5 = iVar5 + 4;
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 4;
      }
    }
    _cfg_14.uStack_10 = (uint16_t)param_3;
    _cfg_14.uStack_14 = param_2;
    _cfg_14.iStack_c = iVar6;
    iVar7 = dispatch_event_with_timeout_1046f1d8(param_1,&_cfg_14.uStack_14);
    heap_free_2(iVar6);
  }
  return iVar7;
}
