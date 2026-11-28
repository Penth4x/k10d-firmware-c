/* @k10d store_two_bit_fields_to_globals @ 0x10452930
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void store_two_bit_fields_to_globals(uint32_t unused_rtc_obj_field,uint32_t rtc_status_word)

{
  _DAT_401c0104 = (ushort)((uint)rtc_status_word >> 8) & 3;
  _DAT_401c0124 = (ushort)rtc_status_word & 3;
  return;
}
