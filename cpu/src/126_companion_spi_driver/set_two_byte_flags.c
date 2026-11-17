/* @k10d set_two_byte_flags @ 0x1044b92c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes 0xff to offset 1 and 0x80 to offset 2 of the structure pointed to by param_1.
 * summary:
 *   The function performs two simple byte stores into the memory region referenced by the
 *   first argument. It sets the byte at offset 1 to 0xff and the byte at offset 2 to 0x80.
 *   No other operations, memory accesses, or function calls are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_byte_flags(void *param_1)

{
  *(uint8_t *)((int)param_1 + 1) = 0xff;
  *(uint8_t *)((int)param_1 + 2) = 0x80;
  return;
}
