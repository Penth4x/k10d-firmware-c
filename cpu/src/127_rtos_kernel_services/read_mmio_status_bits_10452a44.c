/* @k10d read_mmio_status_bits_10452a44 @ 0x10452a44
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_mmio_status_bits_10452a44(uint32_t unused)

{
  /* Read MMIO status register at 0x400403f4, mask with 0xb802, return low 16 bits */
  return _DAT_400403f4 & 0xb802;
}
