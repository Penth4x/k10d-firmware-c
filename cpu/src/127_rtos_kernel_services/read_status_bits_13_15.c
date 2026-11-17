/* @k10d read_status_bits_13_15 @ 0x104525b0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns bits 13-15 of the 16-bit value at 0x40030ff6.
 * summary:
 *   Reads a 16-bit value from memory address 0x40030ff6 and masks it with 0xe000 to extract
 *   bits 13, 14, and 15. The address 0x40030ff6 is not listed in the verified memory
 *   regions of the project brief, so its specific hardware role is unknown. The function is
 *   a simple one-instruction wrapper with no side effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_status_bits_13_15(uint32_t param_x0)

{
  return _DAT_40030ff6 & 0xe000;
}
