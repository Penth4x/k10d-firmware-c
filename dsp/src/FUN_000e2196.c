/* @k10d FUN_000e2196 @ 0x000e2196
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char FUN_000e2196(uint32_t param_1)

{
  int iVar1;
  
  bRam00000000 = bRam00000000 & 0xf7;
  DAT_00000003 = DAT_00000003 & 0xef;
  iVar1 = poll_flag_and_set_state(5);
  if (iVar1 == 0) {
    DAT_00000003 = DAT_00000003 | 0x10;
    wait_and_write_byte_000e0fec(param_1);
    poll_flag_and_set_status(5);
  }
  if (DAT_0003c122 != '\0') {
    DAT_0003c122 = DAT_0003c122 + 'P';
  }
  return DAT_0003c122;
}
