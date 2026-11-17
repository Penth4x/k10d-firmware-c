/* @k10d update_timer_counter_state @ 0x000eb6c4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates a pair of byte counters based on a flag bit in DAT_0003c003.
 * summary:
 *   Calls write_nibble_to_ram_region with argument 0x13. If bit 7 of DAT_0003c003 is set,
 *   it either increments DAT_0003c1f6 (if DAT_0003c1f7 is zero) or decrements DAT_0003c1f7.
 *   If the decrement path was not taken, DAT_0003c1f7 is reset to 4. The specific hardware
 *   or logical meaning of these counters is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_timer_counter_state(void)

{
  bool bVar1;
  
  bVar1 = false;
  write_nibble_to_ram_region(0x13);
  if ((DAT_0003c003 & 0x80) != 0) {
    if (DAT_0003c1f7 == '\0') {
      DAT_0003c1f6 = DAT_0003c1f6 + '\x01';
    }
    else {
      DAT_0003c1f7 = DAT_0003c1f7 + -1;
      bVar1 = true;
    }
  }
  if (!bVar1) {
    DAT_0003c1f7 = '\x04';
  }
  return;
}
