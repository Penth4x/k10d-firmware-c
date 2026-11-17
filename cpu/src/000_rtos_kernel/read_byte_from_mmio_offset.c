/* @k10d read_byte_from_mmio_offset @ 0x1000d46e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint read_byte_from_mmio_offset(void)

{
  return (*(uint *)(_DAT_6a003774 + 0x4c) & 0xff0000) >> 0x10;
}
