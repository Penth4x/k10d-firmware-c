/* @k10d get_cpucom_msg_data_ptr_104655aa @ 0x104655aa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to the data field of a CPUCOM message structure.
 * summary:
 *   The function takes a pointer to a CPUCOM message object and returns the value stored at
 *   offset 4. Given the module context (cpucom_spi_driver) and the neighboring function
 *   cpucom_msg_set_cmd which sets the command byte, this function likely retrieves the data
 *   pointer or payload field of the message structure. It is called by cpucom_spi_xfer to
 *   access the message data during SPI transfer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_cpucom_msg_data_ptr_104655aa(void *param_1)

{
  return *(uint32_t *)((int)param_1 + 4);
}
