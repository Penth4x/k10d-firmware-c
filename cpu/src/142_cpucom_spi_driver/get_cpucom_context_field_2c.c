/* @k10d get_cpucom_context_field_2c @ 0x104661c6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the 32-bit value stored at offset 0x1c of a CPUcom transaction context
 *   structure.
 * summary:
 *   This is a trivial accessor that reads a single field from a structure passed in
 *   param_1. It is called by cpucom_spi_xfer and other functions in the cpucom_spi_driver
 *   module, suggesting it retrieves a specific member (likely a pointer, status, or data
 *   buffer reference) from the transaction context allocated by
 *   allocate_cpucom_transaction_context. No side effects or complex logic are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_cpucom_context_field_2c(void *param_1)

{
  return *(uint32_t *)((int)param_1 + 0x1c);
}
