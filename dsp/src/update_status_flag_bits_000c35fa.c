/* @k10d update_status_flag_bits_000c35fa @ 0x000c35fa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets specific bits in DAT_0003c181 and DAT_0003c58b based on conditions in DAT_0003c18e
 *   and other status bytes.
 * summary:
 *   The function checks combinations of bits in DAT_0003c18e, DAT_0003c4df, DAT_0003c589,
 *   and DAT_0003c129. Depending on these conditions, it sets bit 6 (0x40) or bit 7 (0x80)
 *   of DAT_0003c181 and sets bit 1 (value 2) of DAT_0003c58b. No external calls are made;
 *   it only manipulates these global variables.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flag_bits_000c35fa(void)

{
  if (((DAT_0003c18e & 0x20) != 0) && ((DAT_0003c18e & 8) == 0)) {
    if (((DAT_0003c18e & 0x80) != 0) && ((DAT_0003c4df & 8) == 0)) {
      DAT_0003c181 = DAT_0003c181 | 0x40;
    }
    DAT_0003c58b = DAT_0003c58b | 2;
  }
  if ((((DAT_0003c18e & 0x10) != 0) && ((DAT_0003c18e & 4) == 0)) && ((DAT_0003c181 & 0x40) == 0)) {
    if (((DAT_0003c589 & 1) == 0) || ((DAT_0003c129 & 1) != 0)) {
      if ((DAT_0003c58b & 2) != 0) {
        DAT_0003c181 = DAT_0003c181 | 0x80;
      }
    }
    else if (((DAT_0003c58b & 2) != 0) || ((DAT_0003c58b & 0x40) != 0)) {
      DAT_0003c181 = DAT_0003c181 | 0x80;
    }
    DAT_0003c58b = DAT_0003c58b | 2;
  }
  return;
}
