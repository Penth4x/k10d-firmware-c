/* @k10d select_status_code_by_flags @ 0x000f4aa0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Returns a status code (0x1c, 0x29, or 0x33) based on specific bit patterns in global
 *   flag bytes.
 * summary:
 *   The function checks a complex combination of bits in DAT_0003c58b, DAT_0003c580,
 *   DAT_0003c581, and DAT_0003c4d4. If these conditions are met and bit 1 of DAT_0003c028
 *   is clear, it clears bit 4 of DAT_0003c4b6 and returns one of three hardcoded values
 *   depending on bits in DAT_0003c4d4 and DAT_0003c3ac. Otherwise, it returns the input
 *   parameter unchanged.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_status_code_by_flags(uint32_t param_1)

{
  if (((((((DAT_0003c58b & 0x20) != 0) || ((DAT_0003c580 & 4) != 0)) || ((DAT_0003c581 & 4) != 0))
       || (((DAT_0003c581 & 8) != 0 || ((DAT_0003c581 & 2) != 0)))) ||
      (((DAT_0003c581 & 1) != 0 || ((DAT_0003c4d4 & 0x80) != 0)))) && ((DAT_0003c028 & 2) == 0)) {
    if ((DAT_0003c4d4 & 0x10) == 0) {
      if ((DAT_0003c3ac == '\0') || ((DAT_0003c4d0 & 4) != 0)) {
        param_1 = 0x1c;
        DAT_0003c4b6 = DAT_0003c4b6 & 0xef;
      }
      else {
        param_1 = 0x29;
        DAT_0003c4b6 = DAT_0003c4b6 & 0xef;
      }
    }
    else {
      param_1 = 0x33;
      DAT_0003c4b6 = DAT_0003c4b6 & 0xef;
    }
  }
  return param_1;
}
