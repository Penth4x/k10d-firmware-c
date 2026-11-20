/* @k10d FUN_000d084e @ 0x000d084e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d084e(void)

{
  ushort uVar1;
  
  uVar1 = _DAT_0003f2aa;
  if ((((DAT_0003ce00 & 0x80) != 0) && ((DAT_0003f55e & 0x10) != 0)) &&
     (_DAT_0003ce18 < (ushort)((ushort)DAT_0003f49d + (ushort)DAT_0003f49c))) {
    FUN_000d5642((ushort)DAT_0003f49d - (_DAT_0003ce18 - DAT_0003f49c));
  }
  if ((uVar1 != 0) &&
     ((((DAT_0003ce00 & 0x40) != 0 && (DAT_0003cfc7 < '\x01')) || ((DAT_0003ce09 & 0xc0) != 0)))) {
    if ((DAT_0003ce01 & 1) != 0) {
      uVar1 = uVar1 >> 3;
    }
    clear_bit3_and_halt(_DAT_0003f2ae);
    do {
      busy_wait_on_mode_flag(100);
      if ((DAT_00000002 & 0x10) == 0) break;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    clear_bit3_and_halt(_DAT_0003cf0a | 8);
    if (((DAT_0003ce01 & 1) == 0) && (uVar1 == 0)) {
      poll_status_and_set_flags();
    }
  }
  step_pointer_by_flagged_interval(0);
  call_d05b8_with_fffb();
  _DAT_0003cf0a = _DAT_0003f2ae;
  if ((DAT_0003cf0e & 0xf) != 0) {
    _DAT_0003cf0a = _DAT_0003f2ae & 0xffef;
  }
  clear_bit3_and_halt(__frv_reg_unset(4));
  return;
}
