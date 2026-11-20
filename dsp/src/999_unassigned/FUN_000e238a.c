/* @k10d FUN_000e238a @ 0x000e238a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e238a(void)

{
  configure_timer_channels();
  check_key_enabled_and_dispatch(0xd2);
  (*(code *)(&PTR_LAB_000fc580)[DAT_0003c219 & 0xf])();
  return;
}
