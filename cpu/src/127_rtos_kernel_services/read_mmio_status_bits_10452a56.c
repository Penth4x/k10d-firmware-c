/* @k10d read_mmio_status_bits_10452a56 @ 0x10452a56
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

/* Reads the 16-bit MMIO status register at 0x400403f6 and masks it
 * with 0xb802 (bits 1, 3, 11, 12).  The incoming register argument
 * is not used by this routine. */
ushort read_mmio_status_bits_10452a56(uint32_t unused_arg)

{
  return _DAT_400403f6 & 0xb802;
}
