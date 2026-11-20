/* @k10d compute_16_sample_histograms @ 0x000d86ec
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Computes 16 histogram bins from two input buffers and stores results in fixed memory
 *   locations.
 * summary:
 *   Iterates 16 times to calculate a sum of 8 masked 10-bit values from param_1 and
 *   param_2, storing the results at 0x3c600 and 0x3c620. It then processes 8 blocks of data
 *   using quantize_four_sample_deltas, averages adjacent bytes, and calls
 *   return_r7_passthrough to generate 16 bytes stored at 0x3c660. If param_3 is 1, it
 *   repeats the second phase for param_2, storing results at 0x3c680.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_16_sample_histograms(int param_1,int param_2,short param_3)

{
  int iVar1;
  uint8_t uVar2;
  int iVar3;
  uintptr_t sp;
  byte local_ec [16];
  byte local_dc [16];
  byte local_cc [16];
  byte local_bc [16];
  byte local_ac [16];
  byte local_9c [16];
  byte local_8c [16];
  byte local_7c [16];
  uint8_t auStack_6c [16];
  uint8_t local_5c [16];
  uint8_t local_4c [16];
  uint8_t local_3c [16];
  uint8_t local_2c [16];
  
  iVar3 = 0;
  do {
    iVar1 = iVar3 * 2;
    *(short *)(iVar1 + 0x3c600) =
         (short)((*(ushort *)(param_1 + iVar1 + 0x20) & 0x3ff) +
                 (*(ushort *)(iVar1 + param_1) & 0x3ff) +
                 (*(ushort *)(param_1 + iVar1 + 0x40) & 0x3ff) +
                 (*(ushort *)(param_1 + iVar1 + 0x60) & 0x3ff) +
                 (*(ushort *)(param_1 + iVar1 + 0x80) & 0x3ff) +
                 (*(ushort *)(param_1 + iVar1 + 0xa0) & 0x3ff) +
                 (*(ushort *)(param_1 + iVar1 + 0xc0) & 0x3ff) +
                 (*(ushort *)(param_1 + iVar1 + 0xe0) & 0x3ff) >> 3);
    *(short *)(iVar1 + 0x3c620) =
         (short)((*(ushort *)(param_2 + iVar1 + 0x20) & 0x3ff) +
                 (*(ushort *)(iVar1 + param_2) & 0x3ff) +
                 (*(ushort *)(param_2 + iVar1 + 0x40) & 0x3ff) +
                 (*(ushort *)(param_2 + iVar1 + 0x60) & 0x3ff) +
                 (*(ushort *)(param_2 + iVar1 + 0x80) & 0x3ff) +
                 (*(ushort *)(param_2 + iVar1 + 0xa0) & 0x3ff) +
                 (*(ushort *)(param_2 + iVar1 + 0xc0) & 0x3ff) +
                 (*(ushort *)(param_2 + iVar1 + 0xe0) & 0x3ff) >> 3);
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 0x10);
  iVar3 = 0;
  do {
    quantize_four_sample_deltas(param_1 + iVar3 * 0x20,local_ec + iVar3 * 0x10,auStack_6c);
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 8);
  iVar3 = 0;
  do {
    local_5c[iVar3] = (char)((int)((uint)local_ec[iVar3] + (uint)local_dc[iVar3]) >> 1);
    local_4c[iVar3] = (char)((int)((uint)local_cc[iVar3] + (uint)local_bc[iVar3]) >> 1);
    local_3c[iVar3] = (char)((int)((uint)local_ac[iVar3] + (uint)local_9c[iVar3]) >> 1);
    local_2c[iVar3] = (char)((int)((uint)local_8c[iVar3] + (uint)local_7c[iVar3]) >> 1);
    uVar2 = return_r7_passthrough(local_5c[iVar3],local_4c[iVar3],local_3c[iVar3],local_2c[iVar3]);
    *(uint8_t *)(iVar3 + 0x3c660) = uVar2;
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 0x10);
  transform_four_byte_blocks(0x3c660,0x3c6a0);
  if (param_3 == 1) {
    iVar3 = 0;
    do {
      quantize_four_sample_deltas(param_2 + iVar3 * 0x20,local_ec + iVar3 * 0x10,auStack_6c);
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 8);
    iVar3 = 0;
    do {
      local_5c[iVar3] = (char)((int)((uint)local_ec[iVar3] + (uint)local_dc[iVar3]) >> 1);
      local_4c[iVar3] = (char)((int)((uint)local_cc[iVar3] + (uint)local_bc[iVar3]) >> 1);
      local_3c[iVar3] = (char)((int)((uint)local_ac[iVar3] + (uint)local_9c[iVar3]) >> 1);
      local_2c[iVar3] = (char)((int)((uint)local_8c[iVar3] + (uint)local_7c[iVar3]) >> 1);
      uVar2 = return_r7_passthrough(local_5c[iVar3],local_4c[iVar3],local_3c[iVar3],local_2c[iVar3]);
      *(uint8_t *)(iVar3 + 0x3c680) = uVar2;
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 0x10);
    transform_four_byte_blocks(0x3c680,0x3c6b0);
  }
  return;
}
