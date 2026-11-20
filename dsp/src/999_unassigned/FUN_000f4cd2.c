/* @k10d FUN_000f4cd2 @ 0x000f4cd2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t FUN_000f4cd2(int param_1)

{
  uint32_t uVar1;
  
  if (param_1 == 2) {
    if (DAT_0003c3ac == '\0') {
      return 0x24;
    }
    return 0x35;
  }
  if (((DAT_0003c58b & 1) == 0) || (DAT_0003c564 != -0x80)) {
LAB_000f4d28:
    if (param_1 == 1) {
      if ((DAT_0003c58b & 1) == 0) {
        if (((DAT_0003c4de & 2) == 0) || ((DAT_0003c4d0 & 0x20) == 0)) {
          uVar1 = compute_clamped_index_000f4db6(DAT_0003c47d);
        }
        else {
          uVar1 = compute_clamped_index_000f4db6(DAT_0003c496);
        }
      }
      else {
        uVar1 = compute_clamped_index_000f4db6(DAT_0003c564);
      }
    }
    else {
LAB_000f4d56:
      uVar1 = compute_clamped_index_000f4db6(DAT_0003c564);
    }
    if ((((((DAT_0003c580 & 8) != 0) || ((DAT_0003c581 & 4) != 0)) || ((DAT_0003c581 & 8) != 0)) ||
        (((DAT_0003c581 & 2) != 0 || ((DAT_0003c581 & 1) != 0)))) && ((DAT_0003c028 & 2) == 0)) {
      if (DAT_0003c3ac == '\0') {
        uVar1 = 0x24;
      }
      else {
        uVar1 = 0x35;
      }
    }
  }
  else {
    if (param_1 != 0) {
      if (param_1 != 1) goto LAB_000f4d56;
      if (DAT_0003c47d < 0x80) goto LAB_000f4d28;
    }
    if (DAT_0003c3ac == '\0') {
      uVar1 = 0x25;
    }
    else {
      uVar1 = 0x36;
    }
  }
  return uVar1;
}
