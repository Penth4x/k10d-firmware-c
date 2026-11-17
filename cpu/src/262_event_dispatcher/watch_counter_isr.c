/* @k10d watch_counter_isr @ 0x104fae06
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed handle_watch_counter_irq)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Checks a status flag at offset 0x108, clears it if set, and conditionally posts an
 *   event via event_dispatcher.
 * summary:
 *   The function reads a pointer from param_1+0x108 and passes it to
 *   read_watch_counter_bit15 to check a status. If the status is non-zero, it calls
 *   write_watch_counter_register to clear/acknowledge the status. It then re-checks the
 *   status with clock_set_check; if still non-zero, it calls event_dispatcher with param_1,
 *   -0x7fffffed (0x80000013), and 1. The caller is an IRQ demultiplexer, suggesting this
 *   handles a specific hardware interrupt source, likely the watch-counter/RTC based on the
 *   event ID 0x80000013.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t watch_counter_isr(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = read_watch_counter_bit15(*(uint32_t *)((int)param_1 + 0x108));
  uVar2 = 0;
  if (iVar1 != 0) {
    write_watch_counter_register(*(uint32_t *)((int)param_1 + 0x108));
    iVar1 = clock_set_check(*(uint32_t *)((int)param_1 + 0x108));
    if (iVar1 != 0) {
      uVar2 = event_dispatcher(param_1,-0x7fffffed,1);
    }
  }
  return uVar2;
}
