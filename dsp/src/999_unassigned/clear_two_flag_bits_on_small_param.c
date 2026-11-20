/* @k10d clear_two_flag_bits_on_small_param @ 0x000cff88
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Clears bit 0 of DAT_000000d1 and bit 7 of DAT_000000f6 when param_1 is less than 8.
 * summary:
 *   Gated by param_1 < 8, the function spins in a do-while loop comparing a masked sum of
 *   DAT_0003f481 and param_2 against _DAT_0000004a, then calls
 *   check_two_flag_conditions_000cc6f0. It then clears bit 0 of DAT_000000d1 (mask 0xfe)
 *   and bit 7 of DAT_000000f6 (mask 0x7f). The roles of the DAT globals and the wait
 *   condition are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_two_flag_bits_on_small_param(int param_1,int param_2)

{
  if (param_1 < 8) {
    do {
    } while ((int)((uint)DAT_0003f481 + param_2 & 0xffff) <= _DAT_0000004a);
    check_two_flag_conditions_000cc6f0();
    DAT_000000d1 = DAT_000000d1 & 0xfe;
    DAT_000000f6 = DAT_000000f6 & 0x7f;
  }
  return;
}
