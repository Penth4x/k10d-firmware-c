/* @k10d update_two_flag_bytes @ 0x000c7148
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Conditionally sets and clears specific bits in two adjacent global flag bytes.
 * summary:
 *   The function reads two global bytes at 0x0003c4d0 and 0x0003c4d1 and performs a series
 *   of bitwise operations based on the current state of bits 4, 6, and 2. It sets bits 2,
 *   4, and 5 of the second byte in most branches, and sets bit 7 of the first byte in one
 *   branch. No memory-mapped I/O or known subsystem functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_two_flag_bytes(void)

{
  if ((DAT_0003c4d1 & 0x10) == 0) {
    if ((DAT_0003c4d0 & 0x40) == 0) {
      if ((DAT_0003c4d1 & 4) == 0) {
        DAT_0003c4d1 = DAT_0003c4d1 | 0x34;
      }
      else {
        DAT_0003c4d1 = DAT_0003c4d1 & 0xfb | 0x30;
      }
    }
    else {
      DAT_0003c4d0 = DAT_0003c4d0 | 0x80;
      DAT_0003c4d1 = DAT_0003c4d1 | 0x30;
    }
  }
  return;
}
