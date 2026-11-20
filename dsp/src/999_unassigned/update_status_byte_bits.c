/* @k10d update_status_byte_bits @ 0x000c48c2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Updates specific bits of DAT_0003c184 and sets bits in DAT_0003c185/186 based on
 *   various flag conditions.
 * summary:
 *   The function conditionally sets or clears bits 0-7 of the 16-bit value at DAT_0003c184
 *   based on the state of several other global variables (DAT_0003c588, DAT_0003c18f,
 *   DAT_0003c127, DAT_0003c492, DAT_0003c191, DAT_0003c440, DAT_0003c190, DAT_0003c4d2). It
 *   calls compute_signed_fixed_point_value to obtain a value used to set bits 1 and 2 of
 *   DAT_0003c184. Finally, it sets bits 0 and 1 of DAT_0003c185 and bits 0, 1, and 3 of
 *   DAT_0003c186 unconditionally.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_byte_bits(void)

{
  ushort uVar1;
  
  if ((DAT_0003c588 & 1) != 0) {
    if ((DAT_0003c18f & 0x10) == 0) {
      DAT_0003c184 = DAT_0003c184 & 0x7f;
    }
    else {
      DAT_0003c184 = DAT_0003c184 | 0x80;
    }
  }
  if ((DAT_0003c127 & 8) == 0) {
    DAT_0003c184 = DAT_0003c184 & 0xf9;
  }
  else {
    uVar1 = compute_signed_fixed_point_value();
    if (uVar1 < 0x51) {
      DAT_0003c184 = DAT_0003c184 | 6;
    }
    else if (uVar1 < 0x60) {
      DAT_0003c184 = DAT_0003c184 & 0xfd | 4;
    }
    else if (uVar1 < 0x7e) {
      DAT_0003c184 = DAT_0003c184 & 0xfb | 2;
    }
    else {
      DAT_0003c184 = DAT_0003c184 & 0xf9;
    }
  }
  if (((((DAT_0003c492 != 0) && (DAT_0003c492 < 7)) || ((10 < DAT_0003c492 && (DAT_0003c492 < 0xf)))
       ) || (DAT_0003c492 == 0x10)) && ((DAT_0003c191 & 0x60) == 0x20)) {
    if ((DAT_0003c440 == '\b') || (DAT_0003c440 == '\x11')) {
      if (DAT_0003c492 == 1) {
        DAT_0003c184 = DAT_0003c184 & 0xf7;
      }
      else if (((DAT_0003c492 == 4) && ((DAT_0003c181 & 0x40) == 0)) && ((DAT_0003c181 & 0x80) == 0)
              ) {
        DAT_0003c184 = DAT_0003c184 & 0xf7;
      }
      else if ((DAT_0003c191 & 0x20) == 0) {
        DAT_0003c184 = DAT_0003c184 & 0xf7;
      }
      else {
        DAT_0003c184 = DAT_0003c184 | 8;
      }
    }
    else if ((DAT_0003c191 & 0x20) == 0) {
      DAT_0003c184 = DAT_0003c184 & 0xf7;
    }
    else {
      DAT_0003c184 = DAT_0003c184 | 8;
    }
  }
  if (((DAT_0003c190 & 0x20) != 0) || ((DAT_0003c4d2 & 0x80) != 0)) {
    DAT_0003c184 = DAT_0003c184 | 1;
  }
  DAT_0003c185 = DAT_0003c185 | 3;
  DAT_0003c186 = DAT_0003c186 | 0xb;
  return;
}
