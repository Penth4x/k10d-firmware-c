/* @k10d spi_read_byte @ 0x104404f8
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed read_spi_rx_byte)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads the received byte from the SPI data register at offset 0x24 of the companion chip
 *   interface.
 * summary:
 *   The function takes a base pointer (param_1) and returns the byte stored at offset 0x24.
 *   It is called by verified SPI transfer functions (cpucom_spi_xfer, ch2_buffer_xfer) that
 *   manage command/response exchanges with the companion chip over the 0x5c004040 SPI-like
 *   block. The offset 0x24 corresponds to the data register used for receiving bytes from
 *   the companion DSP/chip.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t spi_read_byte(void *param_1)

{
  return **(uint8_t **)((int)param_1 + 0x24);
}
