/* @k10d initialize_ram_control_words @ 0x000e554c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes a fixed set of constants and conditionally masked values to a block of RAM
 *   control/status words.
 * summary:
 *   The function performs a series of direct stores to addresses in the
 *   0x00000000-0x00000503 range. It uses bits from DAT_0003c066, DAT_0003c00f,
 *   DAT_0003c05d, and DAT_0003c021/22 to conditionally set or clear specific fields in the
 *   target words. No callees are invoked, and the function returns void.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_ram_control_words(void)

{
  uRam00000000 = 0x60;
  DAT_00000400 = 0xff;
  DAT_00000420 = 0;
  DAT_00000001 = 0;
  DAT_00000401 = 0x8f;
  if ((DAT_0003c066 & 1) == 0) {
    DAT_00000002 = 0;
  }
  else {
    DAT_00000002 = DAT_00000005 & 0x80;
  }
  DAT_00000402 = 0x7f;
  DAT_00000422 = 0;
  if ((DAT_0003c066 & 1) == 0) {
    DAT_00000003 = 0;
    DAT_00000423 = 0;
  }
  else {
    DAT_00000003 = DAT_00000006 & 3;
    DAT_00000423 = DAT_00000423 & 3;
  }
  DAT_00000503 = 0x6c;
  DAT_00000403 = 0x93;
  DAT_000000ac = 0;
  DAT_00000004 = 0;
  DAT_00000404 = 0xff;
  DAT_00000424 = 0x8f;
  if ((DAT_0003c066 & 1) == 0) {
    DAT_00000005 = 0x18;
  }
  else {
    DAT_00000005 = DAT_00000008 & 0x1f;
  }
  DAT_00000405 = 0x98;
  DAT_00000425 = 0;
  if ((DAT_0003c00f & 0x40) == 0) {
    DAT_00000006 = 0;
  }
  DAT_00000406 = 0xf0;
  DAT_00000426 = 0;
  DAT_00000007 = 0;
  DAT_00000407 = 0;
  DAT_00000427 = 0;
  if ((DAT_0003c05d & 0x40) == 0) {
    DAT_00000008 = 1;
  }
  DAT_00000408 = 0xfb;
  DAT_00000428 = 0;
  DAT_00000009 = 0xb1;
  DAT_00000409 = 0xff;
  DAT_00000429 = 0;
  if ((DAT_00000008 & 1) == 0) {
    DAT_0000000a = DAT_0000000d | 0x10;
  }
  else {
    DAT_0000000a = DAT_0000000d & 0xef;
  }
  DAT_0000040a = 0xfe;
  DAT_0000042a = 0;
  DAT_0000000b = bRam0000000e & 8;
  if ((DAT_0003c022 & 1) == 0) {
    DAT_0000000b = 0;
  }
  DAT_0000040b = 0xf;
  DAT_0000042b = 0;
  DAT_0000000c = 0;
  DAT_0000040c = 0;
  DAT_0000042c = 0;
  if ((DAT_0003c00f & 0x40) == 0) {
    DAT_0000000d = 0;
  }
  if ((DAT_0003c021 & 0x80) == 0) {
    DAT_0000040d = 2;
  }
  else {
    DAT_0000040d = 3;
  }
  DAT_0000000f = 0x18;
  DAT_0000040f = 0x18;
  DAT_0000042f = 0;
  return;
}
