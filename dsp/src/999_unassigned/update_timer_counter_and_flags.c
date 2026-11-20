/* @k10d update_timer_counter_and_flags @ 0x000cf51a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Increments a byte counter, processes a 32-bit bitmask to update status fields, and sets
 *   a flag based on threshold comparisons.
 * summary:
 *   The function increments the global byte at 0x3cf2c using a value derived from 0x4a. It
 *   iterates through a 32-bit mask (0x3cf00) to update 16-bit values at 0x3cf30 and
 *   0x3cf6c, calling FUN_000cf6d8 for each set bit. It then compares the computed value
 *   against thresholds in 0x3f48e and 0x3f48a to set or clear bit 5 (0x20) of the flag word
 *   at 0x3cf0e. Finally, it calls compute_adjusted_value_000d0770 with the computed value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_timer_counter_and_flags(uint8_t param_1)

{
  uint32_t uVar1;
  uint16_t uVar2;
  uint8_t uVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uStack_30;
  int iStack_24;
  int iStack_20;
  
  uVar10 = _DAT_0003cf00;
  uVar1 = _DAT_0000005a;
  uVar4 = (int)(_DAT_0000004a ^ 0xffffffff) >> 1;
  iVar5 = (uVar4 >> 8) - (uint)(byte)_DAT_0003cf2c;
  uVar6 = (ushort)iVar5;
  if ((char)iVar5 < '\0') {
    uVar6 = uVar6 + 0x80;
  }
  _DAT_0003cf2c = _DAT_0003cf2c + (uVar6 & 0xff);
  iVar5 = ((int)(uint)_DAT_0003cf2c >> 1) * 0x100 + (uVar4 >> 1 & 0xff);
  uVar6 = (ushort)iVar5;
  if (((((DAT_00000002 & 0x10) == 0) || (_DAT_0003cf2a <= _DAT_0003cf2c)) ||
      ((DAT_0003cf0e & 0x20) != 0)) || ((DAT_0003cf0e & 0x10) != 0)) {
    wait_for_status_bits_and_copy();
    if (uVar10 == 0) {
      _DAT_0003cf00 = 0xffffffc0;
    }
    uVar2 = increment_counter_if_flag_set(uVar10,uVar1);
    uStack_30 = _DAT_0003cf00;
    uVar10 = _DAT_0003cfa4 & _DAT_0003cf00;
    iVar9 = -0x111b03c0;
    iStack_20 = 0;
    iVar8 = 0;
    iStack_24 = 0x14;
    iVar7 = 0;
    do {
      if (iVar9 < 0) {
        if ((int)uVar10 < 0) {
          *(ushort *)(iVar7 + 0x3cf30) = uVar6;
          *(uint16_t *)(iVar7 + 0x3cf6c) = uVar2;
          uVar3 = param_1;
          if (_DAT_0003cfc8 != 0) {
            uVar3 = (&DAT_0003cf10)[iVar8];
          }
          (&DAT_0003cf10)[iVar8] = uVar3;
          iStack_20 = FUN_000cf6d8(iStack_20,iVar8);
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 2;
      }
      else if ((int)uStack_30 < 0) {
        *(ushort *)(iStack_24 * 2 + 0x3cf30) = uVar6;
        iStack_24 = iStack_24 + 1;
      }
      uStack_30 = uStack_30 << 1;
      uVar10 = uVar10 << 1;
      iVar9 = iVar9 * 2;
    } while (iVar9 != 0);
    uVar10 = _DAT_0003cf00 & _DAT_0003cfa0;
    if (uVar10 == _DAT_0003cfa0) {
      _DAT_0003cf2e = uVar6;
    }
    if ((((DAT_0003f48e != '\0') &&
         (uVar4 = unsigned_divide(iVar5,DAT_0003f48e), _DAT_0003cf2e < uVar4)) &&
        (DAT_0003f48a < _DAT_0003cf2c)) || ((0 < iStack_20 || (uVar6 = _DAT_0003cf2e, uVar10 == 0)))
       ) {
      uVar6 = _DAT_0003cf2e;
      if (_DAT_0003cfc8 == 0) {
        DAT_0003cf0e = DAT_0003cf0e | 0x20;
      }
      else {
        DAT_0003cf0e = DAT_0003cf0e & 0xdf;
      }
    }
  }
  _DAT_0003cf2e = uVar6;
  compute_adjusted_value_000d0770(iVar5);
  return;
}
