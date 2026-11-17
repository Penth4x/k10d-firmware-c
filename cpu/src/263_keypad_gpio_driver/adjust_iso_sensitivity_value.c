/* @k10d adjust_iso_sensitivity_value @ 0x104ff166
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104ff24e) overlaps instruction at (ram,0x104ff24c)
    */

void adjust_iso_sensitivity_value(uint32_t param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint32_t extraout_r4;
  uint32_t extraout_r4_00;
  uint extraout_r4_01;
  uint uVar3;
  uint32_t extraout_r5;
  uint32_t extraout_r5_00;
  uint extraout_r5_01;
  uint64_t uVar4;
  
  compute_lens_fw_crc32(param_2);
  compute_lens_fw_crc32(param_3);
  uVar4 = multiply_fixed_point_values_105445a2(extraout_r4,extraout_r5,extraout_r4_00,extraout_r5_00);
  multiply_two_floats((uint)((ulonglong)uVar4 >> 0x20),(uint)uVar4,0x40590000,0);
  uVar3 = normalize_fixed_point_value_105448ac(extraout_r4_01,extraout_r5_01);
  if ((uVar3 < 0x6f) && (0x59 < uVar3)) {
    if (uVar3 < 0x6a) {
      uVar1 = *param_4;
      if (0x5e < uVar3) goto LAB_104ff2ca;
    }
    else {
      uVar1 = *param_4;
    }
    if (7999 < uVar1) {
      if (uVar1 < 9000) {
        if (0x69 < uVar3) {
          uVar1 = uVar1 + 0x32;
          if (uVar1 < 100) {
            uVar1 = 100;
          }
          goto LAB_104ff294;
        }
        uVar1 = uVar1 - 0x32;
        if (10000 < uVar1) {
          uVar1 = 10000;
        }
      }
      else if (uVar3 < 0x6a) {
        uVar1 = uVar1 - 5;
        if (10000 < uVar1) {
          uVar1 = 10000;
        }
      }
      else {
        uVar1 = uVar1 + 5;
        if (uVar1 < 100) {
          uVar1 = 100;
        }
      }
      goto LAB_104ff2c6;
    }
    if (uVar3 < 0x6a) {
      uVar1 = uVar1 - 0x46;
      if (10000 < uVar1) {
        uVar1 = 10000;
      }
      goto LAB_104ff2c6;
    }
    uVar1 = uVar1 + 0x46;
    if (uVar1 < 100) {
      uVar1 = 100;
    }
LAB_104ff294:
    *param_4 = uVar1;
  }
  else {
    uVar1 = *param_4;
    if (uVar3 < 0x6f) {
      if (uVar1 < 8000) {
        uVar1 = uVar1 - 200;
        if (uVar1 < 100) {
          uVar1 = 100;
        }
      }
      else if (uVar1 < 9000) {
        uVar1 = uVar1 - 0x32;
        if (uVar1 < 100) {
          uVar1 = 100;
        }
      }
      else if (uVar1 < 0x251c) {
        uVar1 = uVar1 - 0x1e;
        if (uVar1 < 100) {
          uVar1 = 100;
        }
      }
      else {
        uVar1 = uVar1 - 100;
        if (uVar1 < 100) {
          uVar1 = 100;
        }
      }
    }
    else {
      if (0x251b < uVar1) {
        uVar1 = uVar1 + 0x32;
        if (10000 < uVar1) {
          uVar1 = 10000;
        }
        goto LAB_104ff294;
      }
      iVar2 = 200;
      if (uVar3 < 0x8d) {
        iVar2 = 100;
      }
      uVar1 = uVar1 + iVar2;
      if (10000 < uVar1) {
        uVar1 = 10000;
      }
    }
LAB_104ff2c6:
    *param_4 = uVar1;
  }
  uVar1 = *param_4;
LAB_104ff2ca:
  if ((uVar1 < 0x65) || (9999 < uVar1)) {
    if (uVar1 < 10000) {
      *param_4 = 100;
    }
    else {
      *param_4 = 10000;
    }
  }
  return;
}
