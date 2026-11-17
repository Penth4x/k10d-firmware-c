/* @k10d read_status_bits_10_15 @ 0x104524b0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Extracts bits 10 through 15 from the 32-bit value at DAT_40008006.
 * summary:
 *   The function performs a bitwise AND with 0xfc00 on the global DAT_40008006 and right-
 *   shifts the result by 8 bits to isolate bits 10-15. It has no callees and no side
 *   effects. The role of DAT_40008006 is not determinable from the provided context, so the
 *   specific hardware or status meaning is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int read_status_bits_10_15(uint32_t param_x0)

{
  return (int)(_DAT_40008006 & 0xfc00) >> 8;
}
