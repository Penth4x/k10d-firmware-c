/* @k10d FUN_000e2102 @ 0x000e2102
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char FUN_000e2102(uint32_t param_1)

{
  int iVar1;
  
  DAT_0003c121 = (uint8_t)param_1;
  bRam00000000 = bRam00000000 & 0xf7;
  DAT_00000003 = DAT_00000003 & 0xef;
  iVar1 = poll_flag_and_set_state(0x32);
  if (iVar1 == 0) {
    DAT_00000003 = DAT_00000003 | 0x10;
    wait_and_write_byte_000e0fec(param_1);
    poll_flag_and_set_status(5);
  }
  if (DAT_0003c122 != '\0') {
    DAT_0003c122 = DAT_0003c122 + '0';
  }
  return DAT_0003c122;
}
