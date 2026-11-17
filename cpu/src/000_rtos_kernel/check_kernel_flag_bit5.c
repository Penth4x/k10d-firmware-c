/* @k10d check_kernel_flag_bit5 @ 0x1000d36a
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Returns 1 if bit 5 of the word at DAT_6a003774+0x4c is clear, else 0.
 * summary:
 *   Reads a 32-bit value from the unknown global DAT_6a003774 at offset 0x4c and tests bit
 *   5 (mask 0x20). Returns 1 when the bit is not set and 0 when it is set. No callees are
 *   invoked and the role of the global is not established from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_kernel_flag_bit5(void)

{
  if ((*(uint *)(_DAT_6a003774 + 0x4c) & 0x20) != 0) {
    return 0;
  }
  return 1;
}
