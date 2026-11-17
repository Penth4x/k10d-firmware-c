/* @k10d mask_26bit @ 0x1000d4ce
 * name: earlier (carried from an earlier Ghidra session, not re-verified)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Returns the lower 26 bits of the input value by masking with 0x3ffffff.
 * summary:
 *   A simple bitwise AND operation that clears the upper 6 bits of the 32-bit input. No
 *   callees or side effects. Likely used to extract a 26-bit field from a register or
 *   address value within the RTOS kernel module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint mask_26bit(uint param_1)

{
  return param_1 & 0x3ffffff;
}
