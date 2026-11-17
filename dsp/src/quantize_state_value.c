/* @k10d quantize_state_value @ 0x000c846a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clamps and quantizes DAT_0003c454 to specific discrete values based on DAT_0003c3ac.
 * summary:
 *   The function reads DAT_0003c3ac as a mode selector. If zero, it maps DAT_0003c454 to
 *   even values (0, 4, 8, 0xc, 0x10) or resets it to 0. If non-zero, it maps DAT_0003c454
 *   to odd values (0, 3, 5, 8, 0xb, 0xd, 0x10) or resets it to 0. Finally, it copies the
 *   resulting value to DAT_0003c453 and DAT_0003c452. No external calls are made.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void quantize_state_value(void)

{
  if (DAT_0003c3ac == '\0') {
    if (DAT_0003c454 < 3) {
      DAT_0003c454 = 0;
    }
    else if (DAT_0003c454 < 6) {
      DAT_0003c454 = 4;
    }
    else if (DAT_0003c454 < 0xb) {
      DAT_0003c454 = 8;
    }
    else if (DAT_0003c454 < 0xe) {
      DAT_0003c454 = 0xc;
    }
    else if (DAT_0003c454 < 0x13) {
      DAT_0003c454 = 0x10;
    }
    else {
      DAT_0003c454 = 0;
    }
  }
  else if (DAT_0003c454 < 2) {
    DAT_0003c454 = 0;
  }
  else if (DAT_0003c454 < 5) {
    DAT_0003c454 = 3;
  }
  else if (DAT_0003c454 < 7) {
    DAT_0003c454 = 5;
  }
  else if (DAT_0003c454 < 10) {
    DAT_0003c454 = 8;
  }
  else if (DAT_0003c454 < 0xd) {
    DAT_0003c454 = 0xb;
  }
  else if ((DAT_0003c454 < 0xd) || (0xe < DAT_0003c454)) {
    if ((DAT_0003c454 < 0xf) || (0x11 < DAT_0003c454)) {
      DAT_0003c454 = 0;
    }
    else {
      DAT_0003c454 = 0x10;
    }
  }
  else {
    DAT_0003c454 = 0xd;
  }
  DAT_0003c453 = DAT_0003c454;
  DAT_0003c452 = DAT_0003c454;
  return;
}
