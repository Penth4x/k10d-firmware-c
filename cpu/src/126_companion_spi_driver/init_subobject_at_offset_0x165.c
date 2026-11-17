/* @k10d init_subobject_at_offset_0x165 @ 0x1044a4ac
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a sub-object located at offset 0x165 within the structure pointed to by
 *   param_1.
 * summary:
 *   The function calculates the address of a sub-structure at offset 0x165 (357 bytes) from
 *   the base pointer param_1. It then calls three consecutive initialization or setup
 *   functions (read_first_byte_1044ba24, compute_value_from_high_nibble,
 *   get_low_three_bits) on this sub-object. Finally, it returns 1, likely indicating
 *   success. The specific subsystem is not identifiable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_subobject_at_offset_0x165(uint8_t *param_1)

{
  uint8_t *puVar1;
  
  puVar1 = param_1 + 0x165;
  read_first_byte_1044ba24(puVar1);
  compute_value_from_high_nibble((int)puVar1);
  get_low_three_bits((int)puVar1);
  return 1;
}
