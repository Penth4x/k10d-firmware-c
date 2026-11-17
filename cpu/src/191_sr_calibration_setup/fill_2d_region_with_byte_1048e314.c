/* @k10d fill_2d_region_with_byte_1048e314 @ 0x1048e314
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void fill_2d_region_with_byte_1048e314(void *param_1,uint8_t *param_2,uint8_t param_3,int param_4,ushort param_5,
                 ushort param_6)

{
  uint8_t *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_5 != 0) {
    do {
      iVar2 = 0;
      puVar1 = param_2;
      if (0 < param_4) {
        do {
          *puVar1 = param_3;
          iVar2 = iVar2 + 1;
          puVar1 = puVar1 + 1;
        } while (iVar2 < param_4);
      }
      iVar3 = iVar3 + 1;
      param_2 = param_2 + param_6;
    } while (iVar3 < (int)(uint)param_5);
  }
  return;
}
