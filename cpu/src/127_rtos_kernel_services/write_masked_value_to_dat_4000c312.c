/* @k10d write_masked_value_to_dat_4000c312 @ 0x104521ca
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Stores the lower 16 bits of param_2 masked with 0x9800 into the global DAT_4000c312.
 * summary:
 *   The function ignores param_1 and writes a masked subset of param_2 to the global
 *   variable DAT_4000c312. The mask 0x9800 isolates bits 11, 12, and 15 of the input. No
 *   kernel calls or other side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_dat_4000c312(uint32_t param_1,ushort param_2)

{
  _DAT_4000c312 = param_2 & 0x9800;
  return;
}
