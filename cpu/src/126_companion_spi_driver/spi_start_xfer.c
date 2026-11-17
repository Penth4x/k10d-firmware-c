/* @k10d spi_start_xfer @ 0x10440570
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed set_status_bit_8)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears bit 9 and sets bit 8 of the 16-bit status word at offset 0x20 of the passed
 *   structure.
 * summary:
 *   The function takes a pointer to a structure and modifies the 16-bit value at offset
 *   0x20. It first clears bit 9 (mask 0xfdff) and then sets bit 8 (mask 0x100). Given the
 *   callers (cpucom_spi_xfer, ch2_buffer_xfer), this likely manipulates a control/status
 *   register for the SPI or serial channel, but the specific register role is not
 *   explicitly defined in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void spi_start_xfer(void *param_1)

{
  **(ushort **)((int)param_1 + 0x20) = **(ushort **)((int)param_1 + 0x20) & 0xfdff;
  **(ushort **)((int)param_1 + 0x20) = **(ushort **)((int)param_1 + 0x20) | 0x100;
  return;
}
