/* @k10d store_event_and_update_setting @ 0x1040b22c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 093_settings_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_event_and_update_setting(cls_10599b9c *param_1,int param_2)

{
  byte bVar1;
  
  param_1->field_0x18 = param_2;
  bVar1 = bRam10599b8c;
  if ((param_2 == 0x1bb0010) || (bVar1 = bRam10599b8d, param_2 == 0x1bb000f)) {
    setting_set(param_1->field_0x8,0x9e,(uint)bVar1);
  }
  else if (param_2 == 0x1bb000a) {
    send_two_virtual_commands((int *)(uint32_t)param_1);
  }
  return;
}
