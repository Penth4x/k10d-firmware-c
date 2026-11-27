/* @k10d lookup_exposure_compensation_table @ 0x1045b432
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int lookup_exposure_compensation_table(uint32_t param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_2 == 1) || (param_2 == 0)) {
    if (param_3 < 0x41) {
      iVar1 = ((int)*(short *)(DAT_105a4692/*ROM*/ + (0x40 - param_3) * 2 + (param_2 & 0xffff) * 0x102) <<
              8) / 10;
    }
    else if (0xbf < param_3) {
      iVar1 = ((int)*(short *)(DAT_105a4692/*ROM*/ +
                              ((0x100U - param_3 & 0xff) + 0x40) * 2 + (param_2 & 0xffff) * 0x102)
              << 8) / 10;
    }
  }
  return iVar1;
}
