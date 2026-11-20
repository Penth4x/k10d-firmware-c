/* @k10d toggle_status_bits_based_on_flags_000eee38 @ 0x000eee38
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets and then clears specific bits in two global variables based on the state of bits
 *   in DAT_0003c037.
 * summary:
 *   The function first calls configure_timer_channels. It then performs a series of
 *   conditional bitwise OR operations on DAT_00000004 and DAT_00000001, driven by the bits
 *   of DAT_0003c037. After calling busy_wait_on_mode_flag(0x1ea), it performs corresponding
 *   bitwise AND operations to clear the same bits that were set. Finally, it calls
 *   busy_wait_on_mode_flag(0x104). The pattern suggests a temporary modification of status
 *   or control flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_status_bits_based_on_flags_000eee38(void)

{
  configure_timer_channels();
  if ((DAT_0003c037 & 1) == 0) {
    DAT_00000004 = DAT_00000004 | 0x10;
  }
  if ((DAT_0003c037 & 2) != 0) {
    DAT_00000001 = DAT_00000001 | 1;
  }
  if ((DAT_0003c037 & 4) != 0) {
    DAT_00000001 = DAT_00000001 | 2;
  }
  if ((DAT_0003c037 & 8) != 0) {
    DAT_00000001 = DAT_00000001 | 8;
  }
  if ((DAT_0003c037 & 0x10) == 0) {
    DAT_00000001 = DAT_00000001 | 0x10;
  }
  if ((DAT_0003c037 & 0x20) != 0) {
    DAT_00000001 = DAT_00000001 | 0x40;
  }
  if ((DAT_0003c037 & 0x40) == 0) {
    DAT_00000001 = DAT_00000001 | 0x80;
  }
  busy_wait_on_mode_flag(0x1ea);
  if ((DAT_0003c037 & 1) == 0) {
    DAT_00000004 = DAT_00000004 & 0xef;
  }
  if ((DAT_0003c037 & 2) != 0) {
    DAT_00000001 = DAT_00000001 & 0xfe;
  }
  if ((DAT_0003c037 & 4) != 0) {
    DAT_00000001 = DAT_00000001 & 0xfd;
  }
  if ((DAT_0003c037 & 8) != 0) {
    DAT_00000001 = DAT_00000001 & 0xf7;
  }
  if ((DAT_0003c037 & 0x10) == 0) {
    DAT_00000001 = DAT_00000001 & 0xef;
  }
  if ((DAT_0003c037 & 0x20) != 0) {
    DAT_00000001 = DAT_00000001 & 0xbf;
  }
  if ((DAT_0003c037 & 0x40) == 0) {
    DAT_00000001 = DAT_00000001 & 0x7f;
  }
  busy_wait_on_mode_flag(0x104);
  return;
}
