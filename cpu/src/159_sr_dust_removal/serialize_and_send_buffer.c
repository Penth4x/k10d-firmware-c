/* @k10d serialize_and_send_buffer @ 0x1046f846
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 159_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Allocates a buffer, copies param_4 bytes into it, and passes it to
 *   call_subroutine_and_set_flag for transmission.
 * summary:
 *   The function calculates the size of param_4 (rounded up to a multiple of 4) and
 *   allocates a heap buffer of that size. It then copies the data from param_4 into the
 *   allocated buffer using a byte-wise loop (likely handling endianness or alignment).
 *   Finally, it constructs a small stack structure containing the original parameters and
 *   the buffer pointer, and calls call_subroutine_and_set_flag with this structure,
 *   returning the result of that call. The allocated buffer is freed via heap_free_2 after
 *   the call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1046f860) overlaps instruction at (ram,0x1046f85e)
    */

int serialize_and_send_buffer(int param_1,uint32_t param_2,int param_3,int param_4)

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
    iVar7 = call_subroutine_and_set_flag(param_1,&_cfg_14.uStack_14,1);
    heap_free_2(iVar6);
  }
  return iVar7;
}
