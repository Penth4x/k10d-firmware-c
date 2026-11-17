/* @k10d compute_exposure_value_from_table @ 0x1045a370
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_exposure_value_from_table(uint32_t param_1,int param_2,uint param_3,int param_4,short param_5)

{
  int iVar1;
  
  iVar1 = (uint)*(ushort *)(&DAT_105a33e4/*ROM*/ + (param_2 + -0x40) * 2) * 100;
  if (((param_4 == 5) && (param_5 == 0xd)) && (param_2 == 0x75)) {
    iVar1 = 7000;
  }
  if (((param_4 == 6) && (param_5 == 5)) && (param_2 == 0x4e)) {
    iVar1 = 20000;
  }
  if (((param_4 == 3) && (param_5 == 0x23)) && (param_2 == 0xb8)) {
    iVar1 = 0xaf0;
  }
  if (((param_4 == 4) && (param_5 == 0x18)) && (param_2 == 0x7d)) {
    iVar1 = 0x1e14;
  }
  if (param_4 == 7) {
    if ((param_3 & 0x80) == 0) {
      iVar1 = *(int *)(&DAT_105a30e4/*ROM*/ + (param_2 + -0x40) * 4) +
              *(int *)(&DAT_105a3564/*ROM*/ + (param_3 & 0x7f) * 4);
    }
    else {
      iVar1 = *(int *)(&DAT_105a30e4/*ROM*/ + (param_2 + -0x40) * 4) -
              *(int *)(&DAT_105a3564/*ROM*/ + (param_3 & 0x7f) * 4);
    }
  }
  if (((param_4 == 2) || (param_4 == 1)) || (param_4 == 0)) {
    iVar1 = 0;
  }
  if (param_2 < 0x40) {
    iVar1 = 0;
  }
  return iVar1;
}
