/* @k10d initialize_white_balance_tables @ 0x10500964
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 264_settings_entry_manager (unit names are model-proposed)
 * purpose:
 *   Populates white balance gain tables and computes scaled coefficients based on a
 *   sensitivity parameter.
 * summary:
 *   The function writes fixed lookup tables to memory offsets 4-11 relative to a base
 *   pointer derived from param_1. It then calculates scaled values from ROM tables at
 *   0x105d4a50 and 0x105d4a90 using a divisor derived from param_2 (likely ISO or
 *   sensitivity), clamping results to 1-255. Finally, it invokes three unknown functions at
 *   0x104534d2, 0x1045350a, and 0x10453546 to apply or commit these settings.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10500f86) overlaps instruction at (ram,0x10500f84)
    */

void initialize_white_balance_tables(int param_1,uint param_2)

{
  uint8_t *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uintptr_t sp;
  uint8_t *puVar7;
  uint uVar8;
  uint8_t auStack_48 [4];
  
  puVar7 = auStack_48;
  puVar1 = (uint8_t *)(*(code *)0x104536e2/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,4);
  *puVar1 = 0;
  puVar1[1] = 1;
  puVar1[2] = 5;
  puVar1[3] = 1;
  puVar1[4] = 1;
  puVar1[5] = 1;
  puVar1[6] = 1;
  puVar1[7] = 1;
  puVar1[8] = 1;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1 = (uint8_t *)(*(code *)0x104536e2/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,5);
  *puVar1 = 0;
  puVar1[1] = 1;
  puVar1[2] = 2;
  puVar1[3] = 3;
  puVar1[4] = 4;
  puVar1[5] = 5;
  puVar1[6] = 6;
  puVar1[7] = 7;
  puVar1[8] = 8;
  puVar1[9] = 9;
  puVar1[10] = 10;
  puVar1[0xb] = 0xb;
  puVar1 = (uint8_t *)(*(code *)0x104536e2/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,6);
  *puVar1 = 0;
  puVar1[1] = 2;
  puVar1[2] = 1;
  puVar1[3] = 3;
  puVar1[4] = 3;
  puVar1[5] = 2;
  puVar1[6] = 4;
  puVar1[7] = 3;
  puVar1[8] = 5;
  puVar1[9] = 5;
  puVar1[10] = 4;
  puVar1[0xb] = 4;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 1;
  puVar1[0xf] = 0x7d;
  iVar2 = (*(code *)0x104536e2/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,7);
  iVar3 = 0xa2;
  do {
    iVar6 = iVar3 + -1;
    *(uint8_t *)(iVar6 + iVar2) = *(uint8_t *)(iVar3 + 0x105d4afd/*ROM*/);
    iVar3 = iVar6;
  } while (iVar6 != 0);
  puVar1 = (uint8_t *)(*(code *)0x104536e2/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,8);
  *puVar1 = 0;
  puVar1[1] = 3;
  puVar1[2] = 1;
  puVar1[3] = 1;
  puVar1[4] = 1;
  puVar1[5] = 1;
  puVar1[6] = 1;
  puVar1[7] = 1;
  puVar1[8] = 1;
  puVar1[9] = 1;
  puVar1[10] = 1;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1 = (uint8_t *)(*(code *)0x104536e2/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,9);
  *puVar1 = 0;
  puVar1[1] = 1;
  puVar1[2] = 2;
  puVar1[3] = 3;
  puVar1[4] = 4;
  puVar1[5] = 5;
  puVar1[6] = 6;
  puVar1[7] = 7;
  puVar1[8] = 8;
  puVar1[9] = 9;
  puVar1[10] = 10;
  puVar1[0xb] = 0xb;
  puVar1 = (uint8_t *)(*(code *)0x104536e2/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,10);
  *puVar1 = 0;
  puVar1[1] = 2;
  puVar1[2] = 1;
  puVar1[3] = 2;
  puVar1[4] = 4;
  puVar1[5] = 4;
  puVar1[6] = 3;
  puVar1[7] = 4;
  puVar1[8] = 7;
  puVar1[9] = 5;
  puVar1[10] = 4;
  puVar1[0xb] = 4;
  puVar1[0xc] = 0;
  puVar1[0xd] = 1;
  puVar1[0xe] = 2;
  puVar1[0xf] = 0x77;
  iVar2 = (*(code *)0x104536e2/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,0xb);
  iVar3 = 0xa2;
  do {
    iVar6 = iVar3 + -1;
    *(uint8_t *)(iVar6 + iVar2) = *(uint8_t *)(iVar3 + 0x105d4bcd/*ROM*/);
    iVar3 = iVar6;
  } while (iVar6 != 0);
  iVar3 = (*(code *)0x104536e2/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,0);
  iVar2 = (*(code *)0x104536e2/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,1);
  if (param_2 < 0x1389) {
    uVar5 = 500000;
  }
  else {
    uVar5 = 10000 - param_2;
    param_2 = 0x32;
  }
  uVar5 = uVar5 / param_2;
  iVar6 = 0;
  iVar4 = 0xf;
  while( true ) {
    uVar8 = (*(byte *)(iVar6 + 0x105d4a50/*ROM*/) * uVar5 + 0x32) / 100;
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    if (0xff < uVar8) {
      uVar8 = 0xff;
    }
    *(char *)(iVar6 + iVar3) = (char)uVar8;
    uVar8 = (*(byte *)(iVar6 + 0x105d4a90/*ROM*/) * uVar5 + 0x32) / 100;
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    if (0xff < uVar8) {
      uVar8 = 0xff;
    }
    *(char *)(iVar6 + iVar2) = (char)uVar8;
    uVar8 = (*(byte *)(iVar6 + 0x105d4a51/*ROM*/) * uVar5 + 0x32) / 100;
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    if (0xff < uVar8) {
      uVar8 = 0xff;
    }
    *(char *)(iVar6 + 1 + iVar3) = (char)uVar8;
    uVar8 = (*(byte *)(iVar6 + 0x105d4a91/*ROM*/) * uVar5 + 0x32) / 100;
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    if (0xff < uVar8) {
      uVar8 = 0xff;
    }
    *(char *)(iVar6 + 1 + iVar2) = (char)uVar8;
    uVar8 = (*(byte *)(iVar6 + 0x105d4a52/*ROM*/) * uVar5 + 0x32) / 100;
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    if (0xff < uVar8) {
      uVar8 = 0xff;
    }
    *(char *)(iVar6 + 2 + iVar3) = (char)uVar8;
    uVar8 = (*(byte *)(iVar6 + 0x105d4a92/*ROM*/) * uVar5 + 0x32) / 100;
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    if (0xff < uVar8) {
      uVar8 = 0xff;
    }
    *(char *)(iVar6 + 2 + iVar2) = (char)uVar8;
    uVar8 = (*(byte *)(iVar6 + 0x105d4a53/*ROM*/) * uVar5 + 0x32) / 100;
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    if (0xff < uVar8) {
      uVar8 = 0xff;
    }
    *(char *)(iVar6 + 3 + iVar3) = (char)uVar8;
    uVar8 = (*(byte *)(iVar6 + 0x105d4a93/*ROM*/) * uVar5 + 0x32) / 100;
    if (uVar8 == 0) {
      uVar8 = 1;
    }
    if (0xff < uVar8) {
      uVar8 = 0xff;
    }
    *(char *)(iVar2 + iVar6 + 3) = (char)uVar8;
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) break;
    iVar6 = iVar6 + 4;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  puVar7[3] = 1;
  (*(code *)0x104534d2/*ROM*/)(iVar3 + 0x11,0,1,1);
  iVar3 = *(int *)(param_1 + 0x14);
  puVar7[3] = 1;
  (*(code *)0x1045350a/*ROM*/)(iVar3 + 0x11,0,1,1);
  iVar3 = *(int *)(param_1 + 0x14);
  puVar7[3] = 1;
  (*(code *)0x10453546/*ROM*/)(iVar3 + 0x11,0,1,1);
  return;
}
