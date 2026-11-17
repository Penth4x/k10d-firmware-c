/* @k10d write_bits_10_11_to_4004038c @ 0x10445684
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes the value of param_2 masked with 0xfc0 to the memory location 0x4004038c.
 * summary:
 *   The function takes two parameters, ignores the first, and stores the second parameter
 *   masked with 0xfc0 into the global address 0x4004038c. The address 0x4004038c is not
 *   listed in the project brief's verified memory regions, so its specific hardware role is
 *   unknown. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_bits_10_11_to_4004038c(uint32_t param_1,ushort param_2)

{
  _DAT_4004038c = param_2 & 0xfc0;
  return;
}
