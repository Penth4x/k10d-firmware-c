/* @k10d read_two_bit_status_field @ 0x10452240
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Extracts a 2-bit value from two adjacent 16-bit memory locations.
 * summary:
 *   The function reads a 16-bit value from DAT_4000c610 and masks bit 10 (0x400). It then
 *   reads a 16-bit value from DAT_4000c618, shifts it right by 8 bits, and masks the lower
 *   2 bits. The results are combined using a bitwise OR to form a 2-bit return value. The
 *   memory addresses 0x4000c610 and 0x4000c618 are not listed in the project brief's
 *   verified memory regions, so their specific hardware role is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_two_bit_status_field(uint32_t param_x0)

{
  return _DAT_4000c610 & 0x400 | _DAT_4000c618 >> 8 & 5;
}
