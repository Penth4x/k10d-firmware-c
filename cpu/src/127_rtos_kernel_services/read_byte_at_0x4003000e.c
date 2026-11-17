/* @k10d read_byte_at_0x4003000e @ 0x1045263a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns the byte value stored at memory address 0x4003000e.
 * summary:
 *   The function performs a single byte read from the fixed address 0x4003000e and returns
 *   it. It has no callees and no side effects. The address 0x4003000e is not listed in the
 *   verified memory regions of the project brief, so its specific hardware role is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_at_0x4003000e(uint32_t param_x0)

{
  return DAT_4003000e;
}
