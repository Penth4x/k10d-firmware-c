/* @k10d apply_tone_curve_lut @ 0x1052c3a4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 288_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_tone_curve_lut(void *param_1,int *param_2,uint param_3,uint32_t param_4,uint8_t *param_5,
                 ushort param_6,ushort param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((param_3 != 0) && (uVar1 = (uint)param_7, uVar1 != 0)) {
    iVar5 = 1;
    uVar8 = 0x10000 / (uVar1 - 1);
    uVar9 = uVar8;
    if (1 < uVar1) {
      do {
        uVar6 = uVar9 >> 8;
        uVar2 = 0xfe;
        if (uVar6 < 0xff) {
          uVar2 = uVar6;
        }
        uVar4 = uVar9 + uVar8;
        uVar7 = uVar4 >> 8;
        uVar3 = 0xfe;
        if (uVar7 < 0xff) {
          uVar3 = uVar7;
        }
        uVar9 = (((param_2[uVar3] * ((uVar7 * 0x100 - uVar4) + 0x100) >> 8) +
                  (param_2[uVar3 + 1] * (uVar4 + uVar7 * -0x100) >> 8) +
                  (param_2[uVar2] * ((uVar6 * 0x100 - uVar9) + 0x100) >> 8) +
                  (param_2[uVar2 + 1] * (uVar9 + uVar6 * -0x100) >> 8) >> 1) * (uint)param_6) /
                param_3;
        if (0xff < uVar9) {
          uVar9 = 0xff;
        }
        if (param_6 < uVar9) {
          uVar9 = (uint)param_6;
        }
        param_5[iVar5] = (char)uVar9;
        iVar5 = iVar5 + 1;
        uVar9 = uVar4;
      } while (iVar5 < (int)(uint)param_7);
    }
    uVar9 = (uint)param_6;
    uVar8 = (*param_2 * uVar9) / param_3;
    if (0xff < uVar8) {
      uVar8 = 0xff;
    }
    if (uVar9 < uVar8) {
      uVar8 = (uint)param_6;
    }
    *param_5 = (char)uVar8;
    uVar8 = (param_2[0xff] * uVar9) / param_3;
    if (0xff < uVar8) {
      uVar8 = 0xff;
    }
    if (uVar9 < uVar8) {
      uVar8 = (uint)param_6;
    }
    param_5[uVar1 - 1] = (char)uVar8;
  }
  return;
}
