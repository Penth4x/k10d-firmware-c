/* @k10d set_gpio_key_port_bit15 @ 0x10450f6c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_gpio_key_port_bit15(uint32_t param_1,int param_2)

{
  if (param_2 == 0) {
    _DAT_40060000/*KEYPAD*/ = 0;
  }
  else {
    _DAT_40060000/*KEYPAD*/ = 0x8000;
  }
  return;
}
