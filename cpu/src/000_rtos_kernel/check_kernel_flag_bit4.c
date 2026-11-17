/* @k10d check_kernel_flag_bit4 @ 0x1000d388
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Returns 1 if bit 4 of a kernel status word at DAT_6a003774+0x4c is clear, else 0.
 * summary:
 *   Reads a 32-bit value from the global DAT_6a003774 at offset 0x4c and tests bit 4 (mask
 *   0x10). If the bit is set, the function returns 0; otherwise it returns 1. No callees
 *   are invoked and no other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_kernel_flag_bit4(void)

{
  if ((*(uint *)(_DAT_6a003774 + 0x4c) & 0x10) != 0) {
    return 0;
  }
  return 1;
}
