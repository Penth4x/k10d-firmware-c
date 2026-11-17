/* @k10d read_two_byte_value_1044ba3a @ 0x1044ba3a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Reads two consecutive bytes from a memory location and combines them into a single byte
 *   value.
 * summary:
 *   The function takes a pointer, reads the byte at offset 0xd, shifts it left by 4 bits,
 *   and ORs it with the byte at offset 0xe. It returns the resulting 8-bit value. No
 *   callees are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte read_two_byte_value_1044ba3a(void *param_1)

{
  return *(char *)((int)param_1 + 0xd) << 4 | *(byte *)((int)param_1 + 0xe);
}
