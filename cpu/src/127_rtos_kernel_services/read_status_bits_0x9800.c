/* @k10d read_status_bits_0x9800 @ 0x104521fc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort read_status_bits_0x9800(uint32_t param_x0)

{
  return _DAT_4000c512 & 0x9800;
}
