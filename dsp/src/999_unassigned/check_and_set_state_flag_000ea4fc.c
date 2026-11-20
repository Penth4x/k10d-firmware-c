/* @k10d check_and_set_state_flag_000ea4fc @ 0x000ea4fc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Checks if a global byte equals 3, and if so calls a helper and updates two adjacent
 *   global variables.
 * summary:
 *   The function tests the global variable DAT_0003c1f4 against the value 0x03. If the
 *   condition is met, it calls clear_bit2_of_dat_00000005, copies the value from
 *   DAT_0003f3cf into the 16-bit variable _DAT_0003c1fc, and sets the byte variable
 *   DAT_0003c1fe to 4. The specific roles of these globals and the callee are not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void check_and_set_state_flag_000ea4fc(void)

{
  if (DAT_0003c1f4 == '\x03') {
    clear_bit2_of_dat_00000005();
    _DAT_0003c1fc = (ushort)DAT_0003f3cf;
    DAT_0003c1fe = 4;
  }
  return;
}
