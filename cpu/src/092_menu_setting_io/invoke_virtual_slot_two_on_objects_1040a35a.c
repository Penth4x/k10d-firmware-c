/* @k10d invoke_virtual_slot_two_on_objects_1040a35a @ 0x1040a35a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_objects_1040a35a(void *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 != 0) {
    (**(code **)(*(int *)(param_2 + 0x14) + 0x14))
              (*(short *)(*(int *)(param_2 + 0x14) + 0x10) + param_2);
  }
  if (param_3 != 0) {
    (**(code **)(*(int *)(param_3 + 0x14) + 0x14))
              (*(short *)(*(int *)(param_3 + 0x14) + 0x10) + param_3);
  }
  if (param_4 != 0) {
    (**(code **)(*(int *)(param_4 + 0x14) + 0x14))
              (*(short *)(*(int *)(param_4 + 0x14) + 0x10) + param_4);
  }
  return;
}
