/* @k10d binary_search_lookup_table @ 0x104ff07a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Performs a binary search on a 100-entry table to find the index where a value matches
 *   or exceeds a threshold.
 * summary:
 *   The function initializes state via four helper calls, then executes a binary search
 *   loop between indices 1 and 100. It compares table entries (located at a fixed offset)
 *   against a value derived from normalize_fixed_point_value_105448ac. The result is stored
 *   in param_4 multiplied by 100, suggesting a percentage or scaled value output.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void binary_search_lookup_table(uint32_t param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint32_t extraout_r4;
  uint32_t extraout_r4_00;
  uint extraout_r4_01;
  uint uVar4;
  uint32_t extraout_r5;
  uint32_t extraout_r5_00;
  uint extraout_r5_01;
  uint uVar5;
  uint64_t uVar6;
  
  compute_lens_fw_crc32(param_2);
  compute_lens_fw_crc32(param_3);
  uVar6 = multiply_fixed_point_values_105445a2(extraout_r4,extraout_r5,extraout_r4_00,extraout_r5_00);
  multiply_two_floats((uint)((ulonglong)uVar6 >> 0x20),(uint)uVar6,0x408f4000,0);
  uVar4 = normalize_fixed_point_value_105448ac(extraout_r4_01,extraout_r5_01);
  uVar2 = 0;
  uVar3 = 100;
  *param_4 = *param_4 / 100;
  do {
    uVar1 = (uVar2 + uVar3) / 2;
    *param_4 = uVar1;
    if (uVar1 == 0) {
      *param_4 = 1;
      uVar3 = *param_4;
      goto LAB_104ff15a;
    }
    if (uVar1 == 100) break;
    uVar5 = *(uint *)(uVar1 * 4 + -0x7ffeee78);
    if (uVar5 < uVar4) {
      uVar2 = uVar1 + 1 & 0xff;
    }
    else {
      if (uVar5 <= uVar4) break;
      uVar3 = uVar1 - 1 & 0xff;
    }
  } while (uVar2 < uVar3);
  uVar3 = *param_4;
LAB_104ff15a:
  *param_4 = uVar3 * 100;
  return;
}
