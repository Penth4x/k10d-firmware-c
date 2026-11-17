/* @k10d toggle_status_bits_based_on_flags_000ee5d4 @ 0x000ee5d4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Sets and clears specific bits in three RAM variables based on the state of bits in
 *   DAT_0003c000.
 * summary:
 *   The function reads DAT_0003c000 and conditionally sets bits in DAT_00000004,
 *   DAT_00000001, and bRam00000000. It then calls busy_wait_on_mode_flag with 0x1ea, clears
 *   the previously set bits, and calls busy_wait_on_mode_flag with 0x104. The specific
 *   roles of the RAM variables and the meaning of the bit patterns are not determinable
 *   from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_status_bits_based_on_flags_000ee5d4(void)

{
  configure_timer_channels();
  if ((DAT_0003c000 & 1) == 0) {
    DAT_00000004 = DAT_00000004 | 0x10;
  }
  if ((DAT_0003c000 & 2) != 0) {
    DAT_00000001 = DAT_00000001 | 1;
  }
  if ((DAT_0003c000 & 4) == 0) {
    DAT_00000001 = DAT_00000001 | 2;
  }
  if ((DAT_0003c000 & 8) != 0) {
    DAT_00000001 = DAT_00000001 | 8;
  }
  if ((DAT_0003c000 & 0x10) == 0) {
    DAT_00000001 = DAT_00000001 | 0x10;
  }
  if ((DAT_0003c000 & 0x20) != 0) {
    DAT_00000001 = DAT_00000001 | 0x40;
  }
  if ((DAT_0003c000 & 0x40) == 0) {
    DAT_00000001 = DAT_00000001 | 0x80;
  }
  if ((DAT_0003c000 & 0x80) != 0) {
    bRam00000000 = bRam00000000 | 0x80;
  }
  busy_wait_on_mode_flag(0x1ea);
  if ((DAT_0003c000 & 1) == 0) {
    DAT_00000004 = DAT_00000004 & 0xef;
  }
  if ((DAT_0003c000 & 2) != 0) {
    DAT_00000001 = DAT_00000001 & 0xfe;
  }
  if ((DAT_0003c000 & 4) == 0) {
    DAT_00000001 = DAT_00000001 & 0xfd;
  }
  if ((DAT_0003c000 & 8) != 0) {
    DAT_00000001 = DAT_00000001 & 0xf7;
  }
  if ((DAT_0003c000 & 0x10) == 0) {
    DAT_00000001 = DAT_00000001 & 0xef;
  }
  if ((DAT_0003c000 & 0x20) != 0) {
    DAT_00000001 = DAT_00000001 & 0xbf;
  }
  if ((DAT_0003c000 & 0x40) == 0) {
    DAT_00000001 = DAT_00000001 & 0x7f;
  }
  if ((DAT_0003c000 & 0x80) != 0) {
    bRam00000000 = bRam00000000 & 0x7f;
  }
  busy_wait_on_mode_flag(0x104);
  return;
}
