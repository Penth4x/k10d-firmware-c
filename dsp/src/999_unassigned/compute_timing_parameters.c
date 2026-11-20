/* @k10d compute_timing_parameters @ 0x000d8cea
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Calculates timing parameters from 16 bytes of input data and helper function results.
 * summary:
 *   The function reads 16 bytes from memory offsets 0x3c6c0 or 0x3c6d0 based on param_1. It
 *   processes these bytes along with values from helper functions (compute_16_byte_deltas,
 *   count_valid_entries_in_array, etc.) using arithmetic operations (division,
 *   multiplication, clamping) to derive several short values. These values are passed to
 *   store_four_bytes_to_dat_block, and the function returns the result of
 *   compute_16_byte_deltas.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort compute_timing_parameters(short param_1)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  uint32_t uVar5;
  ushort uVar8;
  int iVar6;
  short sVar9;
  short sVar10;
  uint32_t uVar7;
  short sVar11;
  uint8_t uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uintptr_t sp;
  uint *puVar16;
  uint8_t auStack_6c [7];
  uint8_t uStack_65;
  ushort local_64 [16];
  uint8_t *puStack_44;
  ushort *puStack_40;
  short sStack_3c;
  ushort uStack_3a;
  ushort uStack_38;
  ushort uStack_36;
  ushort uStack_34;
  ushort uStack_32;
  ushort uStack_30;
  short sStack_2e;
  short sStack_2c;
  short sStack_2a;
  short sStack_28;
  short sStack_26;
  short sStack_24;
  short sStack_22;
  short sStack_20;
  short sStack_1e;
  
  puVar16 = (uint *)auStack_6c;
  sStack_2a = 0;
  uStack_34 = 0;
  iVar3 = 0x20;
  do {
    iVar15 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    *(uint8_t *)((int)local_64 + iVar3 + -1) = *(uint8_t *)((int)&DAT_000fc04e + iVar3 + 1);
    iVar3 = iVar15;
  } while (bVar1 && iVar15 != 0);
  sStack_3c = 0;
  bVar1 = false;
  puStack_44 = &DAT_0003c520;
  quantize_four_sample_deltas(0x3c500,&DAT_0003c520,0x3c530);
  transform_four_byte_blocks(puStack_44,0x3c550);
  FUN_000c145c();
  sStack_26 = _DAT_0003c562 - (ushort)DAT_0003c568;
  uStack_38 = compute_16_byte_deltas((int)param_1);
  iVar3 = 0;
  do {
    if (param_1 == 2) {
      local_64[iVar3] = (ushort)*(byte *)(iVar3 + 0x3c6d0);
      if ((iVar3 == 0xe) && (local_64[0xe] != 0xff)) {
        sStack_3c = 1;
      }
      if ((iVar3 == 0xf) && (local_64[0xf] != 0xff)) {
        bVar1 = true;
      }
    }
    else {
      local_64[iVar3] = (ushort)*(byte *)(iVar3 + 0x3c6c0);
      if ((iVar3 == 0xe) && (local_64[0xe] != 0xff)) {
        sStack_3c = 1;
      }
      if ((iVar3 == 0xf) && (local_64[0xf] != 0xff)) {
        bVar1 = true;
      }
    }
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 0x10);
  update_status_flags_and_value();
  puStack_40 = local_64;
  uVar4 = count_valid_entries_in_array(puStack_40,0,0);
  uVar5 = find_max_active_bit_value((int)param_1,uVar4);
  uStack_30 = select_top_three_values(uVar5,puStack_40,uVar4);
  iVar3 = find_max_active_bit_value((int)param_1,uVar4);
  uStack_32 = find_min_valid_byte((int)param_1);
  uStack_3a = (ushort)uVar4;
  sVar11 = (short)iVar3;
  if (iVar3 == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = select_top_three_values(iVar3,puStack_40,uVar4 & 0xffff);
    puVar2 = puStack_40;
    uStack_30 = (ushort)iVar15;
    if (((iVar15 == 0xff) || (uStack_30 < 0x11)) || (iVar3 < 0x89)) {
      uVar8 = 0x1a;
    }
    else {
      uVar8 = uStack_30 + 10;
      if (0x28 < uVar8) {
        uVar8 = 0x28;
      }
    }
    *puVar16 = (uint)uStack_3a;
    puVar16[1] = 0;
    uStack_34 = accumulate_range_masked_values(sVar11,(int)puVar2,uVar8,0,(ushort)*puVar16,
                             *(short *)((int)puVar16 + 6));
    puVar2 = puStack_40;
    if (uStack_38 != 0) {
      *puVar16 = (uint)uStack_3a;
      puVar16[1] = 1;
      uVar8 = accumulate_range_masked_values(sVar11,(int)puVar2,uVar8,0,(ushort)*puVar16,*(short *)((int)puVar16 + 6))
      ;
      if (uVar8 < uStack_34) {
        uStack_34 = uVar8;
      }
    }
    iVar15 = (int)(short)(sVar11 - uStack_34);
  }
  uStack_36 = compute_weighted_average_000d9810(uStack_34,puStack_40,uStack_3a,0);
  iVar6 = compute_weighted_average_000d9810(uStack_34,puStack_40,uStack_3a,1);
  iVar14 = iVar15;
  if (((uStack_36 != 0) && (iVar6 != 0)) &&
     (iVar6 = (int)(short)((uint)uStack_36 - iVar6 >> 1), iVar15 < iVar6)) {
    iVar14 = iVar6;
  }
  if (0x70 < sStack_26) {
    iVar15 = iVar14;
  }
  if (DAT_0003c6f3 < 0xe) {
    if ((sStack_3c == 1) && ((int)(uint)_DAT_0003c6e4 >> 0xe != 1)) {
      if ((bVar1) && ((int)(uint)_DAT_0003c6e4 >> 0xf != 1)) {
        uVar4 = ((uint)local_64[0xe] + (uint)local_64[0xf]) / 2;
        bVar1 = false;
      }
      else {
        uVar4 = (uint)local_64[0xe];
        bVar1 = false;
      }
    }
    else if ((bVar1) && ((int)(uint)_DAT_0003c6e4 >> 0xf != 1)) {
      uVar4 = (uint)local_64[0xf];
      bVar1 = false;
    }
    else {
      bVar1 = true;
      uVar4 = 0xff;
    }
    if ((uVar4 == 0xff) || (bVar1)) {
      iVar6 = 6;
    }
    else {
      iVar6 = (int)(short)((sVar11 + -0xc) - (short)uVar4);
    }
    sVar9 = clamp_value_to_range_000d9ac0(iVar6,0xfffffffa,6);
    sStack_20 = (sVar11 - uStack_32) + -0x18;
    if ((sStack_20 < 0) || ((uStack_30 != 0xff && (0x18 < uStack_30)))) {
      sStack_20 = 0;
    }
    sStack_22 = 0x7c - uStack_32;
    sStack_22 = clamp_value_to_range_000d9ac0((int)sStack_22,0,0x18);
    sStack_24 = sStack_26 + -0x6c;
    if (sStack_24 < 0) {
      sStack_24 = 0;
    }
    uVar5 = compute_signed_half_sum(2,(uint)uStack_38 * 0x18);
    sStack_1e = sStack_24 + sStack_20 + sVar9 + sStack_22 + (short)uVar5;
    if (uStack_30 == 0xff) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(short)uStack_30;
    }
    iVar13 = (int)(short)((short)iVar6 + -6);
    if (iVar13 < 0x13) {
      iVar13 = clamp_value_to_range_000d9ac0(iVar13,0xfffffffa,6);
      sStack_2c = sStack_1e + (short)iVar13;
    }
    else {
      iVar13 = (int)(short)((short)(0x18 - iVar6) * 2);
      uVar5 = compute_signed_half_sum(2,0x18 - iVar6);
      uVar5 = compute_signed_half_sum(2,(int)(short)uVar5 + (int)sStack_1e);
      sStack_2c = (short)uVar5;
      if ((short)uVar5 < 0) {
        sStack_2c = 0;
      }
    }
    uVar5 = compute_signed_half_sum(3,(sStack_1e + iVar13) * 2);
    sStack_2e = (short)uVar5;
    sStack_2e = clamp_value_to_range_000d9ac0((int)(short)uVar5,0xfffffff8,8);
  }
  else {
    sStack_2c = 0xc;
    sStack_2e = 8;
  }
  if ((0x78 < sStack_26) && (iVar15 < 7)) {
    iVar15 = (int)(short)((short)iVar15 + 2);
  }
  if (uStack_34 < 0x90) {
    if (0xc < iVar15) {
      iVar15 = 0xc;
    }
  }
  else if (0xe < iVar15) {
    iVar15 = 0xe;
  }
  if (iVar3 != 0) {
    sVar9 = (short)iVar15;
    if ((DAT_0003c6f7 & 1) == 0) {
      sStack_28 = ((DAT_0003c6f4 + 8) - sVar11) * 0xc;
      uVar5 = compute_signed_half_sum(0x10,(int)sStack_28);
      sStack_28 = (short)uVar5;
      sStack_28 = clamp_value_to_range_000d9ac0((int)(short)uVar5,0xfffffff8,8);
      uVar5 = compute_signed_half_sum(2,sStack_26 + -0x6c);
      sVar10 = (short)uVar5;
      if ((short)uVar5 < 0) {
        sVar10 = 0;
      }
      sStack_2a = DAT_0003c6f4 - uStack_34;
      uVar5 = compute_signed_half_sum(2,(int)sStack_2a);
      sStack_2a = (short)uVar5 + sVar10;
      if (sStack_28 < 0) {
        if ((DAT_0003c6f4 < uStack_32) && (uStack_38 == 0)) {
          uVar5 = compute_signed_half_sum(2,(int)-sVar9);
          iVar15 = (int)(short)uVar5;
        }
        else if ((DAT_0003c6f4 < uStack_34) && (uStack_38 == 0)) {
          uVar5 = compute_signed_half_sum(8,(int)(short)((sStack_28 + 4) * sVar9));
          iVar15 = (int)(short)uVar5;
        }
        else if ((uStack_30 == 0xff) || (uStack_30 < 0x11)) {
          uVar5 = compute_signed_half_sum(8,(int)(short)((sStack_28 + 8) * sVar9));
          iVar15 = (int)(short)uVar5;
          if (sStack_2a < 0) {
            sStack_2a = 0;
          }
        }
        else {
          uVar5 = compute_signed_half_sum(0x10,(int)(short)(sStack_28 * sVar9));
          iVar15 = (int)(short)uVar5;
          uVar5 = compute_signed_half_sum(4,(int)sStack_2a);
          sStack_2a = (short)uVar5;
        }
        if ((0x70 < sStack_26) && (iVar15 < 0)) {
          uVar5 = compute_signed_half_sum(4,(int)(short)(0x90 - sStack_26));
          sVar9 = clamp_value_to_range_000d9ac0((int)(short)uVar5,4,8);
          uVar5 = compute_signed_half_sum(8,(int)(short)((short)iVar15 * sVar9));
          iVar15 = (int)(short)uVar5;
        }
      }
      else if (sStack_2e < 0) {
        iVar15 = FUN_000d93d8(iVar3,iVar15,(int)sStack_2e);
        sStack_2a = sStack_2c + 4;
      }
    }
    else {
      sStack_2a = sStack_2c;
      if (sStack_2e < 0) {
        iVar15 = FUN_000d93d8(iVar3,iVar15,(int)sStack_2e);
      }
      else if (((uStack_30 == 0xff) || (uStack_30 < 0xd)) || (uStack_32 < 0x69)) {
        uVar5 = compute_signed_half_sum(8,(int)(short)(sVar9 * sStack_2e));
        iVar15 = (int)(short)uVar5;
      }
      else {
        uVar5 = compute_signed_half_sum(3,(int)(short)(0x18 - uStack_30));
        sVar10 = clamp_value_to_range_000d9ac0((int)(short)uVar5,0,4);
        uVar5 = compute_signed_half_sum(0x40,(int)(short)(sStack_2e * sVar9 * sVar10));
        iVar15 = (int)(short)uVar5;
      }
    }
  }
  iVar6 = clamp_value_to_range_000d9ac0((int)sStack_2a,0xfffffff8,8);
  uVar5 = compute_signed_half_sum(8,(int)(short)((short)iVar14 * (short)iVar6));
  iVar14 = (int)(short)uVar5;
  if (iVar6 < 0) {
    uVar7 = compute_signed_half_sum(4,(int)(short)(0x94 - sVar11));
    sVar11 = clamp_value_to_range_000d9ac0((int)(short)uVar7,0,8);
    uVar5 = compute_signed_half_sum(8,(int)(short)((short)uVar5 * (8 - sVar11)));
    iVar14 = (int)(short)uVar5;
  }
  else if (sStack_26 < 0x78) {
    sVar11 = clamp_value_to_range_000d9ac0((int)(short)(0x80 - sVar11),0,0x10);
    uVar5 = compute_signed_half_sum(0x10,(int)(short)(sVar11 << 3));
    iVar6 = (int)(short)(0xe - (short)uVar5);
    if (iVar6 < iVar14) {
      iVar14 = iVar6;
    }
  }
  uVar12 = clamp_value_to_range_000d9ac0(iVar14,0xfffffff8,0xe);
  uVar8 = uStack_34;
  *puVar16 = (int)param_1;
  store_four_bytes_to_dat_block((char)iVar3,(char)uVar8,uVar12,(char)iVar15,(short)*puVar16);
  return uStack_38;
}
