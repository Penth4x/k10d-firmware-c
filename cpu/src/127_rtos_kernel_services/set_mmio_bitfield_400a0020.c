/* @k10d set_mmio_bitfield_400a0020 @ 0x10458400
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value into the lower 12 bits of the MMIO register at 0x400a0020.
 * summary:
 *   The function performs a read-modify-write on the global variable _DAT_400a0020, which
 *   resides in the 0x400a0000 MMIO region. It masks out the lower 12 bits (0xf0f) and ORs
 *   in the 16-bit parameter param_2, effectively updating a specific bitfield within that
 *   register. The function takes an unused first parameter (param_1) and returns void. No
 *   other side effects or kernel calls are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_mmio_bitfield_400a0020(uint32_t param_1,ushort param_2)

{
  _DAT_400a0020 = param_2 | _DAT_400a0020 & 0xcf00;
  return;
}
