/* @k10d read_mmio_word_masked_10452196 @ 0x10452196
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit value from memory address 0x4000c212 and returns it masked with 0x9800.
 * summary:
 *   The function performs a single memory load from 0x4000c212 and applies a bitwise AND
 *   with 0x9800. The address 0x4000c212 is not listed in the verified memory regions of the
 *   project brief, so its specific hardware role is unknown. No kernel calls or other
 *   functions are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_mmio_word_masked_10452196(uint32_t param_x0)

{
  return _DAT_4000c212 & 0x9800;
}
