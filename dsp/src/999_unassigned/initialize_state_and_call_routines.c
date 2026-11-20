/* @k10d initialize_state_and_call_routines @ 0x000ce584
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Resets several global variables to specific values and invokes two other functions.
 * summary:
 *   The function sets DAT_000000ea, DAT_000000e8, DAT_000000ec, and DAT_000000db to 0, 0,
 *   3, and 0xf respectively. It clears the lower two bits of DAT_00000401. It then calls
 *   FUN_000cdaa4, sets bit 6 of DAT_0003ce09, and finally calls
 *   clear_and_set_status_flags_000cb73c with DAT_0003ce40 as an argument.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_state_and_call_routines(void)

{
  DAT_000000ea = 0;
  DAT_000000e8 = 0;
  DAT_000000ec = 3;
  DAT_000000db = 0xf;
  DAT_00000401 = DAT_00000401 & 0xfc;
  FUN_000cdaa4();
  DAT_0003ce09 = DAT_0003ce09 | 0x40;
  clear_and_set_status_flags_000cb73c(_DAT_0003ce40);
  return;
}
