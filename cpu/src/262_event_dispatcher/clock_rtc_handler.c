/* @k10d clock_rtc_handler @ 0x104faea6
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_watch_counter_status)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Reads and clears a status word from a hardware block, then posts an event if the lower
 *   16 bits are non-zero.
 * summary:
 *   The function reads a value from an object field at offset 0x108 using
 *   rtc_read_reg_pair_0104, then writes that value back via store_two_bit_fields_to_globals
 *   (likely an acknowledge/clear operation). It reads a second value from the same field
 *   using rtc_read_reg_pair_0106, ANDs the two results, and masks to 16 bits. If the result
 *   is non-zero, it calls event_dispatcher with a constant argument (-0x7fffffeb, which is
 *   0x80000015) to post an event or signal. The caller is an IRQ demultiplexer, suggesting
 *   this handles a periodic or interrupt-driven status check for a hardware peripheral.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clock_rtc_handler(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  
  uVar1 = rtc_read_reg_pair_0104(*(uint32_t *)((int)param_1 + 0x108));
  store_two_bit_fields_to_globals(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = rtc_read_reg_pair_0106(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = event_dispatcher(param_1,-0x7fffffeb,uVar1);
  }
  return uVar3;
}
