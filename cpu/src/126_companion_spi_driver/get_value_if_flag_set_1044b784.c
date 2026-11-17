/* @k10d get_value_if_flag_set_1044b784 @ 0x1044b784
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t get_value_if_flag_set_1044b784(void *param_1)

{
  uint16_t uVar1;
  
  if (*(char *)((int)param_1 + 0x40) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint16_t *)((int)param_1 + 2);
  }
  return uVar1;
}
