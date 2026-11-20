/* @k10d FUN_000cb63e @ 0x000cb63e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cb63e(void)

{
  uint32_t uVar1;
  int iVar2;
  
  if ((((DAT_0003c021 & 1) != 0) && (DAT_0003c3b3 == '\x01')) && ((DAT_0003c030 & 8) == 0)) {
    DAT_0003c021 = DAT_0003c021 & 0xfe;
  }
  DAT_0003ce08 = DAT_0003ce08 & 0xfe;
  if ((DAT_0003f282 & 3) != 0) {
    DAT_0000048c = (DAT_0003f282 & 3) << 1 | 0x40;
  }
  update_status_flags_and_dispatch_000cd4ac();
  uVar1 = 0;
  if ((((DAT_0003ce01 & 1) != 0) && ((DAT_0003ce05 & 1) == 0)) &&
     ((uVar1 = 1, (DAT_0003ce08 & 8) != 0 && ((DAT_0003ce08 & 0x10) == 0)))) {
    uVar1 = 2;
  }
  DAT_0003ce16 = clear_and_set_status_flags_000cb73c(uVar1);
  if ((DAT_0003c18d & 0x80) == 0) {
    DAT_0003ce09 = DAT_0003ce09 & 0xfe;
  }
  else {
    DAT_0003ce09 = DAT_0003ce09 | 1;
  }
  if ((((DAT_0003ce01 & 0x40) == 0) && (DAT_0003ce01 = DAT_0003ce01 & 0x7f, (DAT_0003ce00 & 1) != 0)
      ) && ((((DAT_0003c021 & 1) != 0 && ((DAT_0003c101 & 0x10) != 0)) &&
            ((((DAT_0003c193 & 1) != 0 && ((DAT_0003ce09 & 1) != 0)) ||
             (iVar2 = check_four_flag_conditions(), iVar2 != 0)))))) {
    DAT_0003ce01 = DAT_0003ce01 | 0x80;
  }
  if (((DAT_0003c180 & 8) == 0) && ((DAT_0003c18d & 0x40) != 0)) {
    FUN_000d04ba(0);
  }
  if ((((DAT_0003c4dd & 2) != 0) && (_DAT_0003c4a0 != -0x318a)) && (_DAT_0003c4a0 != -0x3189)) {
    _DAT_0003c4a0 = -0x3189;
  }
  sync_two_state_variables();
  return;
}
