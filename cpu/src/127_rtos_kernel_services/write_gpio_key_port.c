/* @k10d write_gpio_key_port @ 0x104520c2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Writes a masked 16-bit value to the byte-addressed GPIO/key port at 0x40060004.
 * summary:
 *   Stores param_2 & 0x301 into the global DAT_40128004, which maps to the GPIO/key port
 *   region (0x40060000..0x4006003f) described in the brief. The mask 0x301 selects bits 0,
 *   8, and 9 of the input. No kernel entry or other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_gpio_key_port(uint32_t param_1,ushort param_2)

{
  _DAT_40128004 = param_2 & 0x301;
  return;
}
