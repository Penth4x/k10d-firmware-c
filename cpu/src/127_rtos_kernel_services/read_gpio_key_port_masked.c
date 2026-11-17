/* @k10d read_gpio_key_port_masked @ 0x104524ea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads the byte-addressed GPIO/key port and returns the upper six bits masked out.
 * summary:
 *   The function performs a single 16-bit read from the MMIO address 0x40004006, which
 *   falls within the 0x40060000..0x4006003f GPIO/key port region described in the brief. It
 *   applies a 0xfc mask to the result, zeroing the lower two bits before returning the
 *   value in r4. No kernel calls or other side effects are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_gpio_key_port_masked(uint32_t param_x0)

{
  return _DAT_40004006 & 0xfc;
}
