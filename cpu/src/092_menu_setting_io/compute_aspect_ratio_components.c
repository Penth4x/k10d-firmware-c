/* @k10d compute_aspect_ratio_components @ 0x10409d22
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_aspect_ratio_components(void *param_1,uint param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint extraout_r4;
  uint32_t extraout_r4_00;
  uint32_t extraout_r4_01;
  uint extraout_r5;
  uint32_t extraout_r5_00;
  uint32_t extraout_r5_01;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint64_t uVar4;
  
  if (param_3 == 0) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    uVar1 = param_2 / param_3;
    uVar3 = param_2 % param_3;
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3 / param_2;
  }
  if (uVar1 < 3) {
    if (uVar2 < 4) {
      if (uVar3 == 0) {
        *param_4 = uVar1;
        *param_5 = 1;
      }
      else {
        if (param_3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar3 = compute_log2_index(param_2);
          convert_signed_byte_to_unsigned(uVar3);
          multiply_two_floats(extraout_r4,extraout_r5,0x40240000,0);
          uVar3 = compute_log2_index(param_3);
          convert_signed_byte_to_unsigned(uVar3);
          uVar4 = multiply_fixed_point_values_105445a2(extraout_r4_00,extraout_r5_00,extraout_r4_01,extraout_r5_01);
        }
        uVar3 = normalize_fixed_point_value_105448ac((uint)((ulonglong)uVar4 >> 0x20),(uint)uVar4);
        *param_4 = uVar3;
        *param_5 = 10;
      }
    }
    else {
      *param_4 = 1;
      *param_5 = uVar2;
    }
  }
  else {
    *param_4 = uVar1;
    *param_5 = 1;
  }
  return;
}
