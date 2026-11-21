/* @k10d resample_histogram_to_bars_1052c3a4 @ 0x1052c3a4
 * name: verified (structural evidence: reads 256 int bins (param_2[0..0xff]), interpolates to param_7 outputs, scales by param_6/param_3, clamps to min(0xff,param_6); callers pass bins at 0x8001acbc/b0bc/b4bc/b8bc with 0x4b000 (640*480))
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resample a 256-bin int histogram into param_7 u8 bar heights (max param_6),
 *   normalised by param_3. Used for the playback histogram; not a tone-curve LUT.
 * summary:
 *   VERIFIED: reads 256 int bins (param_2[0..0xff]), interpolates to param_7 outputs, scales
 *   by param_6/param_3, clamps to min(0xff,param_6); callers pass bins at
 *   0x8001acbc/b0bc/b4bc/b8bc with 0x4b000 (640*480)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void resample_histogram_to_bars_1052c3a4(void *param_1,int *param_2,uint param_3,uint32_t param_4,uint8_t *param_5,
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
