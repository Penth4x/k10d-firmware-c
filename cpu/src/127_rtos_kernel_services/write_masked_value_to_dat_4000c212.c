/* @k10d write_masked_value_to_dat_4000c212 @ 0x104521a8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes the lower 16 bits of param_2 masked with 0x9800 to the global DAT_4000c212.
 * summary:
 *   The function takes a 16-bit parameter, applies a bitmask of 0x9800 (bits 11, 12, and
 *   15), and stores the result in the global variable DAT_4000c212. It has no callees and
 *   performs no other operations. The role of DAT_4000c212 is not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_dat_4000c212(uint32_t param_1,ushort param_2)

{
  _DAT_4000c212 = param_2 & 0x9800;
  return;
}
