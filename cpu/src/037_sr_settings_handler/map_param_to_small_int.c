/* @k10d map_param_to_small_int @ 0x1039096e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 037_sr_settings_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t map_param_to_small_int(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == _DAT_105bb5dc/*ROM*/) {
    uVar1 = 0xb;
  }
  else {
    uVar1 = 8;
    if (param_2 != _DAT_105bb5d8/*ROM*/) {
      uVar1 = 2;
    }
  }
  return uVar1;
}
