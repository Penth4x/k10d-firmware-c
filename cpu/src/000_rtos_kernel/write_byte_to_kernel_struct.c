/* @k10d write_byte_to_kernel_struct @ 0x1000d45e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_byte_to_kernel_struct(uint8_t param_1)

{
  *(uint8_t *)(_DAT_6a003774 + 0x4d) = param_1;
  return;
}
