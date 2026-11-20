/* @k10d initialize_status_flags_000e759a @ 0x000e759a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Resets a block of global status variables and sets specific bits based on conditions in
 *   other globals.
 * summary:
 *   The function writes fixed values to a series of global variables (DAT_000000f5 through
 *   DAT_000000fe and DAT_0003c048-4a). It then conditionally modifies DAT_000000f6 by
 *   setting bits 3 and 5 if corresponding globals (DAT_0003c072-74) are non-zero. Finally,
 *   it sets bit 5 of DAT_0003c066, bit 0 of DAT_000000f7, and sets DAT_000000f5 to 1. No
 *   external functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_status_flags_000e759a(void)

{
  DAT_000000f6 = 1;
  DAT_000000f9 = 0;
  DAT_000000fa = 0x40;
  DAT_000000fb = 0;
  DAT_000000fc = 0;
  DAT_000000fd = 0;
  DAT_000000fe = 0;
  DAT_0003c04a = 0;
  DAT_0003c049 = 0;
  DAT_0003c048 = 0;
  if (DAT_0003c074 != '\0') {
    DAT_000000f6 = 3;
  }
  if (DAT_0003c073 != '\0') {
    DAT_000000f6 = DAT_000000f6 | 8;
  }
  if (DAT_0003c072 != '\0') {
    DAT_000000f6 = DAT_000000f6 | 0x20;
  }
  DAT_0003c066 = DAT_0003c066 | 0x20;
  DAT_000000f7 = DAT_000000f7 & 0xfe | 1;
  DAT_000000f5 = 1;
  return;
}
