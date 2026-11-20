/* @k10d set_flag_bit3_clear_counter @ 0x000db5f4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears a byte at 0x3c199 and sets bit 3 of a byte at 0x3c198.
 * summary:
 *   The function performs two simple memory writes: it stores 0 into the global
 *   DAT_0003c199 and ORs the value 8 into DAT_0003c198. There are no callees, no MMIO
 *   operations, and no other side effects. The specific roles of these two adjacent bytes
 *   are not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_bit3_clear_counter(void)

{
  DAT_0003c199 = 0;
  DAT_0003c198 = DAT_0003c198 | 8;
  return;
}
