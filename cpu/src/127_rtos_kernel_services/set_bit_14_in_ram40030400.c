/* @k10d set_bit_14_in_ram40030400 @ 0x104530f0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit_14_in_ram40030400(uint32_t param_1,int param_2)

{
  uRam40030400 = uRam40030400 & 0x383f;
  if (param_2 != 0) {
    uRam40030400 = uRam40030400 | 0x4000;
  }
  return;
}
