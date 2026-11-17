/* @k10d invoke_virtual_slot_and_set_flag_104956ba @ 0x104956ba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_and_set_flag_104956ba(uint32_t *param_1,uint32_t param_2,uint16_t param_3)

{
  (*(code *)0x1048f14e/*ROM*/)(*param_1,param_2,param_3);
  *(uint8_t *)((int)param_1 + 9) = 1;
  return;
}
