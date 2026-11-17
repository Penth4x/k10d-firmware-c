/* @k10d read_display_controller_status_bits @ 0x104464ba
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads and masks bits 14-15 of the display controller status register at 0x40040004.
 * summary:
 *   The function performs a single MMIO read from 0x40040004 and returns the result masked
 *   with 0xc000. The caller display_output_enable uses this value to check the controller
 *   state before enabling the rear display. The specific meaning of bits 14-15 in the
 *   display controller status word is not defined in the provided brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_display_controller_status_bits(uint32_t param_x0)

{
  return _DAT_40040004 & 0xc000;
}
