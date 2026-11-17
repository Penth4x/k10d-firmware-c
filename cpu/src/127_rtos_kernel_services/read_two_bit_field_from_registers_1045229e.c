/* @k10d read_two_bit_field_from_registers_1045229e @ 0x1045229e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Extracts a 2-bit value from two adjacent 16-bit register words.
 * summary:
 *   Reads bit 10 (0x400) of the 16-bit value at 0x4000c710 and the lower 2 bits of the
 *   16-bit value at 0x4000c718. Combines them into a single 2-bit result. The addresses are
 *   not in the verified MMIO map, so the specific hardware block is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_two_bit_field_from_registers_1045229e(uint32_t param_x0)

{
  return _DAT_4000c710 & 0x400 | _DAT_4000c718 >> 8 & 5;
}
