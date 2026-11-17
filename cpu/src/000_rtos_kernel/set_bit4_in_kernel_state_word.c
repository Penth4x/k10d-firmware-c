/* @k10d set_bit4_in_kernel_state_word @ 0x1000d3ea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Sets bit 4 (0x10) of a 32-bit word at offset 0x4c in a kernel data structure.
 * summary:
 *   The function performs a read-modify-write on the global DAT_6a003774, ORing the value
 *   0x10 into the word located at offset 0x4c. It has no callees and no other side effects.
 *   The specific role of this bit within the RTOS kernel state is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bit4_in_kernel_state_word(void)

{
  *(uint *)(_DAT_6a003774 + 0x4c) = *(uint *)(_DAT_6a003774 + 0x4c) | 0x10;
  return;
}
