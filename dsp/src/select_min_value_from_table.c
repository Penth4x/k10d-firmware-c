/* @k10d select_min_value_from_table @ 0x000d46cc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Iterates through a table of 17 entries to find the index of the minimum value based on
 *   a comparison with a threshold.
 * summary:
 *   The function loops through 17 items, reading values from a table at DAT_0003cc30 and
 *   applying conditional logic based on flags in DAT_0003cb80. It stores intermediate
 *   results in a local array. In a second phase, it compares these stored values against a
 *   threshold (DAT_0003f471) to determine a final index, which is then passed to
 *   select_entry_by_threshold_000d4884. The logic appears to be a selection or minimization
 *   algorithm over a fixed-size dataset.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_min_value_from_table(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uintptr_t sp;
  uint auStack_90 [17];
  uint auStack_4c [11];
  uint auStack_20 [3];
  int iVar5;
  
  uVar9 = 0x12;
  iVar5 = 0x11;
  iVar4 = 0x22;
  iVar3 = 0x44;
  do {
    iVar2 = iVar5 + -1;
    uVar9 = uVar9 - 1;
    uVar7 = (uint)*(ushort *)(&DAT_0003cc30 + iVar4);
    if (*(short *)(&DAT_0003cbf0 + iVar4) < 0) {
      uVar7 = -uVar7;
    }
    if ((((&DAT_0003cb80)[iVar5] & 1) == 0) ||
       (((DAT_0003cb80 & 8) != 0 &&
        ((((&DAT_0003cb80)[iVar5] & 8) == 0 || (((&DAT_0003cbb7)[iVar5] & 0x10) != 0)))))) {
LAB_000d473a:
      uVar7 = 0xffff0001;
    }
    else {
      bVar1 = false;
      if ((iVar2 != 0x10) && (iVar2 != 9)) {
        bVar1 = true;
      }
      if ((!bVar1) && ((DAT_0003cbef & 0x10) != 0)) goto LAB_000d473a;
    }
    if (DAT_0003cc6f == uVar9) {
      uVar7 = uVar7 + (uint)DAT_0003f424 + (uint)DAT_0003cc6c;
    }
    *(uint *)((int)auStack_90 + iVar3) = uVar7;
    iVar5 = iVar2;
    iVar4 = iVar4 + -2;
    iVar3 = iVar3 + -4;
    if (iVar2 == 0) {
      uVar9 = (uint)DAT_0003f471;
      iVar3 = 0xc;
      auStack_20[2] = 4;
      iVar5 = 0x30;
      iVar4 = 0x18;
      do {
        iVar3 = iVar3 + -1;
        iVar2 = iVar5 + -4;
        uVar7 = (uint)*(byte *)(iVar4 + 0xfb31a);
        if ((int)auStack_90[*(byte *)(iVar4 + 0xfb31a) + 1] <
            (int)(auStack_90[*(byte *)(iVar4 + 0xfb31b) + 1] + uVar9)) {
          uVar7 = (uint)*(byte *)(iVar4 + 0xfb31b);
        }
        *(uint *)((int)auStack_4c + iVar5) = uVar7;
        iVar5 = iVar2;
        iVar4 = iVar4 + -2;
      } while (iVar2 != 0);
      iVar5 = iVar3 * 4;
      do {
        iVar4 = iVar5 + 4;
        if (iVar4 == 0x30) {
          uVar9 = (uint)DAT_0003f425;
        }
        uVar8 = *(uint *)((int)auStack_4c + iVar5 + 8);
        if ((int)auStack_90[uVar7 + 1] < (int)(auStack_90[uVar8 + 1] + uVar9)) {
          uVar7 = uVar8;
        }
        iVar5 = iVar4;
      } while (iVar4 < 0x30);
      uVar6 = select_entry_by_threshold_000d4884(uVar7);
      return uVar6;
    }
  } while( true );
}
