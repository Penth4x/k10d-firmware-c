/* @k10d FUN_000eef82 @ 0x000eef82
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000eef82(void)

{
  configure_timer_channels();
  if ((DAT_0003c037 & 1) != 0) {
    DAT_00000004 = DAT_00000004 | 0x10;
  }
  if ((DAT_0003c037 & 2) == 0) {
    DAT_00000001 = DAT_00000001 | 1;
  }
  if ((DAT_0003c037 & 4) == 0) {
    DAT_00000001 = DAT_00000001 | 2;
  }
  if ((DAT_0003c037 & 8) == 0) {
    DAT_00000001 = DAT_00000001 | 8;
  }
  if ((DAT_0003c037 & 0x10) != 0) {
    DAT_00000001 = DAT_00000001 | 0x10;
  }
  if ((DAT_0003c037 & 0x20) == 0) {
    DAT_00000001 = DAT_00000001 | 0x40;
  }
  if ((DAT_0003c037 & 0x40) != 0) {
    DAT_00000001 = DAT_00000001 | 0x80;
  }
  busy_wait_on_mode_flag(0x1ea);
  if ((DAT_0003c037 & 1) != 0) {
    DAT_00000004 = DAT_00000004 & 0xef;
  }
  if ((DAT_0003c037 & 2) == 0) {
    DAT_00000001 = DAT_00000001 & 0xfe;
  }
  if ((DAT_0003c037 & 4) == 0) {
    DAT_00000001 = DAT_00000001 & 0xfd;
  }
  if ((DAT_0003c037 & 8) == 0) {
    DAT_00000001 = DAT_00000001 & 0xf7;
  }
  if ((DAT_0003c037 & 0x10) != 0) {
    DAT_00000001 = DAT_00000001 & 0xef;
  }
  if ((DAT_0003c037 & 0x20) == 0) {
    DAT_00000001 = DAT_00000001 & 0xbf;
  }
  if ((DAT_0003c037 & 0x40) != 0) {
    DAT_00000001 = DAT_00000001 & 0x7f;
  }
  busy_wait_on_mode_flag(0x104);
  return;
}
