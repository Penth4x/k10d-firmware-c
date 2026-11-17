/* @k10d sample_eight_channel_min_max_000e267a @ 0x000e267a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Reads eight channels repeatedly to compute per-channel min/max and average values.
 * summary:
 *   The function initializes state flags and then performs a loop of 0x30 or 0x60
 *   iterations, each reading 8 channels via wait_for_bit6_and_return_word. It tracks the
 *   minimum and maximum values for each of the 8 channels in arrays at 0x3c700-0x3c730.
 *   After sampling, it calculates the average of min/max for each channel and stores them
 *   at 0x3c500. It also performs a secondary pass to find the global minimum across a
 *   subset of channels if a specific flag is set.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sample_eight_channel_min_max_000e267a(void)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint16_t uVar9;
  short sVar10;
  
  DAT_00000004 = DAT_00000004 & 0x8f;
  DAT_0000007a = 0x23;
  DAT_00000086 = 0x23;
  DAT_00000079 = 0;
  DAT_00000078 = 0x30;
  DAT_00000085 = 0;
  DAT_00000084 = 0;
  if (((DAT_0003c022 & 2) == 0) && ((DAT_0003c02b & 8) == 0)) {
    DAT_0003c5a3 = 0;
    DAT_0003c5a4 = 0;
  }
  else {
    DAT_0003c5a3 = 0;
    DAT_0003c5a4 = 0;
    sVar10 = 0x14;
    bVar3 = DAT_00000004;
    do {
      DAT_00000004 = bVar3;
      sVar10 = sVar10 + -1;
      uVar7 = 8;
      bVar3 = DAT_00000004;
      do {
        DAT_00000004 = bVar3;
        uVar7 = uVar7 - 1 & 0xffff;
        wait_if_flag_is_two();
        wait_if_flag_is_two();
        uVar4 = wait_for_bit6_and_return_word();
        DAT_00000004 = DAT_00000004 & 0x8f;
        bVar3 = DAT_00000004 | (*(byte *)(uVar7 + 0xfc5c0) & 7) << 4;
        if ((uint)DAT_0003f500 < (uVar4 & 0xffff) >> 2) {
          DAT_0003c5a3 = (byte)(1 << (*(byte *)(uVar7 + 0xfc5c8) & 0xf)) | DAT_0003c5a3;
        }
        if (DAT_0003c5a3 == 0xff) {
          sVar10 = 0;
          break;
        }
      } while (uVar7 != 0);
    } while (sVar10 != 0);
    DAT_0003c5a3 = DAT_0003c5a3 ^ 0xff;
    DAT_0003c5a4 = DAT_0003c5a4 ^ 0xff;
    if ((DAT_0003c5a3 & 1) == 0) {
      busy_wait_on_mode_flag(0x19);
    }
    else if (DAT_0003f501 != '\0') {
      DAT_00000006 = DAT_00000006 & 0xbf;
      FUN_000d5642(1);
      FUN_000cdeb8();
      busy_wait_on_mode_flag(500);
      DAT_00000006 = DAT_00000006 | 0x40;
      uVar6 = 0;
      do {
        FUN_000cdeb8();
        FUN_000d5642(1);
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x5d);
      FUN_000cdeb8();
    }
  }
  uVar7 = 8;
  do {
    uVar7 = uVar7 - 1 & 0xffff;
    iVar2 = uVar7 * 2;
    *(uint16_t *)(iVar2 + 0x3c700) = 0x3ff;
    *(uint16_t *)(iVar2 + 0x3c720) = 0;
    *(uint16_t *)(iVar2 + 0x3c710) = 0x3ff;
    *(uint16_t *)(iVar2 + 0x3c730) = 0;
  } while (uVar7 != 0);
  if ((DAT_0003c022 & 2) == 0) {
    uVar7 = 0x30;
  }
  else {
    uVar7 = 0x60;
  }
  uVar4 = uVar7;
  do {
    uVar8 = 8;
    do {
      uVar8 = uVar8 - 1 & 0xffff;
      wait_if_flag_is_two();
      wait_if_flag_is_two();
      uVar5 = wait_for_bit6_and_return_word();
      DAT_00000004 = DAT_00000004 & 0x8f | (*(byte *)(uVar8 + 0xfc5c0) & 7) << 4;
      uVar6 = (ushort)(uVar5 >> 0x10);
      iVar2 = uVar8 * 2;
      uVar9 = (uint16_t)uVar5;
      if (((uVar5 & 0xffff) < (uint)*(ushort *)(iVar2 + 0x3c700)) &&
         (*(uint16_t *)(iVar2 + 0x3c700) = uVar9, uVar8 == 7)) {
        if ((DAT_0003c022 & 2) != 0) {
          _DAT_0003c052 = (short)uVar7 - (short)uVar4;
        }
        compute_offset_from_flag();
      }
      if ((uint)*(ushort *)(iVar2 + 0x3c720) < (uVar5 & 0xffff)) {
        *(uint16_t *)(iVar2 + 0x3c720) = uVar9;
      }
      if (uVar6 < *(ushort *)(iVar2 + 0x3c710)) {
        *(ushort *)(iVar2 + 0x3c710) = uVar6;
      }
      if (*(ushort *)(iVar2 + 0x3c730) < uVar6) {
        *(ushort *)(iVar2 + 0x3c730) = uVar6;
      }
      if (((DAT_0003c022 & 2) != 0) && (uVar8 == 7)) {
        *(uint16_t *)((uVar7 - uVar4) * 2 + 0x3c740) = uVar9;
      }
    } while (uVar8 != 0);
    uVar4 = uVar4 - 1 & 0xffff;
  } while (uVar4 != 0);
  uVar4 = 8;
  do {
    uVar4 = uVar4 - 1 & 0xffff;
    bVar3 = *(byte *)(uVar4 + 0xfc5c8);
    iVar2 = uVar4 * 2;
    *(short *)((uint)bVar3 * 4 + 0x3c500) =
         (short)((uint)*(ushort *)(iVar2 + 0x3c700) + (uint)*(ushort *)(iVar2 + 0x3c720) >> 1);
    *(short *)(((uint)bVar3 * 2 + 1) * 2 + 0x3c500) =
         (short)((uint)*(ushort *)(iVar2 + 0x3c730) + (uint)*(ushort *)(iVar2 + 0x3c710) >> 1);
  } while (uVar4 != 0);
  if ((DAT_0003c022 & 2) != 0) {
    uVar6 = 0x3ff;
    if ((uint)_DAT_0003c052 < (uint)((int)uVar7 >> 1)) {
      uVar7 = (uint)(ushort)(_DAT_0003c052 + 0x14);
      if (uVar7 < _DAT_0003c052 + 0x30) {
        do {
          uVar1 = *(ushort *)(uVar7 * 2 + 0x3c740);
          if (uVar1 < uVar6) {
            DAT_0003c051 = (char)uVar7 - (char)_DAT_0003c052;
            uVar6 = uVar1;
          }
          uVar7 = uVar7 + 1 & 0xffff;
        } while (uVar7 < _DAT_0003c052 + 0x30);
      }
    }
    else {
      uVar7 = _DAT_0003c052 - 0x14 & 0xffff;
      if (_DAT_0003c052 - 0x30 < uVar7) {
        do {
          uVar1 = *(ushort *)(uVar7 * 2 + 0x3c740);
          if (uVar1 < uVar6) {
            DAT_0003c051 = (char)_DAT_0003c052 - (char)uVar7;
            uVar6 = uVar1;
          }
          uVar7 = uVar7 - 1 & 0xffff;
        } while (_DAT_0003c052 - 0x30 < uVar7);
      }
    }
    DAT_0003c023 = DAT_0003c023 & 0xf7;
    if (DAT_0003c051 < DAT_0003f51e) {
      DAT_0003c023 = DAT_0003c023 | 8;
    }
  }
  DAT_00000004 = DAT_00000004 & 0x8f;
  DAT_00000078 = 0;
  DAT_00000084 = 0;
  DAT_0003c02b = DAT_0003c02b & 0xf7;
  if (DAT_0003f501 != '\0') {
    FUN_000cdeb8();
    DAT_00000006 = DAT_00000006 & 0xbf;
    FUN_000d5642(1);
    FUN_000cdeb8();
    busy_wait_on_mode_flag(500);
    DAT_00000006 = DAT_00000006 | 0x40;
  }
  return;
}
