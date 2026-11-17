/* @k10d store_two_bit_fields_to_globals @ 0x10452930
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void store_two_bit_fields_to_globals(uint32_t param_1,uint32_t param_2)

{
  _DAT_401c0104 = (ushort)((uint)param_2 >> 8) & 3;
  _DAT_401c0124 = (ushort)param_2 & 3;
  return;
}
