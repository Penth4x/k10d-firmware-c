/* @k10d get_field_at_offset_0xc @ 0x10436f6a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the 32-bit value stored at offset 0xc of the object pointed to by param_1.
 * summary:
 *   The function performs a single memory read from param_1 + 0xc and returns it in r4. It
 *   has no callees and no side effects. The semantic role of the field at offset 0xc cannot
 *   be determined from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_field_at_offset_0xc(int param_1)

{
  return *(uint32_t *)(param_1 + 0xc);
}
