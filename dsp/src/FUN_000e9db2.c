/* @k10d FUN_000e9db2 @ 0x000e9db2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e9db2(void)

{
  bRam00000000 = bRam00000000 | 0x80;
  wait_if_flag_is_two();
  DAT_0003c217 = 10;
  FUN_000e9c7a();
  DAT_0003c217 = DAT_0003c21f;
  FUN_000e9c7a();
  DAT_0003c217 = DAT_0003c21e;
  FUN_000e9c7a();
  wait_if_flag_is_two();
  bRam00000000 = bRam00000000 & 0x7f;
  wait_if_flag_is_two();
  return;
}
