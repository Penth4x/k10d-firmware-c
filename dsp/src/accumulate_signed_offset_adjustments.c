/* @k10d accumulate_signed_offset_adjustments @ 0x000d3f30
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Computes a signed offset adjustment from table lookups and arithmetic, then adds it to
 *   a running accumulator.
 * summary:
 *   The function initializes a local accumulator (_DAT_0003cc2c) from _DAT_0003cd40. It
 *   performs two conditional adjustments: first, a table-driven lookup based on flags in
 *   DAT_0003cbef and values in a 0x10-byte table at 0x3f1a0, calling clamp_signed_value;
 *   second, a calculation involving DAT_0003cd47 and DAT_0003ccd6, calling
 *   divide_two_integers if a specific condition is met. The final accumulated value is
 *   added to _DAT_0003cbf0. The specific hardware or subsystem context is not determinable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void accumulate_signed_offset_adjustments(void)

{
  char *pcVar1;
  short sVar3;
  uint uVar2;
  int iVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  
  _DAT_0003cc2c = _DAT_0003cd40 + -0x100;
  if ((DAT_0003cbef & 0x20) == 0) {
    iVar7 = (int)_DAT_0003f24c + (int)_DAT_0003f1be >> 2;
    iVar8 = 0;
    iVar4 = 0;
    do {
      pcVar1 = (char *)(iVar4 + 0x3f1a0);
      cVar6 = DAT_0003c12b;
      if (((*pcVar1 != '\x01') && (cVar6 = DAT_0003c12a, *pcVar1 != '\x02')) &&
         (cVar6 = DAT_0003c113, *pcVar1 != '\x04')) break;
      if ((*(char *)(iVar4 + 0x3f1a1) != '\0') && (*(char *)(iVar4 + 0x3f1a1) == cVar6)) {
        iVar7 = iVar7 + ((int)*(short *)(iVar8 * 4 + 0x3f1a2) >> 2);
        break;
      }
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar4 < 0x10);
    if (((DAT_0003f3e1 & 0x80) == 0) && (_DAT_0003cef0 < 9)) {
      iVar7 = iVar7 - (uint)DAT_0003f1bc;
    }
    sVar3 = clamp_signed_value(iVar7);
    _DAT_0003cc2c = _DAT_0003cc2c + sVar3;
  }
  if (((DAT_0003f25a & 1) != 0) && ((DAT_0003cbef & 0x20) == 0)) {
    uVar5 = (uint)(DAT_0003cd47 >> 1);
    uVar2 = DAT_0003ccd6 + 2;
    if ((uVar2 < uVar5) && (((DAT_0003cb9b & 0x1f) == 0x15 || ((DAT_0003cbd4 & 2) != 0)))) {
      uVar2 = uVar5 - uVar2;
      iVar4 = (int)DAT_0003cd2a;
    }
    else if ((uVar2 < uVar5) || (((DAT_0003cb9b & 0x1f) != 0x1a && ((DAT_0003cbd4 & 2) == 0)))) {
      iVar4 = 0;
    }
    else {
      uVar2 = uVar2 - uVar5;
      iVar4 = (int)DAT_0003cd2b;
    }
    if (iVar4 < 0) {
      sVar3 = divide_two_integers(uVar2 * iVar4 * 4,DAT_0003cd47);
      _DAT_0003cc2c = _DAT_0003cc2c + sVar3;
    }
  }
  _DAT_0003cbf0 = _DAT_0003cbf0 + _DAT_0003cc2c;
  return;
}
