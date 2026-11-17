/* @k10d scale_by_lut_entry @ 0x103a88aa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint scale_by_lut_entry(void *param_1,int param_2,int param_3,int param_4)

{
  if (0x11 < param_4) {
    param_4 = 0x11;
  }
  return (int)(param_2 * (uint)*(ushort *)(&DAT_10565018/*ROM*/ + param_4 * 2)) / param_3 & 0xffff;
}
