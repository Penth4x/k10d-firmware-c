/* @k10d read_gpio_key_bit15 @ 0x10450f82
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool read_gpio_key_bit15(void)

{
  return (_DAT_40060000/*KEYPAD*/ & 0x8000) != 0;
}
