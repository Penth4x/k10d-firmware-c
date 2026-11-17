/* @k10d update_two_state_flags @ 0x000c44d0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets two byte flags based on bit 7 of DAT_0003c181 and the value of DAT_0003c46d.
 * summary:
 *   Writes 4 or 5 to DAT_0003c492 depending on whether bit 7 of DAT_0003c181 is clear or
 *   set. Then sets or clears bit 5 (0x20) of DAT_0003c589 based on whether DAT_0003c46d
 *   equals 8, 9, or 10. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_two_state_flags(void)

{
  if ((DAT_0003c181 & 0x80) == 0) {
    DAT_0003c492 = 4;
  }
  else {
    DAT_0003c492 = 5;
  }
  if (DAT_0003c46d == '\b') {
    DAT_0003c589 = DAT_0003c589 | 0x20;
  }
  else if (DAT_0003c46d == '\t') {
    DAT_0003c589 = DAT_0003c589 | 0x20;
  }
  else if (DAT_0003c46d == '\n') {
    DAT_0003c589 = DAT_0003c589 | 0x20;
  }
  else {
    DAT_0003c589 = DAT_0003c589 & 0xdf;
  }
  return;
}
