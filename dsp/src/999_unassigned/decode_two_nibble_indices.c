/* @k10d decode_two_nibble_indices @ 0x000f513c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Splits a byte from a lookup table into two 4-bit indices and passes each to a helper.
 * summary:
 *   Selects one of two lookup tables based on DAT_0003c3ac, reads a byte at param_1, and
 *   extracts low/high nibbles. Calls or_bytes_into_four_globals_000f6ad6 twice with four
 *   byte pointers derived from each nibble. Sets bits in DAT_0003c4b0 and DAT_0003c4b4
 *   based on whether param_1 is less than or greater than 7.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void decode_two_nibble_indices(int param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = false;
  bVar2 = false;
  DAT_0003c4b0 = 0;
  DAT_0003c4b4 = 0;
  DAT_0003c4b8 = 0;
  DAT_0003c4bc = 0;
  if (DAT_0003c3ac == '\0') {
    uVar4 = (byte)(&DAT_000fa83b)[param_1] & 0xf;
    uVar5 = (uint)((byte)(&DAT_000fa83b)[param_1] >> 4);
    if (param_1 < 7) {
      bVar2 = true;
    }
    else if (7 < param_1) {
      bVar1 = true;
    }
  }
  else {
    uVar4 = (byte)(&DAT_000fa84b)[param_1] & 0xf;
    uVar5 = (uint)((byte)(&DAT_000fa84b)[param_1] >> 4);
    if (param_1 < 7) {
      bVar2 = true;
    }
    else if (7 < param_1) {
      bVar1 = true;
    }
  }
  or_bytes_into_four_globals_000f6ad6((&DAT_000faabe)[uVar4],(&DAT_000faacd)[uVar4],(&DAT_000faadc)[uVar4],
               (&DAT_000faaeb)[uVar4]);
  or_bytes_into_four_globals_000f6ad6((&DAT_000faafa)[uVar5],(&DAT_000fab09)[uVar5],(&DAT_000fab18)[uVar5],
               (&DAT_000fab27)[uVar5]);
  bVar3 = DAT_0003c4b4 | 8;
  if (bVar1) {
    DAT_0003c4b0 = DAT_0003c4b0 | 1;
  }
  else if (bVar2) {
    DAT_0003c4b0 = DAT_0003c4b0 | 1;
    DAT_0003c4bc = DAT_0003c4bc | 1;
    DAT_0003c4b1 = DAT_0003c4b1 | 0x80;
    bVar3 = DAT_0003c4b4 | 9;
  }
  DAT_0003c4b4 = bVar3;
  return;
}
