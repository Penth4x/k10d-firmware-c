/* @k10d set_flag_and_invoke_virtual_slot_10521b4c @ 0x10521b4c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_invoke_virtual_slot_10521b4c(int param_1)

{
  *(uint8_t *)(param_1 + 0x14) = 1;
  (**(code **)(*(int *)(param_1 + 0xc) + 0xac))
            (*(short *)(*(int *)(param_1 + 0xc) + 0xa8) + param_1);
  return;
}
