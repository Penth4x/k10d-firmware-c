/* @k10d rtc_read_reg_pair_0104 @ 0x104528fa
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed read_two_bit_status_pair)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads the lower two bits from two MMIO registers and combines them into a 16-bit value.
 * summary:
 *   The function reads a byte from 0x401c0104 and another from 0x401c0124. It masks each
 *   with 0x3 to extract the two least significant bits. The first value is shifted left by
 *   8 bits and ORed with the second value to form the return value. The memory addresses
 *   are outside the documented K10D MMIO regions in the project brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort rtc_read_reg_pair_0104(uint32_t unused_param)

{
  /* (reg_0104 & 0x3) in upper byte, (reg_0124 & 0x3) in lower byte */
  return (_DAT_401c0104 & 3) << 8 | _DAT_401c0124 & 3;
}
