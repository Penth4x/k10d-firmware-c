/* @k10d read_mmio_word_masked_1045209e @ 0x1045209e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit value from MMIO address 0x40128002 and masks it with 0x301.
 * summary:
 *   The function performs a single 16-bit load from the global address 0x40128002 and
 *   applies a bitwise AND with the constant 0x301. It returns the resulting masked value.
 *   The specific hardware register or status field at 0x40128002 is not identified in the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_mmio_word_masked_1045209e(uint32_t param_x0)

{
  return _DAT_40128002 & 0x301;
}
