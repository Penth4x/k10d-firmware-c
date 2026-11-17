/* @k10d write_mmio_40128002 @ 0x1045208e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes the lower 10 bits of param_2 (masked with 0x301) to the MMIO address 0x40128002.
 * summary:
 *   The function stores a masked value from its second argument into the global
 *   DAT_40128002, which corresponds to the MMIO address 0x40128002. The mask 0x301
 *   preserves bits 0, 8, and 9. The first parameter is unused. No other side effects or
 *   kernel calls are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_mmio_40128002(uint32_t param_1,ushort param_2)

{
  _DAT_40128002 = param_2 & 0x301;
  return;
}
