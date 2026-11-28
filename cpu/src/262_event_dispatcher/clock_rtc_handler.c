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

uint32_t clock_rtc_handler(void *rtc_obj)

{
  uint reg_pair_0104;
  uint reg_pair_0106;
  uint32_t dispatch_result;

  reg_pair_0104 = rtc_read_reg_pair_0104(*(uint32_t *)((int)rtc_obj + 0x108));
  store_two_bit_fields_to_globals(*(uint32_t *)((int)rtc_obj + 0x108),reg_pair_0104);
  reg_pair_0106 = rtc_read_reg_pair_0106(*(uint32_t *)((int)rtc_obj + 0x108));
  reg_pair_0104 = reg_pair_0104 & reg_pair_0106 & 0xffff;
  if (reg_pair_0104 == 0) {
    dispatch_result = 0;
  }
  else {
    dispatch_result = event_dispatcher(rtc_obj,-0x7fffffeb,reg_pair_0104);
  }
  return dispatch_result;
}
