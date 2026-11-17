/* @k10d populate_param_block_and_call_driver @ 0x10503d6a
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Initializes a parameter structure with fixed constants and packed data, then passes it
 *   to two driver functions.
 * summary:
 *   The function writes a set of fixed 16-bit and 8-bit values into the param_2 structure,
 *   including a sequence of hex constants and small integers. It reads a pointer from
 *   param_2[0x1c] and packs four bytes of data from that location into the first few words
 *   of the structure. Finally, it calls two functions at 0x10457110 and 0x10457132, passing
 *   an object pointer from param_1 and the populated parameter block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_param_block_and_call_driver(int param_1,ushort *param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  uintptr_t sp;
  ushort uStack_3c;
  ushort uStack_3a;
  ushort uStack_38;
  ushort uStack_36;
  ushort uStack_34;
  ushort uStack_32;
  ushort uStack_30;
  ushort uStack_2e;
  ushort uStack_2c;
  ushort uStack_2a;
  ushort uStack_28;
  ushort uStack_26;
  ushort uStack_24;
  ushort uStack_22;
  ushort uStack_20;
  ushort uStack_1e;
  ushort uStack_1c;
  ushort uStack_1a;
  ushort uStack_18;
  ushort uStack_16;
  ushort uStack_14;
  ushort uStack_12;
  ushort uStack_10;
  ushort uStack_e;
  ushort uStack_c;
  ushort uStack_a;
  
  if (param_3 == 0) {
    param_2[6] = 0xf00;
    param_2[7] = 0xc00;
    param_2[8] = 0x800;
    param_2[9] = 0;
    param_2[10] = 0x400;
    param_2[0xb] = 0xa00;
    param_2[0xc] = 0xe00;
    param_2[0xd] = 0xf80;
    param_2[0xe] = 0xfc0;
    param_2[0xf] = 0xfe0;
    param_2[0x10] = 0xff0;
    param_2[0x11] = 0xff8;
    param_2[0x12] = 0xffc;
    *(uint8_t *)(param_2 + 0x13) = 5;
    *(uint8_t *)((int)param_2 + 0x27) = 3;
    *(uint8_t *)(param_2 + 0x14) = 3;
    *(uint8_t *)((int)param_2 + 0x29) = 2;
    *(uint8_t *)(param_2 + 0x15) = 2;
    *(uint8_t *)((int)param_2 + 0x2b) = 3;
    *(uint8_t *)(param_2 + 0x16) = 4;
    *(uint8_t *)((int)param_2 + 0x2d) = 6;
    *(uint8_t *)(param_2 + 0x17) = 7;
    *(uint8_t *)((int)param_2 + 0x2f) = 8;
    *(uint8_t *)(param_2 + 0x18) = 9;
    *(uint8_t *)((int)param_2 + 0x31) = 10;
    *(uint8_t *)(param_2 + 0x19) = 10;
    *param_2 = 0;
    param_2[1] = 0x16;
  }
  pbVar7 = *(byte **)(param_2 + 0x1c);
  bVar2 = pbVar7[1];
  bVar3 = pbVar7[2];
  iVar1 = ((int)(uint)param_2[0x1a] >> 1) * 3;
  bVar4 = pbVar7[iVar1];
  bVar5 = pbVar7[iVar1 + 1];
  bVar6 = pbVar7[iVar1 + 2];
  param_2[2] = (ushort)*pbVar7 << 4 | (ushort)((int)(uint)bVar2 >> 4);
  param_2[3] = (ushort)((bVar2 & 0xf) << 8) | (ushort)bVar3;
  param_2[4] = (ushort)((bVar5 & 0xf) << 8) | (ushort)bVar6;
  param_2[5] = (ushort)bVar4 << 4 | (ushort)((int)(uint)bVar5 >> 4);
  uStack_3a = (ushort)*(byte *)(param_2 + 0x13);
  uStack_36 = (ushort)*(byte *)((int)param_2 + 0x27);
  uStack_32 = (ushort)*(byte *)(param_2 + 0x14);
  uStack_2e = (ushort)*(byte *)((int)param_2 + 0x29);
  uStack_2a = (ushort)*(byte *)(param_2 + 0x15);
  uStack_26 = (ushort)*(byte *)((int)param_2 + 0x2b);
  uStack_22 = (ushort)*(byte *)(param_2 + 0x16);
  uStack_1e = (ushort)*(byte *)((int)param_2 + 0x2d);
  uStack_1a = (ushort)*(byte *)(param_2 + 0x17);
  uStack_16 = (ushort)*(byte *)((int)param_2 + 0x2f);
  uStack_12 = (ushort)*(byte *)(param_2 + 0x18);
  uStack_e = (ushort)*(byte *)((int)param_2 + 0x31);
  uStack_a = (ushort)*(byte *)(param_2 + 0x19);
  uStack_3c = param_2[6];
  uStack_38 = param_2[7];
  uStack_34 = param_2[8];
  uStack_30 = param_2[9];
  uStack_2c = param_2[10];
  uStack_28 = param_2[0xb];
  uStack_24 = param_2[0xc];
  uStack_20 = param_2[0xd];
  uStack_1c = param_2[0xe];
  uStack_18 = param_2[0xf];
  uStack_14 = param_2[0x10];
  uStack_10 = param_2[0x11];
  uStack_c = param_2[0x12];
  if (0x3ff < *param_2) {
    *param_2 = 0;
  }
  (*(code *)0x10457110/*ROM*/)(*(uint32_t *)(param_1 + 0xc),*param_2);
  (*(code *)0x10457132/*ROM*/)(*(uint32_t *)(param_1 + 0xc),&uStack_3c);
  return;
}
