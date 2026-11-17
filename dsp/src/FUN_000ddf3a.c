/* @k10d FUN_000ddf3a @ 0x000ddf3a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ddf3a(int param_1)

{
  _DAT_0003c884 = unsigned_divide(param_1 + 500,1000);
  increment_capped_counter();
  toggle_bit6_based_on_counter();
  toggle_bit0_from_bit1();
  DAT_0003c800 = 1;
  dispatch_state_machine_000de49c();
  return;
}
