/* @k10d spi_write_byte @ 0x104404f0
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed write_byte_to_channel_data_register)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a single byte to the data register at offset 0x24 of a channel control block.
 * summary:
 *   The function takes a pointer to a channel structure and a byte value, then stores the
 *   byte at offset 0x24 of that structure. Callers include ch2_buffer_xfer and
 *   cpucom_spi_xfer, which use this to write bytes to serial channel data ports (0x5c004023
 *   and 0x5c004043 respectively). The offset 0x24 corresponds to the data register in the
 *   channel's MMIO mapping.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void spi_write_byte(void *param_1,uint8_t param_2)

{
  **(uint8_t **)((int)param_1 + 0x24) = param_2;
  return;
}
