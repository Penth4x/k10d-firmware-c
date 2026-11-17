/* @k10d update_status_flag_bits_000c9268 @ 0x000c9268
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets specific bits in a status byte based on conditions from multiple input flag bytes.
 * summary:
 *   The function reads several global flag bytes (DAT_0003c581, DAT_0003c580, etc.) and
 *   conditionally sets bits 0 through 7 in the global byte DAT_0003c383. It also performs a
 *   comparison between DAT_0003c575 and DAT_0003c576 to influence bit 7. Finally, it
 *   conditionally copies DAT_0003c48a to DAT_0003c37f if a specific bit in DAT_0003c4de is
 *   clear. No external functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flag_bits_000c9268(void)

{
  byte bVar1;
  
  if (((DAT_0003c581 & 2) != 0) || ((DAT_0003c581 & 1) != 0)) {
    DAT_0003c383 = DAT_0003c383 | 1;
  }
  if ((DAT_0003c580 & 8) != 0) {
    DAT_0003c383 = DAT_0003c383 | 2;
  }
  if ((DAT_0003c580 & 4) != 0) {
    DAT_0003c383 = DAT_0003c383 | 4;
  }
  if ((((DAT_0003c022 & 2) == 0) && ((DAT_0003c4d1 & 1) != 0)) && ((DAT_0003c4d1 & 8) != 0)) {
    DAT_0003c383 = DAT_0003c383 | 8;
  }
  if ((DAT_0003c4d0 & 0x40) != 0) {
    DAT_0003c383 = DAT_0003c383 | 8;
  }
  if ((DAT_0003c58b & 1) != 0) {
    DAT_0003c383 = DAT_0003c383 | 0x10;
  }
  if ((DAT_0003c4db & 8) != 0) {
    DAT_0003c383 = DAT_0003c383 | 0x40;
  }
  bVar1 = DAT_0003c575;
  if (DAT_0003c575 < DAT_0003c576) {
    bVar1 = DAT_0003c576;
  }
  if ((DAT_0003c565 <= bVar1) &&
     ((((DAT_0003c118 & 0x20) == 0x20 && (DAT_0003c565 < 0x75)) ||
      (((DAT_0003c582 & 1) != 0 || ((DAT_0003c582 & 2) != 0)))))) {
    DAT_0003c383 = DAT_0003c383 | 0x80;
  }
  if ((DAT_0003c4de & 0x20) == 0) {
    DAT_0003c37f = DAT_0003c48a;
  }
  return;
}
