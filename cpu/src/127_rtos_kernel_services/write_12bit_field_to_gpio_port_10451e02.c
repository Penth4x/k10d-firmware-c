/* @k10d write_12bit_field_to_gpio_port_10451e02 @ 0x10451e02
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_12bit_field_to_gpio_port_10451e02(uint32_t param_1,ushort param_2)

{
  _DAT_400600e2 = param_2 & 0xfff;
  return;
}
