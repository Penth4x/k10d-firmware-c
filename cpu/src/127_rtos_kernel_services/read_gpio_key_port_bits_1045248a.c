/* @k10d read_gpio_key_port_bits_1045248a @ 0x1045248a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads the byte-addressed GPIO/key port and returns bits 8-11 of the value.
 * summary:
 *   The function reads the 32-bit value at 0x40004006, masks out bits 8 through 11
 *   (0xfc00), and right-shifts the result by 8 to return those four bits as a 0-15 value.
 *   The address 0x40004006 is not listed in the project brief's verified memory regions, so
 *   its specific hardware role is unknown. It has no callees and performs a single MMIO
 *   read.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int read_gpio_key_port_bits_1045248a(uint32_t param_x0)

{
  return (int)(_DAT_40004006 & 0xfc00) >> 8;
}
