/* @k10d set_status_flags_by_condition @ 0x104180e2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_status_flags_by_condition(int param_1)

{
  int iVar1;
  
  iVar1 = check_state_flag_at_offset((uint32_t)param_1);
  if (iVar1 != 0) {
    if ((*(uint *)(param_1 + 0x1508) & 0x10000) == 0) {
      *(uint8_t *)(param_1 + 0x150e) = 1;
      if ((*(uint *)(param_1 + 0x1508) & 0x2000000) == 0) {
        iVar1 = 0x150c;
      }
      else {
        iVar1 = 0x150d;
      }
    }
    else {
      iVar1 = 0x150e;
    }
    *(uint8_t *)(iVar1 + param_1) = 1;
  }
  return;
}
