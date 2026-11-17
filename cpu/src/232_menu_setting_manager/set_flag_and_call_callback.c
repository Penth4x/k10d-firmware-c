/* @k10d set_flag_and_call_callback @ 0x104c4c8e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_call_callback(int param_1)

{
  *(uint8_t *)(param_1 + 0x218) = 1;
  (*(code *)0x104bea64/*ROM*/)(*(uint32_t *)(param_1 + 0x48));
  return;
}
