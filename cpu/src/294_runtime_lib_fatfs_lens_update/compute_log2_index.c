/* @k10d compute_log2_index @ 0x10544bd6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_log2_index(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0x9e;
  if (param_1 != 0) {
    if (param_1 < 0x10000) {
      param_1 = param_1 << 0x10;
      iVar2 = 0x8e;
    }
    if (param_1 < 0x1000000) {
      param_1 = param_1 << 8;
      iVar2 = iVar2 + -8;
    }
    if (param_1 < 0x10000000/*ROM*/) {
      param_1 = param_1 << 4;
      iVar2 = iVar2 + -4;
    }
    if (param_1 < 0x40000000) {
      param_1 = param_1 << 2;
      iVar2 = iVar2 + -2;
    }
    uVar1 = (param_1 & 0x3fffffff) >> 7;
    if ((param_1 << 2 & 0x100) != 0) {
      uVar1 = uVar1 + ((param_1 << 2 & 0xff) == 0 && (uVar1 & 1) != 0);
    }
    return uVar1 + (iVar2 + -1) * 0x800000;
  }
  return 0;
}
