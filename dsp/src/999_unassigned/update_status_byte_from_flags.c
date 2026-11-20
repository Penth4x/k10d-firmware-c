/* @k10d update_status_byte_from_flags @ 0x000dd122
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Maps bits from DAT_0003c805 and DAT_0003c804 into a status byte at DAT_0003f568.
 * summary:
 *   The function reads a flag byte at DAT_0003c805 and a bit from DAT_0003c804, then sets
 *   or clears corresponding bits in DAT_0003f568. It also stores a clamped value derived
 *   from DAT_0003c80c into DAT_0003f56a and calls clamp_and_scale_byte with DAT_0003c808 to
 *   store the result in DAT_0003f56b. The specific meaning of the flags and the target
 *   status byte is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_status_byte_from_flags(void)

{
  uint uVar1;
  
  if ((DAT_0003c805 & 0x40) == 0) {
    DAT_0003f568 = DAT_0003f568 & 0xbf;
  }
  else {
    DAT_0003f568 = DAT_0003f568 | 0x40;
  }
  if ((DAT_0003c805 & 0x20) == 0) {
    DAT_0003f568 = DAT_0003f568 & 0xdf;
  }
  else {
    DAT_0003f568 = DAT_0003f568 | 0x20;
  }
  if ((DAT_0003c805 & 2) == 0) {
    DAT_0003f568 = DAT_0003f568 & 0xef;
  }
  else {
    DAT_0003f568 = DAT_0003f568 | 0x10;
  }
  if ((DAT_0003c805 & 1) == 0) {
    DAT_0003f568 = DAT_0003f568 & 0xf7;
  }
  else {
    DAT_0003f568 = DAT_0003f568 | 8;
  }
  if ((DAT_0003c805 & 8) == 0) {
    DAT_0003f568 = DAT_0003f568 & 0xfb;
  }
  else {
    DAT_0003f568 = DAT_0003f568 | 4;
  }
  if ((DAT_0003c805 & 4) == 0) {
    DAT_0003f568 = DAT_0003f568 & 0xfd;
  }
  else {
    DAT_0003f568 = DAT_0003f568 | 2;
  }
  if (((DAT_0003c804 & 1 ^ 0xff) & 1) == 0) {
    DAT_0003f568 = DAT_0003f568 & 0xfe;
  }
  else {
    DAT_0003f568 = DAT_0003f568 | 1;
  }
  uVar1 = (int)(uint)_DAT_0003c80c >> 4;
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  DAT_0003f56a = (uint8_t)uVar1;
  DAT_0003f56b = clamp_and_scale_byte(_DAT_0003c808);
  return;
}
