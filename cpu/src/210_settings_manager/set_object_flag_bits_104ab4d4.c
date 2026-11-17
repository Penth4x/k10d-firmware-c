/* @k10d set_object_flag_bits_104ab4d4 @ 0x104ab4d4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets specific bit fields in four 32-bit words at offsets 0x24-0x30 of a passed object.
 * summary:
 *   The function takes a pointer to an object and performs bitwise OR/AND operations on
 *   four consecutive 32-bit fields. It sets the upper byte (0xff000000) at offset 0x28,
 *   clears the upper byte at offset 0x2c, sets the lower nibble (0xf) at offset 0x30, and
 *   sets bit 2 (value 4) at offset 0x24. It returns 1. No callees are present, and the
 *   specific meaning of these flags is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_object_flag_bits_104ab4d4(void *param_1)

{
  **(uint **)((int)param_1 + 0x28) = **(uint **)((int)param_1 + 0x28) | 0xff000000;
  **(uint **)((int)param_1 + 0x2c) = **(uint **)((int)param_1 + 0x2c) & 0xffffff;
  **(uint **)((int)param_1 + 0x30) = **(uint **)((int)param_1 + 0x30) | 0xf;
  **(uint **)((int)param_1 + 0x24) = **(uint **)((int)param_1 + 0x24) | 4;
  return 1;
}
