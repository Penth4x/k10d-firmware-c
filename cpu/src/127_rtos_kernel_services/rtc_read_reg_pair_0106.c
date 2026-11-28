/* @k10d rtc_read_reg_pair_0106 @ 0x104528c4
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed read_two_byte_status_from_mmio)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads two bytes from MMIO addresses 0x401c0106 and 0x401c0126, masks the lower 2 bits
 *   of each, and combines them into a 16-bit value.
 * summary:
 *   The function performs two direct memory reads from the 0x401c0000 region. It extracts
 *   the least significant 2 bits from the byte at 0x401c0106 and shifts them left by 8
 *   bits. It then ORs this with the least significant 2 bits of the byte at 0x401c0126. The
 *   result is returned as a 16-bit unsigned integer. No other side effects or kernel calls
 *   are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort rtc_read_reg_pair_0106(uint32_t unused_rtc_obj)

{
  return (_DAT_401c0106 & 3) << 8 | _DAT_401c0126 & 3;
}
