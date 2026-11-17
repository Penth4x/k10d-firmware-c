/* @k10d read_mmio_word_masked_104520b0 @ 0x104520b0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit value from MMIO address 0x40128004 and masks it with 0x301.
 * summary:
 *   The function performs a single 16-bit read from the global DAT_40128004 (address
 *   0x40128004) and returns the result ANDed with 0x301. It has no callees and no side
 *   effects. The specific role of the register at 0x40128004 is not determinable from the
 *   provided context, as it is not listed in the verified memory regions or neighboring
 *   function descriptions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_mmio_word_masked_104520b0(uint32_t param_x0)

{
  return _DAT_40128004 & 0x301;
}
