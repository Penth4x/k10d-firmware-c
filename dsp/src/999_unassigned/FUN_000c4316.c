/* @k10d FUN_000c4316 @ 0x000c4316
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000c4316(void)

{
  if ((((DAT_0003c18e & 0x20) == 0) || ((DAT_0003c18e & 8) != 0)) || ((DAT_0003c18f & 1) != 0)) {
    if ((((DAT_0003c18e & 0x10) == 0) || ((DAT_0003c18e & 4) != 0)) || ((DAT_0003c18f & 2) != 0)) {
      DAT_0003c492 = 4;
      if (DAT_0003c493 == '\n') {
        DAT_0003c493 = '\b';
        DAT_0003c4de = DAT_0003c4de | 0x10;
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
    }
    else if ((DAT_0003c18f & 8) == 0) {
      set_three_byte_flags_000c43a4();
    }
    else {
      set_control_bits_and_flag();
    }
  }
  else if ((DAT_0003c18f & 8) == 0) {
    set_three_byte_flags_000c43a4();
  }
  else {
    set_control_bits_and_flag();
  }
  DAT_0003c181 = DAT_0003c181 & 0x3f;
  return;
}
