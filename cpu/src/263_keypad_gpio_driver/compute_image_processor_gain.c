/* @k10d compute_image_processor_gain @ 0x104fedc4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Calculates a gain or exposure value for the image processor based on input parameters
 *   and a lookup table.
 * summary:
 *   The function takes two parameters and a pointer for the result. It calls helper
 *   functions to retrieve values, then performs a binary search on a lookup table (indexed
 *   by values 1-100) to find a matching entry. The result is scaled by 100 and clamped
 *   between 100 and 10000. It also handles a specific case where a value exceeds 0xc1,
 *   returning 10000 directly. The logic suggests it is determining a sensor gain or
 *   exposure compensation value for the image pipeline.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_image_processor_gain(uint32_t param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint32_t extraout_r4;
  uint32_t extraout_r4_00;
  uint extraout_r4_01;
  uint uVar3;
  uint extraout_r4_02;
  uint extraout_r4_03;
  uint extraout_r4_04;
  uint extraout_r4_05;
  uint extraout_r4_06;
  uint extraout_r4_07;
  uint extraout_r4_08;
  uint extraout_r4_09;
  uint extraout_r4_10;
  uint extraout_r4_11;
  uint extraout_r4_12;
  uint extraout_r4_13;
  uint extraout_r4_14;
  uint extraout_r4_15;
  uint extraout_r4_16;
  uint extraout_r4_17;
  uint extraout_r4_18;
  uint extraout_r4_19;
  uint extraout_r4_20;
  uint uVar4;
  uint extraout_r4_21;
  uint uVar5;
  uint32_t extraout_r5;
  uint32_t extraout_r5_00;
  void *pvVar6;
  uint extraout_r5_01;
  void *extraout_r5_02;
  uint extraout_r5_03;
  uint extraout_r5_04;
  uint extraout_r5_05;
  void *extraout_r5_06;
  uint extraout_r5_07;
  uint extraout_r5_08;
  uint extraout_r5_09;
  void *extraout_r5_10;
  uint extraout_r5_11;
  uint extraout_r5_12;
  void *extraout_r5_13;
  uint extraout_r5_14;
  uint extraout_r5_15;
  uint extraout_r5_16;
  void *extraout_r5_17;
  void *extraout_r5_18;
  uint extraout_r5_19;
  uint extraout_r5_20;
  uint extraout_r5_21;
  byte bVar7;
  byte bVar8;
  uint64_t uVar9;
  
  compute_lens_fw_crc32(param_2);
  compute_lens_fw_crc32(param_3);
  uVar9 = multiply_fixed_point_values_105445a2(extraout_r4,extraout_r5,extraout_r4_00,extraout_r5_00);
  uVar4 = (uint)((ulonglong)uVar9 >> 0x20);
  pvVar6 = (void *)uVar9;
  multiply_two_floats(uVar4,(uint)pvVar6,0x40590000,0);
  uVar3 = normalize_fixed_point_value_105448ac(extraout_r4_01,extraout_r5_01);
  bVar7 = uVar3 < 0x6e;
  bVar8 = uVar3 == 0x6e;
  if (uVar3 < 0x6f) {
    bVar7 = uVar3 < 0x5a;
    bVar8 = uVar3 == 0x5a;
    if (!(bool)bVar7) {
      return;
    }
  }
  compute_lens_fw_block_offset_10544502(uVar4,pvVar6,0x40000000);
  if ((bVar7 | bVar8) == 1) {
    if ((0x2e < uVar3) && (param_2 >> 1 < param_3)) {
      if (0xc1 < uVar3) {
        *param_4 = 10000;
        return;
      }
      multiply_two_floats(0x4083b07a,0xe147ae14,uVar4,(uint)pvVar6);
      multiply_two_floats(uVar4,(uint)pvVar6,uVar4,(uint)pvVar6);
      compare_64_bit_integers(extraout_r4_02,extraout_r5_02,0x4048b126,0xe978d4fe);
      multiply_two_floats(0x40935a66,0x66666666,uVar4,(uint)pvVar6);
      multiply_two_floats(extraout_r4_05,extraout_r5_05,extraout_r4_03,extraout_r5_03);
      multiply_two_floats(0x4092b800,0,uVar4,(uint)pvVar6);
      multiply_two_floats(extraout_r4_07,extraout_r5_07,uVar4,(uint)pvVar6);
      compare_64_bit_integers(extraout_r4_06,extraout_r5_06,extraout_r4_08,extraout_r5_08);
      multiply_two_floats(0xc03be49b,0xa5e353f8,uVar4,(uint)pvVar6);
      add_two_64_bit_integers(extraout_r4_10,extraout_r5_10,0x406b9800,0);
      multiply_two_floats(extraout_r4_11,extraout_r5_11,uVar4,(uint)pvVar6);
      multiply_two_floats(extraout_r4_12,extraout_r5_12,extraout_r4_03,extraout_r5_03);
      multiply_two_floats(0x40867985,0x1eb851ec,uVar4,(uint)pvVar6);
      multiply_two_floats(extraout_r4_14,extraout_r5_14,uVar4,(uint)pvVar6);
      compare_64_bit_integers(extraout_r4_13,extraout_r5_13,extraout_r4_15,extraout_r5_15);
      multiply_two_floats(extraout_r4_16,extraout_r5_16,extraout_r4_03,extraout_r5_03);
      add_two_64_bit_integers(extraout_r4_17,extraout_r5_17,extraout_r4_09,extraout_r5_09);
      add_two_64_bit_integers(extraout_r4_18,extraout_r5_18,extraout_r4_04,extraout_r5_04);
      multiply_two_floats(extraout_r4_19,extraout_r5_19,0x40590000,0);
      uVar4 = normalize_fixed_point_value_105448ac(extraout_r4_20,extraout_r5_20);
      *param_4 = uVar4;
      if ((100 < uVar4) && (uVar4 < 10000)) {
        return;
      }
      if (uVar4 < 10000) {
        uVar4 = 100;
      }
      else {
        uVar4 = 10000;
      }
      *param_4 = uVar4;
      return;
    }
    multiply_two_floats(uVar4,(uint)pvVar6,0x408f4000,0);
    uVar5 = normalize_fixed_point_value_105448ac(extraout_r4_21,extraout_r5_21);
    uVar4 = 0;
    uVar3 = 100;
    do {
      uVar1 = (uVar4 + uVar3) / 2;
      *param_4 = uVar1;
      if (uVar1 == 0) {
        *param_4 = 1;
        uVar4 = *param_4;
        goto code_r0x104ff06a;
      }
      if (uVar1 == 100) break;
      uVar2 = *(uint *)(uVar1 * 4 + -0x7ffef00c);
      if (uVar2 < uVar5) {
        uVar4 = uVar1 + 1 & 0xff;
      }
      else {
        if (uVar2 <= uVar5) break;
        uVar3 = uVar1 - 1 & 0xff;
      }
    } while (uVar4 < uVar3);
    uVar4 = *param_4;
code_r0x104ff06a:
    *param_4 = uVar4 * 100;
  }
  else {
    *param_4 = 10000;
  }
  return;
}
