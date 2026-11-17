/* @k10d read_two_bit_field_from_mmio_104523f4 @ 0x104523f4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Extracts a 2-bit value from two adjacent 16-bit MMIO registers.
 * summary:
 *   Reads bit 10 (0x400) from the 16-bit value at 0x4000c812 and the lower 2 bits of the
 *   16-bit value at 0x4000c81a. Combines them into a single 2-bit result. The addresses
 *   0x4000c812 and 0x4000c81a are not listed in the verified memory regions of the project
 *   brief, so their specific hardware role is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_two_bit_field_from_mmio_104523f4(uint32_t param_x0)

{
  return _DAT_4000c812 & 0x400 | _DAT_4000c81a >> 8 & 5;
}
