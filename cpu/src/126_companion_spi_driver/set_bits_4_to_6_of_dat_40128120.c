/* @k10d set_bits_4_to_6_of_dat_40128120 @ 0x1044dffe
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Masks bits 4-6 of global DAT_40128120 and replaces them with the lower 3 bits of
 *   param_2.
 * summary:
 *   The function performs a read-modify-write on the global variable DAT_40128120. It
 *   clears bits 4, 5, and 6 (mask 0x303) and sets them to the value of the lower 3 bits of
 *   param_2 shifted left by 4. No other memory locations are accessed and no callees are
 *   invoked. The role of DAT_40128120 is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bits_4_to_6_of_dat_40128120(uint32_t param_1,ushort param_2)

{
  _DAT_40128120 = _DAT_40128120 & 0x303 | (param_2 & 7) << 4;
  return;
}
