/* @k10d invoke_virtual_slot_5_if_flag_set @ 0x1051ba48
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_5_if_flag_set(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 0x20) + 0x34))
              (*(short *)(*(int *)(param_1 + 0x20) + 0x30) + param_1);
  }
  return;
}
