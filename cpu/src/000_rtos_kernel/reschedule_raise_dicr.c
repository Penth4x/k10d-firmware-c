/* @k10d reschedule_raise_dicr @ 0x1000d4e2
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed set_kernel_flag_one)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Sets the global variable at 0x10011c5c to 1.
 * summary:
 *   The function performs a single write operation, assigning the value 1 to the global
 *   variable DAT_10011c5c. It resides in the rtos_kernel module, suggesting it sets a
 *   kernel-level state or flag, but the specific meaning of this flag is not determinable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reschedule_raise_dicr(void)

{
  *DAT_10011c5c/*ROM*/ = 1;
  return;
}
