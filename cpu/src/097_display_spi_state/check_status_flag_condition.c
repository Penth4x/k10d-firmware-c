/* @k10d check_status_flag_condition @ 0x10413968
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t check_status_flag_condition(cls_1059c10c *param_1)

{
  uint8_t uVar1;
  int iVar2;
  
  iVar2 = count_active_entries_in_seven_slots_105136e0(param_1->field_0x54);
  uVar1 = 0;
  if (iVar2 == 0) {
    iVar2 = get_setting_by_mode_flag_104f147e(*(uint32_t *)&param_1->field_0x5c,0);
    if ((iVar2 == 4) || (iVar2 = get_setting_by_mode_flag_104f147e(*(uint32_t *)&param_1->field_0x5c,0), iVar2 == 5)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  if (param_1[1].field_0x569 == '\0') {
    uVar1 = 0;
  }
  return uVar1;
}
