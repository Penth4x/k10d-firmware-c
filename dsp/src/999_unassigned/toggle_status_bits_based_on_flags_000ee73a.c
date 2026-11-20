/* @k10d toggle_status_bits_based_on_flags_000ee73a @ 0x000ee73a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets and clears specific bits in DAT_00000001, DAT_00000004, and bRam00000000 based on
 *   the state of bits in DAT_0003c000.
 * summary:
 *   The function first calls configure_timer_channels. It then iterates through bits 0-7 of
 *   DAT_0003c000, setting corresponding bits in DAT_00000001, DAT_00000004, or bRam00000000
 *   if the source bit is set or clear (depending on the specific bit). It calls
 *   busy_wait_on_mode_flag(0x1ea), then clears the same bits it previously set, and finally
 *   calls busy_wait_on_mode_flag(0x104). The pattern suggests a pulse or temporary state
 *   change for these status flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_status_bits_based_on_flags_000ee73a(void)

{
  configure_timer_channels();
  if ((DAT_0003c000 & 1) != 0) {
    DAT_00000004 = DAT_00000004 | 0x10;
  }
  if ((DAT_0003c000 & 2) == 0) {
    DAT_00000001 = DAT_00000001 | 1;
  }
  if ((DAT_0003c000 & 4) != 0) {
    DAT_00000001 = DAT_00000001 | 2;
  }
  if ((DAT_0003c000 & 8) == 0) {
    DAT_00000001 = DAT_00000001 | 8;
  }
  if ((DAT_0003c000 & 0x10) != 0) {
    DAT_00000001 = DAT_00000001 | 0x10;
  }
  if ((DAT_0003c000 & 0x20) == 0) {
    DAT_00000001 = DAT_00000001 | 0x40;
  }
  if ((DAT_0003c000 & 0x40) != 0) {
    DAT_00000001 = DAT_00000001 | 0x80;
  }
  if ((DAT_0003c000 & 0x80) == 0) {
    bRam00000000 = bRam00000000 | 0x80;
  }
  busy_wait_on_mode_flag(0x1ea);
  if ((DAT_0003c000 & 1) != 0) {
    DAT_00000004 = DAT_00000004 & 0xef;
  }
  if ((DAT_0003c000 & 2) == 0) {
    DAT_00000001 = DAT_00000001 & 0xfe;
  }
  if ((DAT_0003c000 & 4) != 0) {
    DAT_00000001 = DAT_00000001 & 0xfd;
  }
  if ((DAT_0003c000 & 8) == 0) {
    DAT_00000001 = DAT_00000001 & 0xf7;
  }
  if ((DAT_0003c000 & 0x10) != 0) {
    DAT_00000001 = DAT_00000001 & 0xef;
  }
  if ((DAT_0003c000 & 0x20) == 0) {
    DAT_00000001 = DAT_00000001 & 0xbf;
  }
  if ((DAT_0003c000 & 0x40) != 0) {
    DAT_00000001 = DAT_00000001 & 0x7f;
  }
  if ((DAT_0003c000 & 0x80) == 0) {
    bRam00000000 = bRam00000000 & 0x7f;
  }
  busy_wait_on_mode_flag(0x104);
  return;
}
