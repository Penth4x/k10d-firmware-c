/* @k10d cpucom_resp_get_byte0 @ 0x10465592
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed get_first_byte_of_buffer)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the first byte of the provided buffer.
 * summary:
 *   The function takes a pointer to a byte array and returns the value at offset 0. It is a
 *   trivial accessor used within the CPUCOM SPI driver module, likely to retrieve the first
 *   byte of a command or response buffer. No side effects or complex logic are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t cpucom_resp_get_byte0(uint8_t *param_1)

{
  return *param_1;
}
