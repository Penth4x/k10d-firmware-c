/* @k10d read_two_bit_field_from_mmio_10452396 @ 0x10452396
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Extracts a 2-bit value from two adjacent 16-bit MMIO registers at 0x4000c712 and
 *   0x4000c71a.
 * summary:
 *   The function reads a 16-bit value from 0x4000c712 and masks bit 10 (0x400). It then
 *   reads a 16-bit value from 0x4000c71a, shifts it right by 8, and masks the lower 2 bits.
 *   These two values are ORed together to form a 2-bit result. The addresses 0x4000c712 and
 *   0x4000c71a are not listed in the project brief's verified memory regions, so their
 *   specific hardware role is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_two_bit_field_from_mmio_10452396(uint32_t param_x0)

{
  return _DAT_4000c712 & 0x400 | _DAT_4000c71a >> 8 & 5;
}
