/* @k10d clear_flag_and_call_two_routines_000d1d30 @ 0x000d1d30
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   If a global flag bit is set and another bit is clear, clears two flag bits and calls
 *   two helper functions.
 * summary:
 *   Checks bit 0 of DAT_0003ce05 and bit 6 of DAT_0003c128. When the first is set and the
 *   second is clear, it clears bit 4 of DAT_0003ce05, calls clear_status_flag_bits_000cca22
 *   and clear_flag_if_check_zero, and clears bit 0 of DAT_0003ce01. In all cases where the
 *   initial flag is set, it overwrites the return value with 0xd. The roles of the DAT
 *   globals and the two callees are not known from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_flag_and_call_two_routines_000d1d30(uint32_t param_1)

{
  if ((DAT_0003ce05 & 1) != 0) {
    if ((DAT_0003c128 & 0x40) == 0) {
      DAT_0003ce05 = DAT_0003ce05 & 0xef;
      clear_status_flag_bits_000cca22();
      clear_flag_if_check_zero();
      DAT_0003ce01 = DAT_0003ce01 & 0xfe;
    }
    param_1 = 0xd;
  }
  return param_1;
}
