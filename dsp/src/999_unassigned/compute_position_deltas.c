/* @k10d compute_position_deltas @ 0x000dd68c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Reads 16-bit position values, applies scaling and sign corrections, and stores the
 *   resulting deltas relative to reference values.
 * summary:
 *   The function polls status bits in DAT_00000079 and DAT_00000085 to synchronize with a
 *   hardware state change. It reads 16-bit values from DAT_0000008a-0x90, optionally
 *   scaling them via unsigned_divide. It then calculates differences between current values
 *   and reference values stored in DAT_0003f370-0x7c, applying sign flips based on flags in
 *   DAT_0003f363. Finally, it applies a linear transformation using coefficients in
 *   DAT_0003f374 and DAT_0003f376 to the first two deltas before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x000dd75e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_position_deltas(void)

{
  uint8_t uVar1;
  short sVar2;
  uint8_t uVar3;
  uint16_t uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  char cVar11;
  short sStack_1c;
  short sStack_1a;
  
  uVar4 = _DAT_00000088;
  uVar3 = uRam00000087;
  sVar2 = _DAT_0000007c;
  uVar1 = uRam0000007b;
  DAT_00000078 = 0x80;
  DAT_00000084 = 0x80;
  DAT_0000007a = 0x23;
  DAT_00000086 = 0x23;
  DAT_0000042c = DAT_0000042c | 0xe1;
  DAT_00000085 = DAT_00000085 | 2;
  do {
  } while ((DAT_00000079 & 0x40) == 0);
  DAT_00000079 = DAT_00000079 & 0xbf | 2;
  sStack_1a = _DAT_0000007c;
  DAT_00000009 = DAT_00000009 & 0xf3 | 8;
  busy_wait_on_mode_flag(5);
  sStack_1c = _DAT_0000007c;
  do {
  } while ((DAT_00000079 & 0x40) == 0);
  DAT_00000079 = DAT_00000079 & 0xbf | 2;
  DAT_00000009 = DAT_00000009 & 0xf7 | 4;
  do {
  } while ((DAT_00000085 & 0x40) == 0);
  DAT_00000085 = DAT_00000085 & 0xbf;
  uVar5 = CONCAT22(_DAT_0000008a,_DAT_0000008c);
  uVar6 = CONCAT22(_DAT_0000008c,_DAT_0000008e);
  uVar7 = CONCAT22(_DAT_0000008e,uRam00000090);
  if (((DAT_0003f55e & 1) != 0) && (DAT_0003f54f != '\0')) {
    if (DAT_0003f54f != '\0') {
      __halt();
    }
    uVar5 = unsigned_divide(uVar5, __frv_reg_unset(5));
    uVar5 = uVar5 & 0xffff;
    uVar6 = unsigned_divide(uVar6,1);
    uVar6 = uVar6 & 0xffff;
    uVar7 = unsigned_divide(uVar7,1);
    uVar7 = uVar7 & 0xffff;
  }
  if (((DAT_0003c804 & 4) != 0) && ((DAT_0003c802 & 0x80) == 0)) {
    cVar9 = DAT_0003f3bb;
    cVar11 = DAT_0003f3ba;
    if ((DAT_0003c003 & 0x10) == 0) {
      cVar9 = DAT_0003f3b1;
      cVar11 = DAT_0003f3b0;
    }
    iVar10 = (int)cVar11;
    iVar8 = (int)cVar9;
    if (iVar10 < 0) {
      iVar10 = iVar10 * _DAT_0003c89c + -0x800;
      sStack_1a = (short)cVar11 - (short)((int)(iVar10 + ((uint)(iVar10 >> 0xb) >> 0x14)) >> 0xc);
    }
    else {
      iVar10 = iVar10 * _DAT_0003c89c + 0x800;
      sStack_1a = (short)cVar11 - (short)((int)(iVar10 + ((uint)(iVar10 >> 0xb) >> 0x14)) >> 0xc);
    }
    sStack_1a = sVar2 + sStack_1a;
    if (iVar8 < 0) {
      iVar8 = iVar8 * _DAT_0003c89c + -0x800;
      sStack_1c = sStack_1c +
                  ((short)cVar9 - (short)((int)(iVar8 + ((uint)(iVar8 >> 0xb) >> 0x14)) >> 0xc));
    }
    else {
      iVar8 = iVar8 * _DAT_0003c89c + 0x800;
      sStack_1c = sStack_1c +
                  ((short)cVar9 - (short)((int)(iVar8 + ((uint)(iVar8 >> 0xb) >> 0x14)) >> 0xc));
    }
  }
  if ((DAT_0003f363 & 1) == 0) {
    _DAT_0003c810 = sStack_1a - _DAT_0003f370;
  }
  else {
    _DAT_0003c810 = _DAT_0003f370 - sStack_1a;
  }
  if ((DAT_0003f363 & 2) == 0) {
    _DAT_0003c812 = sStack_1c - _DAT_0003f372;
  }
  else {
    _DAT_0003c812 = _DAT_0003f372 - sStack_1c;
  }
  if ((DAT_0003f363 & 4) == 0) {
    _DAT_0003c814 = (short)uVar5 - _DAT_0003f378;
  }
  else {
    _DAT_0003c814 = _DAT_0003f378 - (short)uVar5;
  }
  if ((DAT_0003f363 & 8) == 0) {
    _DAT_0003c816 = (short)uVar7 - _DAT_0003f37a;
  }
  else {
    _DAT_0003c816 = _DAT_0003f37a - (short)uVar7;
  }
  if ((DAT_0003f363 & 0x10) == 0) {
    _DAT_0003c818 = (short)uVar6 - _DAT_0003f37c;
  }
  else {
    _DAT_0003c818 = _DAT_0003f37c - (short)uVar6;
  }
  DAT_00000078 = uVar1;
  DAT_0000007a = (char)sVar2;
  DAT_00000084 = uVar3;
  DAT_00000086 = (char)uVar4;
  iVar8 = (int)_DAT_0003c810;
  _DAT_0003c810 =
       _DAT_0003c810 -
       (short)((int)_DAT_0003f374 * (int)_DAT_0003c812 +
               ((uint)((int)_DAT_0003f374 * (int)_DAT_0003c812 >> 7) >> 0x18) >> 8);
  _DAT_0003c812 =
       _DAT_0003c812 -
       (short)(_DAT_0003f376 * iVar8 + ((uint)(_DAT_0003f376 * iVar8 >> 7) >> 0x18) >> 8);
  return;
}
