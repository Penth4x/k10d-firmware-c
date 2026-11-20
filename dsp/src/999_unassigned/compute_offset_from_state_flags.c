/* @k10d compute_offset_from_state_flags @ 0x000d9cec
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calculates a value for DAT_0003c6f2 by adding a small constant to DAT_0003c56b based on
 *   several state flags.
 * summary:
 *   The function initializes DAT_0003c6f2 to DAT_0003c56b and then conditionally adds 6, 8,
 *   or 12 depending on the values of DAT_0003c19f, DAT_0003c493, DAT_0003c492, and bit 7 of
 *   DAT_0003c181. It also uses param_1 to select between adding 6 or 12 in one branch. No
 *   external functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_offset_from_state_flags(int param_1)

{
  DAT_0003c6f2 = DAT_0003c56b;
  if (DAT_0003c19f == '\x01') {
    if (DAT_0003c493 == '\t') {
      if (DAT_0003c492 != -1) {
        DAT_0003c6f2 = DAT_0003c56b + '\f';
      }
    }
    else if (DAT_0003c493 == '\x15') {
      if ((DAT_0003c181 & 0x80) == 0) {
        if (((DAT_0003c492 == '\x02') || (DAT_0003c492 == '\x04')) || (DAT_0003c492 == '\x06')) {
          DAT_0003c6f2 = DAT_0003c56b + '\b';
        }
      }
      else {
        DAT_0003c6f2 = DAT_0003c56b + '\f';
      }
    }
  }
  else if (DAT_0003c492 == '\x04') {
    if ((DAT_0003c036 & 1) == 0) {
      if ((DAT_0003c181 & 0x80) == 0) {
        DAT_0003c6f2 = DAT_0003c56b + '\b';
      }
      else {
        DAT_0003c6f2 = DAT_0003c56b + '\x06';
      }
    }
  }
  else if (DAT_0003c492 == '\x05') {
    if (param_1 == 1) {
      DAT_0003c6f2 = DAT_0003c56b + '\f';
    }
    else {
      DAT_0003c6f2 = DAT_0003c56b + '\x06';
    }
  }
  return;
}
