/* @k10d sample_eight_channel_min_max_000e2a42 @ 0x000e2a42
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Reads 8 channels repeatedly to compute min/max values and stores them in a 0x3c700
 *   array.
 * summary:
 *   The function initializes a 0x3c700 array with 0x3ff/0 values, then loops 0x30 times
 *   reading 8 channels via wait_for_bit6_and_return_word. It tracks the minimum and maximum
 *   value for each of the 8 channels in the 0x3c700 array. Finally, it calculates averages
 *   of the min/max pairs and stores them at 0x3c500. It also performs a preliminary check
 *   on channel 0 (bit 0 of DAT_0003c5a3) before the main sampling loop.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sample_eight_channel_min_max_000e2a42(short param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint16_t uVar6;
  uint16_t uStack_1e;
  
  DAT_00000004 = DAT_00000004 & 0x8f;
  DAT_0000007a = 0x23;
  DAT_00000086 = 0x23;
  DAT_00000079 = 0;
  DAT_00000078 = 0x30;
  DAT_00000085 = 0;
  DAT_00000084 = 0;
  if (param_1 == 0) {
    DAT_0003c5a3 = 0;
    DAT_0003c5a4 = 0;
    uStack_1e = 0x14;
    do {
      uStack_1e = uStack_1e + -1;
      uVar4 = 8;
      do {
        uVar4 = uVar4 - 1 & 0xffff;
        wait_if_flag_is_two();
        wait_if_flag_is_two();
        uVar3 = wait_for_bit6_and_return_word();
        DAT_00000004 = DAT_00000004 & 0x8f | (*(byte *)(uVar4 + 0xfc5d0) & 7) << 4;
        if ((uint)DAT_0003f500 < (uVar3 & 0xffff) >> 2) {
          DAT_0003c5a3 = (byte)(1 << (*(byte *)(uVar4 + 0xfc5d8) & 0xf)) | DAT_0003c5a3;
        }
        if (DAT_0003c5a3 == 0xff) {
          uStack_1e = 0;
          break;
        }
      } while (uVar4 != 0);
      FUN_000cdeb8();
    } while (uStack_1e != 0);
    DAT_00000004 = DAT_00000004 & 0x8f;
    DAT_0003c5a3 = DAT_0003c5a3 ^ 0xff;
    DAT_0003c5a4 = DAT_0003c5a4 ^ 0xff;
    FUN_000cdeb8();
    if ((DAT_0003c5a3 & 1) == 0) {
      busy_wait_on_mode_flag(0x19);
    }
    else if (DAT_0003f501 != '\0') {
      DAT_00000006 = DAT_00000006 & 0xbf;
      FUN_000d5642(1);
      DAT_00000006 = DAT_00000006 | 0x40;
      uVar5 = 0;
      do {
        FUN_000cdeb8();
        FUN_000d5642(1);
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x5d);
      FUN_000cdeb8();
    }
  }
  else {
    DAT_0003c5a3 = 0;
    DAT_0003c5a4 = 0;
  }
  if (param_1 == 0) {
    FUN_000cdeb8();
  }
  uVar4 = 8;
  do {
    uVar4 = uVar4 - 1 & 0xffff;
    iVar2 = uVar4 * 2;
    *(uint16_t *)(iVar2 + 0x3c700) = 0x3ff;
    *(uint16_t *)(iVar2 + 0x3c720) = 0;
    *(uint16_t *)(iVar2 + 0x3c710) = 0x3ff;
    *(uint16_t *)(iVar2 + 0x3c730) = 0;
  } while (uVar4 != 0);
  uStack_1e = 0x30;
  do {
    uVar4 = 8;
    do {
      uVar4 = uVar4 - 1 & 0xffff;
      wait_if_flag_is_two();
      wait_if_flag_is_two();
      uVar3 = wait_for_bit6_and_return_word();
      DAT_00000004 = DAT_00000004 & 0x8f | (*(byte *)(uVar4 + 0xfc5d0) & 7) << 4;
      iVar2 = uVar4 * 2;
      if (((uVar3 & 0xffff) < (uint)*(ushort *)(iVar2 + 0x3c700)) &&
         (*(short *)(iVar2 + 0x3c700) = (short)uVar3, uVar4 == 7)) {
        compute_offset_from_flag();
      }
      if ((uint)*(ushort *)(iVar2 + 0x3c720) < (uVar3 & 0xffff)) {
        *(short *)(iVar2 + 0x3c720) = (short)uVar3;
      }
      uVar6 = (uint16_t)(uVar3 >> 0x10);
      if (uVar3 >> 0x10 < (uint)*(ushort *)(iVar2 + 0x3c710)) {
        *(uint16_t *)(iVar2 + 0x3c710) = uVar6;
      }
      if ((uint)*(ushort *)(iVar2 + 0x3c730) < uVar3 >> 0x10) {
        *(uint16_t *)(iVar2 + 0x3c730) = uVar6;
      }
    } while (uVar4 != 0);
    if ((uStack_1e & 3) == 0) {
      if (param_1 == 1) {
        _DAT_000000d8 = CONCAT31(_DAT_000000d8,0x13);
        _DAT_0003c264 = _DAT_000000d8 << 2;
        set_two_byte_state_pair_000ecd94();
        initialize_state_block(_DAT_0003c264);
      }
      else {
        FUN_000cdeb8();
      }
    }
    uStack_1e = uStack_1e - 1;
  } while (uStack_1e != 0);
  uVar4 = 8;
  do {
    uVar4 = uVar4 - 1 & 0xffff;
    bVar1 = *(byte *)(uVar4 + 0xfc5d8);
    iVar2 = uVar4 * 2;
    *(short *)((uint)bVar1 * 4 + 0x3c500) =
         (short)((uint)*(ushort *)(iVar2 + 0x3c700) + (uint)*(ushort *)(iVar2 + 0x3c720) >> 1);
    *(short *)(((uint)bVar1 * 2 + 1) * 2 + 0x3c500) =
         (short)((uint)*(ushort *)(iVar2 + 0x3c730) + (uint)*(ushort *)(iVar2 + 0x3c710) >> 1);
  } while (uVar4 != 0);
  DAT_00000004 = DAT_00000004 & 0x8f;
  DAT_00000078 = 0;
  DAT_00000084 = 0;
  DAT_0003c02b = DAT_0003c02b & 0xf7;
  if (DAT_0003f501 != '\0') {
    DAT_00000006 = DAT_00000006 & 0xbf;
    FUN_000d5642(1);
    DAT_00000006 = DAT_00000006 | 0x40;
  }
  return;
}
