/* @k10d update_status_flag_bits_000c737c @ 0x000c737c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Updates bits 1 and 2 of a status byte based on multiple input flag conditions.
 * summary:
 *   The function modifies the byte at DAT_0003c07e by setting or clearing bits 1 (value 2)
 *   and 2 (value 4) based on the state of several other global variables (DAT_0003c037,
 *   DAT_0003c4de, DAT_0003c396, DAT_0003c804, etc.). It also clears bit 3 (value 8) under
 *   specific conditions involving DAT_0003c447, DAT_0003c589, and DAT_0003c492. No external
 *   functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flag_bits_000c737c(void)

{
  if ((DAT_0003c037 & 4) == 0) {
    if ((DAT_0003c4de & 1) == 0) {
      DAT_0003c07e = DAT_0003c07e | 4;
    }
    else if ((DAT_0003c396 & 0x80) == 0) {
      DAT_0003c07e = DAT_0003c07e & 0xfb;
    }
    else {
      DAT_0003c07e = DAT_0003c07e | 4;
    }
    if ((DAT_0003c804 & 0x80) == 0) {
      if (((DAT_0003c4de & 1) == 0) || ((DAT_0003c396 & 0x80) == 0)) {
        DAT_0003c07e = DAT_0003c07e & 0xfd;
      }
      else {
        DAT_0003c07e = DAT_0003c07e | 2;
      }
    }
    else if ((DAT_0003c4de & 1) == 0) {
      DAT_0003c07e = DAT_0003c07e | 2;
    }
    else if ((DAT_0003c396 & 0x80) == 0) {
      DAT_0003c07e = DAT_0003c07e & 0xfd;
    }
    else {
      DAT_0003c07e = DAT_0003c07e | 2;
    }
    if ((((DAT_0003c447 == '\x02') ||
         (((DAT_0003c447 == '\x03' && ((DAT_0003f362 & 0x80) == 0)) || (DAT_0003c447 == '\x04'))))
        || (DAT_0003c447 == '\x05')) ||
       (((DAT_0003f362 & 0x40) != 0 && ((DAT_0003c805 & 0x40) != 0)))) {
      DAT_0003c07e = DAT_0003c07e & 0xf9;
    }
    if (((DAT_0003c589 & 1) != 0) &&
       (((DAT_0003c492 == '\v' || (DAT_0003c492 == '\f')) ||
        ((DAT_0003c492 == '\r' || ((DAT_0003c492 == '\x0f' || (DAT_0003c492 == '\x16')))))))) {
      DAT_0003c07e = DAT_0003c07e & 0xf9;
    }
    if (((DAT_0003c493 == '\b') || (DAT_0003c493 == '\t')) || (DAT_0003c493 == '\n')) {
      DAT_0003c07e = DAT_0003c07e & 0xf9;
    }
    if ((((DAT_0003c396 & 0x80) == 0) && ((DAT_0003c127 & 1) != 0)) && (DAT_0003c3b5 == '\0')) {
      DAT_0003c07e = DAT_0003c07e & 0xf9;
    }
  }
  else {
    DAT_0003c07e = DAT_0003c07e & 0xf9;
  }
  return;
}
