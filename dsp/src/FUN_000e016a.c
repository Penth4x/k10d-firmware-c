/* @k10d FUN_000e016a @ 0x000e016a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e016a(int param_1)

{
  if (param_1 != 0) {
    if ((param_1 == 2) || ((DAT_0003c127 & 0x20) == 0)) {
      dispatch_status_branch();
    }
    else {
      read_bytes_if_enabled(0x31,(void *)&DAT_0003c100,8);
      read_bytes_if_enabled(0x3b,(void *)&DAT_0003c11f,1);
    }
  }
  return;
}
