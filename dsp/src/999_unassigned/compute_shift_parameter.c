/* @k10d compute_shift_parameter @ 0x000c0080
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Calculates a signed offset value from configuration bytes and stores it in a global
 *   variable.
 * summary:
 *   The function reads 16 bytes from 0x3c530 and 0x3c550, performs arithmetic using helper
 *   functions divide_two_integers and unsigned_divide, and branches based on param_1 and
 *   flags in DAT_0003c127. It computes a final value involving differences and sums of
 *   local variables, adjusts it with clamp_index_by_dat_limits and clamp_and_sum_16_values,
 *   and writes the result to DAT_0003c5a0. The specific hardware or subsystem context is
 *   not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_shift_parameter(int param_1)

{
  bool bVar1;
  int iVar2;
  short sVar4;
  uint32_t uVar3;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uintptr_t sp;
  uint uStack_b4;
  uint local_b0;
  short sStack_ae;
  uint local_ac [6];
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  uint uStack_78;
  uint uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  uint32_t uStack_28;
  int iStack_24;
  uint uStack_20;
  short sStack_1c;
  short sStack_1a;
  
  iVar2 = 0x40;
  do {
    iVar8 = iVar2 + -4;
    bVar1 = 3 < iVar2;
    *(uint32_t *)((int)&uStack_b4 + iVar2) = *(uint32_t *)(iVar2 + 0xf8ffc);
    iVar2 = iVar8;
  } while (bVar1 && iVar8 != 0);
  DAT_0003c5a2 = DAT_0003c5a2 & 0xfd;
  iVar2 = 0;
  iVar6 = 4;
  iVar8 = 0;
  do {
    *(uint *)((int)&stack0xffffff50 + iVar8) =
         (uint)*(byte *)(iVar2 + 0x3c550) * 4 + (uint)*(byte *)(iVar2 + 0x3c530);
    *(uint *)((int)local_ac + iVar8) =
         (uint)*(byte *)(iVar2 + 0x3c551) * 4 + (uint)*(byte *)(iVar2 + 0x3c531);
    *(uint *)((int)local_ac + iVar8 + 4) =
         (uint)*(byte *)(iVar2 + 0x3c552) * 4 + (uint)*(byte *)(iVar2 + 0x3c532);
    *(uint *)((int)local_ac + iVar8 + 8) =
         (uint)*(byte *)(iVar2 + 0x3c553) * 4 + (uint)*(byte *)(iVar2 + 0x3c533);
    iVar8 = iVar8 + 0x10;
    iVar2 = iVar2 + 4;
    iVar6 = iVar6 + -1;
  } while (0 < iVar6);
  uVar7 = local_b0;
  if (local_ac[0] < local_b0) {
    uVar7 = local_b0 + local_ac[0] >> 1;
  }
  iStack_4c = local_ac[1] << 4;
  iStack_50 = local_ac[3] << 4;
  iStack_54 = local_ac[4] << 4;
  iStack_70 = iStack_90 * 0x10 + local_ac[2] * 0x10;
  iStack_58 = iStack_8c << 4;
  iStack_5c = iStack_80 << 4;
  iVar6 = iStack_7c * 0x10;
  sVar4 = divide_two_integers(local_ac[5] + -0x220,4);
  iVar2 = clamp_value_to_range_000d9ac0((int)sVar4,0x20,0x40);
  sStack_1c = (short)iVar2;
  iVar2 = iVar2 * local_ac[5];
  sVar4 = divide_two_integers(iStack_94 + -0x220,4);
  iVar8 = clamp_value_to_range_000d9ac0((int)sVar4,0x20,0x40);
  sStack_1a = (short)iVar8;
  iStack_6c = iStack_50 + iStack_70 + iVar8 * iStack_94 + iStack_5c;
  sVar4 = divide_two_integers(iStack_88 + -0x220,4);
  iVar8 = clamp_value_to_range_000d9ac0((int)sVar4,0x20,0x40);
  iStack_68 = sStack_1c + iVar8;
  iStack_64 = iStack_6c + iVar8 * iStack_88 + iVar2 + iStack_4c + iStack_54 + iStack_58;
  sVar4 = divide_two_integers(iStack_84 + -0x220,4);
  iVar2 = clamp_value_to_range_000d9ac0((int)sVar4,0x20,0x40);
  iStack_38 = unsigned_divide(iVar2 * iStack_84 + iStack_64 + iVar6,
                           iStack_68 + sStack_1a + iVar2 + 0x80);
  uStack_3c = uStack_78 + uStack_74 >> 1;
  iStack_40 = find_min_in_12_uint_array(&stack0xffffff50);
  iStack_60 = find_min_per_group_and_sum((int)&stack0xffffff50);
  iStack_44 = find_max_in_12_uint_array(&stack0xffffff50);
  if (param_1 == 2) {
    _DAT_0003c5a0 = sStack_ae;
  }
  else if ((((param_1 == 1) || ((DAT_0003c127 & 2) != 0)) || ((DAT_0003c127 & 1) != 0)) ||
          (DAT_0003c440 == '\x11')) {
    iVar2 = unsigned_divide(iStack_88 + local_ac[5] + local_ac[1] + local_ac[2] + iStack_94 + iStack_84
                         ,3);
    iVar8 = unsigned_divide(iStack_80 + iStack_90 + local_ac[3] + local_ac[4] + iStack_8c + iStack_7c,6
                        );
    uVar3 = unsigned_divide(iVar8 + iVar2,3);
    store_computed_index(uVar7,uVar3,uStack_3c);
    accumulate_threshold_offsets(&stack0xffffff50);
  }
  else {
    iStack_30 = compute_offset_difference();
    iStack_34 = 0;
    if ((0x1f < iStack_30) && (iStack_30 < 0x35)) {
      iStack_34 = 1;
    }
    iStack_24 = uVar7 - uStack_3c;
    if ((int)uVar7 < (int)uStack_3c) {
      iStack_24 = -iStack_24;
    }
    uStack_20 = (uint)((int)uVar7 < (int)uStack_3c);
    iVar2 = divide_two_integers(iStack_24,4);
    if (8 < iVar2) {
      iVar2 = 0x10 - iVar2;
    }
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    iVar8 = divide_two_integers(iStack_24,8);
    if (4 < iVar8) {
      iVar8 = 8 - iVar8;
    }
    if (iVar8 < 2) {
      iVar8 = 1;
    }
    set_flag_if_threshold_met(uStack_20,iStack_24);
    iStack_2c = 0;
    if ((int)(uint)DAT_000f9de5 < iStack_24) {
      if (uStack_20 == 1) {
        iVar8 = 1;
        iStack_48 = iVar2;
        if ((DAT_0003c58b & 1) == 0) {
          if ((((DAT_0003c440 == '\0') && (DAT_0003c444 == '\0')) || (DAT_0003c440 != '\0')) &&
             ((iStack_2c = compute_clamped_product(uVar7,iStack_30), 0x40 < (uint)(iStack_44 - iStack_40) &&
              ((0x1ff < uStack_78 || (0x1ff < uStack_74)))))) {
            if ((0x60 < (int)(uStack_78 - uStack_74)) || ((int)(uStack_78 - uStack_74) < -0x60)) {
              iStack_38 = iStack_60;
            }
            if ((0x60 < iStack_90 - iStack_8c) || (iStack_90 - iStack_8c < -0x60)) {
              iStack_38 = iStack_60;
            }
          }
          if (DAT_0003c57e == '\0') {
            iStack_2c = divide_two_integers(iStack_2c * 3,4);
          }
        }
      }
      else {
        iStack_48 = 1;
        iVar2 = 1;
      }
    }
    else {
      iStack_48 = 2;
      iVar2 = 4;
      iVar8 = 1;
    }
    if ((((DAT_0003c3b1 == '\x01') && ((DAT_0003ce06 & 0x20) != 0)) && (iStack_34 == 1)) &&
       ((DAT_0003c580 & 0x10) == 0)) {
      iVar2 = map_mode_to_group(iVar2);
      iStack_38 = select_field_by_mode(&stack0xffffff50,iStack_38);
      if (0x80 < (uint)(iStack_44 - iStack_40)) {
        iVar8 = 0;
      }
    }
    uStack_28 = clamp_index_by_dat_limits(uVar7);
    uVar5 = iVar2 + iStack_48 + iVar8;
    if (uVar5 == 0) {
      _DAT_0003c5a0 = (short)uVar7;
    }
    else {
      sVar4 = divide_two_integers((iStack_38 * iVar2 & 0xffffU) + (uVar7 * iStack_48 & 0xffff) +
                           (uStack_3c * iVar8 & 0xffff),uVar5 & 0xffff);
      _DAT_0003c5a0 = (sVar4 - (short)uStack_28) - (short)iStack_2c;
      if (DAT_0003c57e == '\x01') {
        sVar4 = clamp_and_sum_16_values(&stack0xffffff50);
        _DAT_0003c5a0 = _DAT_0003c5a0 + sVar4;
      }
    }
    accumulate_threshold_offsets(&stack0xffffff50);
  }
  return;
}
