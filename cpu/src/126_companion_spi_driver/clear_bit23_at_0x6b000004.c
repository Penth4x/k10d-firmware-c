/* @k10d clear_bit23_at_0x6b000004 @ 0x1043d39e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears bit 23 of the 32-bit value at memory address 0x6b000004.
 * summary:
 *   Performs a read-modify-write operation on the global variable _DAT_6b000004, masking
 *   out bit 23 (0x08000000) using the mask 0xfdffffff. The address 0x6b000004 is not listed
 *   in the verified memory regions of the project brief, so its specific hardware role is
 *   unknown. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_bit23_at_0x6b000004(uint32_t param_x0)

{
  _DAT_6b000004 = _DAT_6b000004 & 0xfdffffff;
  return;
}
