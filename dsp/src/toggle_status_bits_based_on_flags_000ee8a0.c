/* @k10d toggle_status_bits_based_on_flags_000ee8a0 @ 0x000ee8a0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Sets and clears specific bits in three global variables based on the state of bits in
 *   DAT_0003c035.
 * summary:
 *   The function reads DAT_0003c035 and conditionally sets bits in DAT_00000004,
 *   DAT_00000001, and bRam00000000. It then calls busy_wait_on_mode_flag with 0x1ea, clears
 *   the same bits it previously set, and calls busy_wait_on_mode_flag with 0x104. The
 *   pattern suggests a pulse or toggle operation on status flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_status_bits_based_on_flags_000ee8a0(void)

{
  configure_timer_channels();
  if ((DAT_0003c035 & 1) == 0) {
    DAT_00000004 = DAT_00000004 | 0x10;
  }
  if ((DAT_0003c035 & 2) != 0) {
    DAT_00000001 = DAT_00000001 | 1;
  }
  if ((DAT_0003c035 & 4) == 0) {
    DAT_00000001 = DAT_00000001 | 2;
  }
  if ((DAT_0003c035 & 8) != 0) {
    DAT_00000001 = DAT_00000001 | 8;
  }
  if ((DAT_0003c035 & 0x10) == 0) {
    DAT_00000001 = DAT_00000001 | 0x10;
  }
  if ((DAT_0003c035 & 0x20) != 0) {
    DAT_00000001 = DAT_00000001 | 0x40;
  }
  if ((DAT_0003c035 & 0x40) == 0) {
    DAT_00000001 = DAT_00000001 | 0x80;
  }
  if ((DAT_0003c035 & 0x80) != 0) {
    bRam00000000 = bRam00000000 | 0x80;
  }
  busy_wait_on_mode_flag(0x1ea);
  if ((DAT_0003c035 & 1) == 0) {
    DAT_00000004 = DAT_00000004 & 0xef;
  }
  if ((DAT_0003c035 & 2) != 0) {
    DAT_00000001 = DAT_00000001 & 0xfe;
  }
  if ((DAT_0003c035 & 4) == 0) {
    DAT_00000001 = DAT_00000001 & 0xfd;
  }
  if ((DAT_0003c035 & 8) != 0) {
    DAT_00000001 = DAT_00000001 & 0xf7;
  }
  if ((DAT_0003c035 & 0x10) == 0) {
    DAT_00000001 = DAT_00000001 & 0xef;
  }
  if ((DAT_0003c035 & 0x20) != 0) {
    DAT_00000001 = DAT_00000001 & 0xbf;
  }
  if ((DAT_0003c035 & 0x40) == 0) {
    DAT_00000001 = DAT_00000001 & 0x7f;
  }
  if ((DAT_0003c035 & 0x80) != 0) {
    bRam00000000 = bRam00000000 & 0x7f;
  }
  busy_wait_on_mode_flag(0x104);
  return;
}
