/* @k10d FUN_000cd86e @ 0x000cd86e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t FUN_000cd86e(uint32_t param_1)

{
  int iVar1;
  
  if ((DAT_0003ce00 & 0x40) == 0) {
    iVar1 = compute_and_dispatch_flag();
    if (iVar1 == 0) {
      DAT_0003ce00 = DAT_0003ce00 | 0x80;
      update_ce06_status_flags(1);
      param_1 = 0;
    }
    else if ((DAT_0003c4d6 & 4) == 0) {
      param_1 = 0;
    }
  }
  return param_1;
}
