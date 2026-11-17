/* @k10d read_two_bit_field_from_registers_104522fc @ 0x104522fc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Extracts a 2-bit value from two adjacent 16-bit register words.
 * summary:
 *   Reads bit 10 (0x400) from the 16-bit value at 0x4000c810 and the lower 2 bits of the
 *   value at 0x4000c818. It combines these into a single 2-bit result returned in r4. The
 *   addresses are not in the verified MMIO map, so the specific hardware block is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_two_bit_field_from_registers_104522fc(uint32_t param_x0)

{
  return _DAT_4000c810 & 0x400 | _DAT_4000c818 >> 8 & 5;
}
