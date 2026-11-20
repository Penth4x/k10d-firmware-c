/* @k10d wait_and_copy_byte_to_dat @ 0x000d710e
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Polls two status bits in DAT_00000005 and DAT_000000c0, then copies a byte from
 *   DAT_000000c2 into two DAT globals.
 * summary:
 *   The function busy-waits until bit 0 of DAT_00000005 is set and bit 4 of DAT_000000c0 is
 *   set. It stores the byte at DAT_000000c2 into DAT_0003c31a, waits for bit 0 of
 *   DAT_00000005 to clear then set again, and writes param_1 into the low byte of
 *   DAT_000000c1. It clears bit 6 of DAT_0000000a, waits for bit 4 of DAT_000000c0 to be
 *   set again, stores DAT_000000c2 into DAT_0003c284, and waits for bit 0 of DAT_00000005
 *   to clear. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_and_copy_byte_to_dat(uint8_t param_1)

{
  do {
  } while ((DAT_00000005 & 1) == 0);
  do {
  } while ((DAT_000000c0 & 0x10) == 0);
  DAT_0003c31a = (char)_DAT_000000c2;
  do {
  } while ((DAT_00000005 & 1) != 0);
  do {
  } while ((DAT_00000005 & 1) == 0);
  _DAT_000000c1 = CONCAT13(param_1,_DAT_000000c2);
  DAT_0000000a = DAT_0000000a & 0xbf;
  do {
  } while ((DAT_000000c0 & 0x10) == 0);
  DAT_0003c284 = (char)_DAT_000000c2;
  do {
  } while ((DAT_00000005 & 1) != 0);
  return;
}
