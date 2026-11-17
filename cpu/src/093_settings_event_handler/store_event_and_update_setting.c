/* @k10d store_event_and_update_setting @ 0x1040b22c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 093_settings_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_event_and_update_setting(int param_1,int param_2)

{
  byte bVar1;
  
  *(int *)(param_1 + 0x18) = param_2;
  bVar1 = bRam10599b8c;
  if ((param_2 == 0x1bb0010) || (bVar1 = bRam10599b8d, param_2 == 0x1bb000f)) {
    setting_set(*(int *)(param_1 + 8),0x9e,(uint)bVar1);
  }
  else if (param_2 == 0x1bb000a) {
    send_two_virtual_commands((int *)__frv_reg_unset(4));
  }
  return;
}
