/* @k10d set_gpio_key_port_bit_10451f46 @ 0x10451f46
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_gpio_key_port_bit_10451f46(uint32_t param_1,int param_2)

{
  _DAT_400600f2 = (ushort)(param_2 != 0);
  return;
}
