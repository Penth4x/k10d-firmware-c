/* @k10d write_watch_counter_register @ 0x10452848
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_watch_counter_register(uint32_t unused_value)

{
  /* Store 0x8000 as a halfword to the RTC watch-counter register (0x40090006). */
  _DAT_40090006/*RTC*/ = 0x8000;
  return;
}
