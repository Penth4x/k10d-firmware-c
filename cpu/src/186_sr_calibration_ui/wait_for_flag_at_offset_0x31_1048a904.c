/* @k10d wait_for_flag_at_offset_0x31_1048a904 @ 0x1048a904
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 186_sr_calibration_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * wait_for_flag_at_offset_0x31_1048a904(uint32_t *param_1)

{
  char cVar1;
  
  *(uint8_t *)((int)param_1 + 0x31) = 0;
  wait_for_flag_with_timeout_1046ffca(*param_1);
  cVar1 = *(char *)((int)param_1 + 0x31);
  while (cVar1 == '\0') {
    cVar1 = *(char *)((int)param_1 + 0x31);
  }
  return param_1;
}
