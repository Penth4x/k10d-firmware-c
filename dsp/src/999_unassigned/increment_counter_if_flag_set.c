/* @k10d increment_counter_if_flag_set @ 0x000f6c7a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Increments a global counter if a specific bit in a status word is set and a parameter
 *   matches a global value.
 * summary:
 *   Checks if bit 6 (0x40) of DAT_0003c128 is set. If so, and if param_1 does not equal
 *   _DAT_0003cf00, it calls poll_keypad_with_retry(0x80, 0x22) and increments the global
 *   counter _DAT_0003ce1c. Returns the updated counter value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint increment_counter_if_flag_set(int param_1,uint param_2)

{
  if (((DAT_0003c128 & 0x40) != 0) && (param_2 = (uint)_DAT_0003ce1c, param_1 != _DAT_0003cf00)) {
    poll_keypad_with_retry(0x80,0x22);
    param_2 = param_2 + 1;
    _DAT_0003ce1c = (ushort)param_2;
  }
  return param_2;
}
