/* @k10d copy_dat_values_by_mode @ 0x000f3c3c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Copies values from DAT_0003c48b/e and conditionally sets DAT_0003c483 based on
 *   DAT_0003c440.
 * summary:
 *   The function unconditionally copies DAT_0003c48b to DAT_0003c48a and DAT_0003c48e to
 *   DAT_0003c48d. It then branches on the value of DAT_0003c440: if 6, it sets DAT_0003c487
 *   and DAT_0003c483 to DAT_0003c488; if 7, it sets DAT_0003c483 to DAT_0003c3ad;
 *   otherwise, it sets DAT_0003c483 to DAT_0003c485. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_dat_values_by_mode(void)

{
  DAT_0003c48a = DAT_0003c48b;
  DAT_0003c48d = DAT_0003c48e;
  if (DAT_0003c440 == '\x06') {
    DAT_0003c487 = DAT_0003c488;
    DAT_0003c483 = DAT_0003c488;
  }
  else if (DAT_0003c440 == '\a') {
    DAT_0003c483 = DAT_0003c3ad;
  }
  else {
    DAT_0003c483 = DAT_0003c485;
  }
  return;
}
