/* @k10d invoke_virtual_slot_on_three_members_104e7abc @ 0x104e7abc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_three_members_104e7abc(int param_1,uint32_t param_2)

{
  (**(code **)(*(int *)(param_1 + 0x1c) + 0xe4))
            (param_1 + 0x10 + (int)*(short *)(*(int *)(param_1 + 0x1c) + 0xe0));
  (**(code **)(*(int *)(param_1 + 0x3c) + 0xe4))
            (param_1 + 0x30 + (int)*(short *)(*(int *)(param_1 + 0x3c) + 0xe0),param_2);
  (**(code **)(*(int *)(param_1 + 0x2c) + 0xe4))
            (param_1 + 0x20 + (int)*(short *)(*(int *)(param_1 + 0x2c) + 0xe0),param_2);
  return;
}
