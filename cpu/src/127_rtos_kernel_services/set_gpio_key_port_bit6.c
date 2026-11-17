/* @k10d set_gpio_key_port_bit6 @ 0x10450f98
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_gpio_key_port_bit6(uint32_t param_1,int param_2)

{
  uRam40060004 = 0x40;
  if (param_2 == 0) {
    uRam40060004 = 0;
  }
  return;
}
