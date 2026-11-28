/* @k10d read_watch_counter_bit15 @ 0x10452832
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns true if bit 15 of the byte at 0x40090006 is set.
 * summary:
 *   Reads the MMIO byte at 0x40090006, which lies within the 0x40090000..0x400900ff watch-
 *   counter/RTC I/O region, and tests bit 15 (0x8000). The function has no callees and
 *   performs no writes. The specific meaning of this bit in the watch-counter/RTC block is
 *   not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool read_watch_counter_bit15(uint32_t unused_arg)

{
  /* lduh @0x40090006, and with 0x8000; return 1 if bit 15 set, else 0 */
  return (_DAT_40090006/*RTC*/ & 0x8000) != 0;
}
