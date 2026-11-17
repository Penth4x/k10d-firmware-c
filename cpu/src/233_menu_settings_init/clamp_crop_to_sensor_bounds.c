/* @k10d clamp_crop_to_sensor_bounds @ 0x104c830e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 233_menu_settings_init (unit names are model-proposed)
 * purpose:
 *   Adjusts a crop rectangle's size and offset to fit within the sensor's active area.
 * summary:
 *   Takes a crop width/height (param_3/4) and top-left offset (param_5/6), and clamps them
 *   against the sensor dimensions returned by
 *   return_first_word_1045c514/read_struct_field_at_offset_4. It updates the output
 *   pointers with the adjusted crop size and offset, ensuring the crop does not exceed the
 *   sensor boundaries.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104c83f6) overlaps instruction at (ram,0x104c83f4)
    */

void clamp_crop_to_sensor_bounds(uint32_t param_1,int param_2,uint param_3,uint param_4,ushort *param_5,
                 ushort *param_6,uint *param_7,uint *param_8)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uStack_20;
  
  uVar3 = *param_5;
  uVar10 = (uint)uVar3;
  uVar4 = *param_6;
  uVar9 = (uint)uVar4;
  uStack_20 = *param_7;
  uVar11 = *param_8;
  uVar1 = param_3 * uVar10 >> 8;
  if (param_3 * uVar10 + uVar1 * -0x100 != 0) {
    uVar1 = uVar1 + 1;
  }
  uVar2 = param_4 * uVar9 >> 8;
  if (param_4 * uVar9 + uVar2 * -0x100 != 0) {
    uVar2 = uVar2 + 1;
  }
  uVar6 = return_first_word_1045c514((uint32_t *)(param_2 + 0x2c));
  uVar6 = uVar6 & 0xffff;
  uVar7 = read_struct_field_at_offset_4((uint32_t *)(param_2 + 0x2c));
  uVar7 = uVar7 & 0xffff;
  if (uVar6 <= (uVar1 + 1 & 0xfffffffe)) {
    uStack_20 = uVar6 >> 1;
  }
  if (uVar7 <= (uVar2 + 1 & 0xfffffffe)) {
    uVar11 = uVar7 >> 1;
  }
  uVar1 = uVar1 + 1 >> 1;
  iVar5 = uStack_20 - uVar1;
  uVar1 = uVar1 + uStack_20;
  uVar2 = uVar2 + 1 >> 1;
  iVar8 = uVar11 - uVar2;
  uVar2 = uVar2 + uVar11;
  if (uVar10 < 0x100) {
    if ((iVar5 < 0) || ((int)(uVar6 - 2) < (int)uVar1)) {
      if (uVar6 == uStack_20 * 2) {
        iVar5 = 2;
        if (0x7f < uVar10) {
          iVar5 = 1;
        }
        uVar1 = (uVar6 - iVar5) * 0x100;
        goto LAB_104c84c0;
      }
      if (iVar5 < 0) {
        if ((int)(uVar6 - 2) < (int)uVar1) {
          uStack_20 = uVar6 >> 1;
          if (uVar10 < 0x80) {
            iVar5 = 2;
          }
          else {
            iVar5 = 1;
          }
          uVar1 = (uVar6 - iVar5) * 0x100;
          goto LAB_104c84c0;
        }
      }
      else if (uVar1 == uVar6 - 1) {
        if (iVar5 < 1) {
          uStack_20 = uVar6 >> 1;
          if (uVar10 < 0x80) {
            iVar5 = 2;
          }
          else {
            iVar5 = 1;
          }
          uVar1 = (uVar6 - iVar5) * 0x100;
          goto LAB_104c84c0;
        }
        uStack_20 = uStack_20 - 1;
      }
      else if (uVar1 == uVar6) {
        if (iVar5 < 2) {
          if (uVar10 < 0x80) {
            iVar5 = 2;
          }
          else {
            iVar5 = 1;
          }
          uVar1 = (uVar6 - iVar5) * 0x100;
          goto code_r0x104c84be;
        }
        uStack_20 = uStack_20 - 2;
      }
    }
  }
  else if ((iVar5 < 0) || ((int)uVar6 < (int)uVar1)) {
    if (uVar6 == uStack_20 * 2) {
      uVar1 = uVar6 << 8;
    }
    else {
      if ((-1 < iVar5) || ((int)uVar1 <= (int)uVar6)) goto LAB_104c8508;
      uVar1 = uVar6 << 8;
code_r0x104c84be:
      uStack_20 = uVar6 >> 1;
    }
LAB_104c84c0:
    uVar3 = (ushort)(uVar1 / param_3);
  }
LAB_104c8508:
  if (uVar9 < 0x100) {
    if ((-1 < iVar8) && ((int)uVar2 <= (int)(uVar7 - 2))) goto LAB_104c85fc;
    if (uVar7 == uVar11 * 2) {
      iVar5 = 2;
      if (0x7f < uVar9) {
        iVar5 = 1;
      }
      uVar7 = uVar7 - iVar5;
    }
    else if (iVar8 < 0) {
      if ((int)uVar2 <= (int)(uVar7 - 2)) goto LAB_104c85fc;
      uVar11 = uVar7 >> 1;
      if (uVar9 < 0x80) {
        iVar5 = 2;
      }
      else {
        iVar5 = 1;
      }
      uVar7 = uVar7 - iVar5;
    }
    else if (uVar2 == uVar7 - 1) {
      if (0 < iVar8) {
        uVar11 = uVar11 - 1;
        goto LAB_104c85fc;
      }
      uVar11 = uVar7 >> 1;
      if (uVar9 < 0x80) {
        iVar5 = 2;
      }
      else {
        iVar5 = 1;
      }
      uVar7 = uVar7 - iVar5;
    }
    else {
      if (uVar2 != uVar7) goto LAB_104c85fc;
      if (1 < iVar8) {
        uVar11 = uVar11 - 2;
        goto LAB_104c85fc;
      }
      uVar11 = uVar7 >> 1;
      if (uVar9 < 0x80) {
        iVar5 = 2;
      }
      else {
        iVar5 = 1;
      }
      uVar7 = uVar7 - iVar5;
    }
  }
  else {
    if ((-1 < iVar8) && ((int)uVar2 <= (int)uVar7)) goto LAB_104c85fc;
    if (uVar7 != uVar11 * 2) {
      if ((-1 < iVar8) || ((int)uVar2 <= (int)uVar7)) goto LAB_104c85fc;
      uVar11 = uVar7 >> 1;
    }
  }
  uVar4 = (ushort)((uVar7 << 8) / param_4);
LAB_104c85fc:
  *param_5 = uVar3;
  *param_6 = uVar4;
  *param_7 = uStack_20;
  *param_8 = uVar11;
  return;
}
