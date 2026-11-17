/* @k10d clock_set_check @ 0x1045281c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed test_watch_counter_bit15)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns true if bit 15 of the 32-bit MMIO register at 0x40090004 is set.
 * summary:
 *   Reads the 32-bit value at MMIO address 0x40090004 and tests bit 15 (0x8000). The
 *   address falls within the 0x40090000..0x400900ff region identified in the brief as
 *   Watch-counter / RTC I/O. No callees are invoked. The specific meaning of bit 15 is not
 *   determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool clock_set_check(uint32_t param_x0)

{
  return (_DAT_40090004/*RTC*/ & 0x8000) != 0;
}
