/* @k10d write_word_at_offset_16 @ 0x104655c8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a 32-bit value into the memory location at offset 0x10 of the object pointed to
 *   by param_1.
 * summary:
 *   The function performs a single store operation, placing param_2 into the memory address
 *   calculated as param_1 + 0x10. It has no callees and no other side effects. While
 *   located in the cpucom_spi_driver module, the function itself contains no specific
 *   CPUCOM identifiers or logic, making the specific role of this field (e.g., length,
 *   status, or data pointer) undeterminable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_word_at_offset_16(void *param_1,uint32_t param_2)

{
  *(uint32_t *)((int)param_1 + 0x10) = param_2;
  return;
}
