/* @k10d write_low_byte_to_4004033c @ 0x104454da
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes the lower 11 bits of param_2 to the global DAT_4004033c.
 * summary:
 *   The function masks param_2 with 0xff8 and stores the result in DAT_4004033c. It has no
 *   callees and no other side effects. The role of DAT_4004033c is not determinable from
 *   the provided pseudocode or brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_low_byte_to_4004033c(uint32_t param_1,ushort param_2)

{
  _DAT_4004033c = param_2 & 0xff8;
  return;
}
