/* @k10d wait_for_ram_flag_bit0 @ 0x000ea11c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Calls an init routine, spins until bit 0 of bRam00000000 is set, then calls a follow-up
 *   routine.
 * summary:
 *   The function invokes clear_interrupt_flags_and_update_counters, then busy-waits in a
 *   do-while loop until the low bit of the global bRam00000000 becomes 1. After the flag is
 *   observed set, it calls clear_bit_and_set_flags and returns. No other side effects or
 *   MMIO accesses are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_ram_flag_bit0(void)

{
  clear_interrupt_flags_and_update_counters();
  do {
  } while ((bRam00000000 & 1) == 0);
  clear_bit_and_set_flags();
  return;
}
