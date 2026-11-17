/* @k10d set_watch_counter_enable @ 0x10452806
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Enables or disables the watch-counter/RTC I/O block by writing 0x8000 or 0 to
 *   0x40090004.
 * summary:
 *   Writes a single 16-bit value to the MMIO region 0x40090000..0x400900ff, which the brief
 *   identifies as Watch-counter / RTC I/O. The value 0x8000 is written when param_2 is non-
 *   zero, and 0 when param_2 is zero, acting as an enable/disable control. No other side
 *   effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_watch_counter_enable(uint32_t param_1,int param_2)

{
  if (param_2 == 0) {
    _DAT_40090004/*RTC*/ = 0;
  }
  else {
    _DAT_40090004/*RTC*/ = 0x8000;
  }
  return;
}
