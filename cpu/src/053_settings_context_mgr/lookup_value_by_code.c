/* @k10d lookup_value_by_code @ 0x103b93a2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 053_settings_context_mgr (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t lookup_value_by_code(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar1 = uRam105bb63c;
  uVar2 = uVar1;
  if ((((((param_2 != 0x50) && (uVar2 = _DAT_105bb5d8/*ROM*/, param_2 != 100)) &&
        (uVar2 = _DAT_105bb5dc/*ROM*/, param_2 != 0x78)) &&
       ((uVar2 = _DAT_105bb5f4/*ROM*/, param_2 != 0x8c && (uVar2 = _DAT_105bb5f8/*ROM*/, param_2 != 0xa0)))) &&
      ((uVar2 = _DAT_105bb600/*ROM*/, param_2 != 0xb4 &&
       ((uVar2 = _DAT_105bb5d4/*ROM*/, param_2 != 200 && (uVar2 = _DAT_105bb62c/*ROM*/, param_2 != 0xdc)))))) &&
     ((uVar2 = _DAT_105bb630/*ROM*/, param_2 != 0xf0 && (uVar2 = uVar1, param_2 == 0xfa)))) {
    check_kernel_call_success_10459fea(0x96);
  }
  return uVar2;
}
