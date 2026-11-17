/* @k10d read_mmio_bits_13_15 @ 0x1045259e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns bits 13-15 of the 16-bit value at memory address 0x40030ff4.
 * summary:
 *   The function performs a single 16-bit read from the MMIO address 0x40030ff4 and masks
 *   it with 0xe000 to isolate bits 13, 14, and 15. It returns this masked value as a
 *   ushort. The address 0x40030ff4 is not listed in the verified memory regions of the
 *   project brief, and the specific role of these bits is not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_mmio_bits_13_15(uint32_t param_x0)

{
  return _DAT_40030ff4 & 0xe000;
}
