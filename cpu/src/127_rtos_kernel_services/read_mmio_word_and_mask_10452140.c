/* @k10d read_mmio_word_and_mask_10452140 @ 0x10452140
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit value from memory address 0x4000c310 and returns it masked with 0x9800.
 * summary:
 *   The function performs a single memory read from 0x4000c310 and applies a bitmask to
 *   extract bits 11, 12, and 15. The address 0x4000c310 is not listed in the verified
 *   memory regions of the project brief, so its specific hardware role is unknown. It is
 *   located in the rtos_wrappers_and_heap module near image processor interrupt handlers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_mmio_word_and_mask_10452140(uint32_t param_x0)

{
  return _DAT_4000c310 & 0x9800;
}
