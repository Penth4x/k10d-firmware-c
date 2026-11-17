/* @k10d write_two_bytes_to_dat @ 0x1044e12e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit value composed of param_2 and param_3 into global DAT_40128282.
 * summary:
 *   The function takes a 16-bit value split into high (param_2) and low (param_3) bytes,
 *   combines them, and writes the result to the global variable DAT_40128282. No other side
 *   effects or callees are present. The role of DAT_40128282 is not determinable from the
 *   provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_two_bytes_to_dat(uint32_t param_1,short param_2,ushort param_3)

{
  _DAT_40128282 = param_2 << 8 | param_3 & 0xff;
  return;
}
