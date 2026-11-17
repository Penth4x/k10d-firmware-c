/* @k10d update_status_flag_bits_000c35c2 @ 0x000c35c2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets specific bits in a status byte based on the state of three other flag bytes.
 * summary:
 *   The function checks bit 0 of DAT_0003c198 and sets bit 6 (0x40) of DAT_0003c58b if set.
 *   It then checks bit 0 of DAT_0003c193; if clear, it sets bit 1 of DAT_0003c58b if bit 1
 *   of DAT_0003c004 is set, otherwise it calls update_status_flag_bits_000c35fa. Finally,
 *   if either bit 1 or bit 6 of DAT_0003c58b is set, it sets bit 0 of DAT_0003c58b. The
 *   specific roles of the DAT globals are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flag_bits_000c35c2(void)

{
  if ((DAT_0003c198 & 1) != 0) {
    DAT_0003c58b = DAT_0003c58b | 0x40;
  }
  if ((DAT_0003c193 & 1) == 0) {
    if ((DAT_0003c004 & 2) != 0) {
      DAT_0003c58b = DAT_0003c58b | 2;
    }
  }
  else {
    update_status_flag_bits_000c35fa();
  }
  if (((DAT_0003c58b & 2) != 0) || ((DAT_0003c58b & 0x40) != 0)) {
    DAT_0003c58b = DAT_0003c58b | 1;
  }
  return;
}
