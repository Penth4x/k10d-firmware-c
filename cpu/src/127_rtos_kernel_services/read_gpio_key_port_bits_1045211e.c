/* @k10d read_gpio_key_port_bits_1045211e @ 0x1045211e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads the byte-addressed GPIO/key port and masks out bits 11 and 15.
 * summary:
 *   The function reads the 16-bit value at 0x4000c210 and returns it masked with 0x9800.
 *   This address is not listed in the project brief's verified memory regions, so its
 *   specific hardware role is unknown. It is located in the rtos_wrappers_and_heap module
 *   near image-processor interrupt handlers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_gpio_key_port_bits_1045211e(uint32_t param_x0)

{
  return _DAT_4000c210 & 0x9800;
}
