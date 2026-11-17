/* @k10d check_kernel_flag_zero @ 0x1000e744
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Returns true if the 32-bit global DAT_6a003aa8 is zero.
 * summary:
 *   The function performs a single comparison of the global variable DAT_6a003aa8 against
 *   zero and returns the boolean result. It resides in the rtos_kernel module, suggesting
 *   it checks a kernel state flag, but the specific role of DAT_6a003aa8 is not
 *   determinable from the pseudocode alone. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_kernel_flag_zero(void)

{
  return DAT_6a003aa8 == '\0';
}
