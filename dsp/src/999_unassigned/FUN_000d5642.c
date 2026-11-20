/* @k10d FUN_000d5642 @ 0x000d5642
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000d5642(int param_1)

{
  uint32_t uVar1;
  
  for (; param_1 != 0; param_1 = param_1 + -1) {
    if ((DAT_00000484 & 3) == 2) {
      uVar1 = 0x3e6;
    }
    else {
      uVar1 = 0x3dc;
    }
    busy_wait_on_mode_flag(uVar1);
  }
  return;
}
