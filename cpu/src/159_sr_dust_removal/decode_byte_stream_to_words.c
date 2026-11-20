/* @k10d decode_byte_stream_to_words @ 0x1046f06c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 159_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Allocates a buffer, calls a decoder to fill it, and converts the resulting bytes into
 *   big-endian 32-bit words.
 * summary:
 *   The function calculates a size based on param_3, allocates a zero-initialized buffer
 *   via heap_alloc_2, and calls dispatch_event_with_timeout_1046f01e with param_1 and
 *   param_2. It then iterates through the buffer, packing every 4 bytes into a 32-bit
 *   integer in big-endian format (byte 0 at 0x18, byte 3 at 0x00) and writing the result to
 *   param_4. Finally, it frees the temporary buffer using heap_free_2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1046f088) overlaps instruction at (ram,0x1046f086)
    */

int decode_byte_stream_to_words(int param_1,uint32_t param_2,int param_3,int param_4)

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
  uintptr_t sp;
  int iStack_20;
  if (param_3 < 1) {
    iStack_20 = 0;
  }
  else {
    iVar2 = (int)(((uint)(param_3 >> 1) >> 0x1e) + param_3) >> 2;
    if (param_3 != iVar2 * 4) {
      iVar2 = iVar2 + 1;
    }
    empty_stub_function_103b76f0();
    empty_noop_stub_103b76f2();
    iVar7 = iVar2 * 4;
    iVar8 = heap_alloc_2(iVar7);
    iVar3 = 0;
    if (0 < iVar7) {
      iVar7 = iVar7 + -3;
      if (2 < iVar7) {
        do {
          *(uint8_t *)(iVar3 + iVar8) = 0;
          *(uint8_t *)(iVar3 + 1 + iVar8) = 0;
          *(uint8_t *)(iVar8 + iVar3 + 2) = 0;
          iVar7 = iVar7 + -3;
          iVar3 = iVar3 + 3;
        } while (-1 < iVar7);
      }
      for (iVar7 = iVar7 + 2; -1 < iVar7; iVar7 = iVar7 + -1) {
        *(uint8_t *)(iVar8 + iVar3) = 0;
        iVar3 = iVar3 + 1;
      }
    }
    _cfg_14.uStack_10 = (uint16_t)param_3;
    _cfg_14.uStack_14 = param_2;
    _cfg_14.iStack_c = iVar8;
    iStack_20 = dispatch_event_with_timeout_1046f01e(param_1,&_cfg_14.uStack_14);
    if (0 < iVar2) {
      iVar7 = 0;
      iVar3 = 1;
      iVar4 = 2;
      iVar2 = iVar2 + -3;
      iVar6 = 3;
      if (2 < iVar2) {
        do {
          *(uint *)(iVar7 + param_4) =
               (uint)*(byte *)(iVar8 + iVar7) << 0x18 | (uint)*(byte *)(iVar8 + iVar3) << 0x10 |
               (uint)*(byte *)(iVar8 + iVar4) << 8 | (uint)*(byte *)(iVar8 + iVar6);
          *(uint *)(iVar7 + 4 + param_4) =
               (uint)*(byte *)(iVar8 + iVar7 + 4) << 0x18 |
               (uint)*(byte *)(iVar8 + iVar3 + 4) << 0x10 | (uint)*(byte *)(iVar8 + iVar4 + 4) << 8
               | (uint)*(byte *)(iVar8 + iVar6 + 4);
          iVar5 = iVar4 + 8;
          iVar4 = iVar4 + 0xc;
          *(uint *)(param_4 + iVar7 + 8) =
               (uint)*(byte *)(iVar8 + iVar7 + 8) << 0x18 |
               (uint)*(byte *)(iVar8 + iVar3 + 8) << 0x10 | (uint)*(byte *)(iVar8 + iVar5) << 8 |
               (uint)*(byte *)(iVar8 + iVar6 + 8);
          iVar7 = iVar7 + 0xc;
          iVar6 = iVar6 + 0xc;
          iVar2 = iVar2 + -3;
          iVar3 = iVar3 + 0xc;
        } while (-1 < iVar2);
      }
      for (iVar2 = iVar2 + 2; -1 < iVar2; iVar2 = iVar2 + -1) {
        pbVar1 = (byte *)(iVar8 + iVar4);
        iVar4 = iVar4 + 4;
        *(uint *)(param_4 + iVar7) =
             (uint)*(byte *)(iVar8 + iVar7) << 0x18 | (uint)*(byte *)(iVar8 + iVar3) << 0x10 |
             (uint)*pbVar1 << 8 | (uint)*(byte *)(iVar8 + iVar6);
        iVar7 = iVar7 + 4;
        iVar6 = iVar6 + 4;
        iVar3 = iVar3 + 4;
      }
    }
    heap_free_2(iVar8);
  }
  return iStack_20;
}
