/* @k10d clear_bit_and_set_flag @ 0x000f317e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears bit 4 of DAT_00000403, sets bit 4 of DAT_00000503, and conditionally sets bit 6
 *   of DAT_0003c143.
 * summary:
 *   Calls configure_two_parameter_state with arguments (1,0). Performs bitwise operations
 *   on three global variables: clears bit 4 (0x10) of DAT_00000403, sets bit 4 (0x10) of
 *   DAT_00000503, and if DAT_0003c122 is 8 or 9, calls FUN_000e1798 and sets bit 6 (0x40)
 *   of DAT_0003c143. The role of the global variables is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit_and_set_flag(void)

{
  configure_two_parameter_state(1,0);
  DAT_00000403 = DAT_00000403 & 0xef;
  DAT_00000503 = DAT_00000503 | 0x10;
  if ((DAT_0003c122 != '\0') && ((DAT_0003c122 == '\b' || (DAT_0003c122 == '\t')))) {
    FUN_000e1798();
    DAT_0003c143 = DAT_0003c143 | 0x40;
  }
  return;
}
