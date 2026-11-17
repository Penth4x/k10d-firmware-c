/* @k10d write_two_bytes_at_offset_four_104384e4 @ 0x104384e4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value to offset 4 of a memory structure.
 * summary:
 *   The function takes a pointer in param_1 and a 16-bit value in param_2, then stores
 *   param_2 at address param_1 + 4. It has no callees and performs no other operations. The
 *   specific role of the structure at param_1 is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_at_offset_four_104384e4(int param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 4) = param_2;
  return;
}
