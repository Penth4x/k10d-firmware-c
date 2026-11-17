/* @k10d lookup_table_entry_by_index_1045a478 @ 0x1045a478
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t lookup_table_entry_by_index_1045a478(uint32_t param_1,int param_2,uint param_3,int param_4,byte param_5)

{
  uint uVar1;
  uint16_t uVar2;
  
  uVar2 = *(uint16_t *)(&DAT_105a3764/*ROM*/ + (param_2 + -0x43) * 2 + (param_3 & 0xffff) * 0xd8);
  if (param_3 == 1) {
    uVar1 = (uint)param_5;
    if (param_4 < (int)uVar1) {
      if (param_2 <= param_4) {
        uVar2 = *(uint16_t *)(&DAT_105a3764/*ROM*/ + (uVar1 - 0x43) * 2);
      }
    }
    else if (param_2 <= (int)uVar1) {
      uVar2 = *(uint16_t *)(&DAT_105a3764/*ROM*/ + (uVar1 - 0x43) * 2);
    }
  }
  if (param_3 == 0) {
    if (0x42 < param_2) {
      if (param_2 < 0xaf) {
        return uVar2;
      }
      return 0;
    }
  }
  else if (param_3 == 1) {
    if (0x42 < param_2) {
      if (param_2 < 0xae) {
        return uVar2;
      }
      return 0;
    }
  }
  else {
    if (param_3 != 2) {
      return 0;
    }
    if ((0x42 < param_2) && (param_2 < 0x77)) {
      return uVar2;
    }
  }
  return 0;
}
