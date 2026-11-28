/* @k10d check_bit15_of_0x4007000c @ 0x104529b4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_bit15_of_0x4007000c(uint32_t unused_arg)

{
  /* Reads the 16-bit IRQ status register at 0x4007000c and tests bit 15.
   * The caller-supplied argument is not used by the original machine code. */
  return (_DAT_4007000c & 0x8000) != 0;
}
