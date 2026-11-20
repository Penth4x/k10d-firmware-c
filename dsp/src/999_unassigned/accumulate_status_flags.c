/* @k10d accumulate_status_flags @ 0x000c917e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets bits 0-3 of DAT_0003c38c based on specific bit conditions in DAT_0003c198,
 *   DAT_0003c58b, and DAT_0003c036.
 * summary:
 *   The function checks four specific bit conditions across three global variables. If
 *   DAT_0003c198 bit 0 is set, it sets bit 0 of DAT_0003c38c. If DAT_0003c58b bit 1 is set,
 *   it sets bit 1 of DAT_0003c38c. If DAT_0003c58b bit 0 is set, it sets bit 2 of
 *   DAT_0003c38c. If DAT_0003c036 bit 0 is clear, it sets bit 3 of DAT_0003c38c. No other
 *   side effects are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void accumulate_status_flags(void)

{
  if ((DAT_0003c198 & 1) != 0) {
    DAT_0003c38c = DAT_0003c38c | 1;
  }
  if ((DAT_0003c58b & 2) != 0) {
    DAT_0003c38c = DAT_0003c38c | 2;
  }
  if ((DAT_0003c58b & 1) != 0) {
    DAT_0003c38c = DAT_0003c38c | 4;
  }
  if ((DAT_0003c036 & 1) == 0) {
    DAT_0003c38c = DAT_0003c38c | 8;
  }
  return;
}
