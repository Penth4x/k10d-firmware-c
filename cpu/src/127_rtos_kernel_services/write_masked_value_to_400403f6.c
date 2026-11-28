/* @k10d write_masked_value_to_400403f6 @ 0x10452a68
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_masked_value_to_400403f6(uint32_t unused,ushort value)

{
  /* Mask the incoming value with 0xb802 and write the low halfword
   * to hardware register 0x400403f6.  The first argument is unused. */
  _DAT_400403f6 = value & 0xb802;
  return;
}
