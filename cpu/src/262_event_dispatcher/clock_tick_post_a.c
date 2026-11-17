/* @k10d clock_tick_post_a @ 0x104fa8d6
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed read_watch_counter_status)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Reads and clears a 16-bit status word from a watch-counter/RTC I/O block via helper
 *   functions.
 * summary:
 *   The function retrieves a value from the object field at offset 0x108 using
 *   read_mmio_word_masked_104520b0, then calls write_gpio_key_port with that value (likely
 *   an acknowledge/clear operation). It then reads another value via
 *   read_mmio_word_masked_1045209e, ANDs the two results with 0xffff, and if non-zero,
 *   calls event_dispatcher with the masked value. The caller is an IRQ demux for the watch-
 *   counter source, consistent with the 0x40090000 watch-counter/RTC I/O region in the
 *   brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clock_tick_post_a(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  
  uVar1 = read_mmio_word_masked_104520b0(*(uint32_t *)((int)param_1 + 0x108));
  write_gpio_key_port(*(uint32_t *)((int)param_1 + 0x108),uVar1);
  uVar2 = read_mmio_word_masked_1045209e(*(uint32_t *)((int)param_1 + 0x108));
  uVar1 = uVar1 & uVar2 & 0xffff;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = event_dispatcher(param_1,-0x7fffffff,uVar1);
  }
  return uVar3;
}
