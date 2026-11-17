/* @k10d get_cpucom_msg_data_ptr_104655b6 @ 0x104655b6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the data pointer field (offset 8) of a CPUCOM message structure.
 * summary:
 *   A simple accessor that takes a pointer to a CPUCOM message object and returns the
 *   32-bit value stored at offset 8. It is called by cpucom_spi_xfer and other functions in
 *   the cpucom_spi_driver module, likely to retrieve the payload buffer pointer for SPI
 *   transfers. No side effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_cpucom_msg_data_ptr_104655b6(void *param_1)

{
  return *(uint32_t *)((int)param_1 + 8);
}
