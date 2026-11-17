/* @k10d read_two_bit_field_from_mmio_10452338 @ 0x10452338
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Extracts a 2-bit value from two adjacent 16-bit MMIO registers at 0x4000c612 and
 *   0x4000c61a.
 * summary:
 *   The function reads a 16-bit value from 0x4000c612, masks bit 10 (0x400), and ORs it
 *   with the lower 2 bits of the value at 0x4000c61a (shifted right by 8). This constructs
 *   a 2-bit field spanning the two registers. The addresses are in the 0x4000xxxx range,
 *   which is not explicitly listed in the Tier 1 memory map but is likely an MMIO region.
 *   No callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_two_bit_field_from_mmio_10452338(uint32_t param_x0)

{
  return _DAT_4000c612 & 0x400 | _DAT_4000c61a >> 8 & 5;
}
