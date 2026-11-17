/* @k10d invoke_virtual_slot_six_10471338 @ 0x10471338
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 164_sr_calibration (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_six_10471338(int param_1,uint16_t param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x60) + 4);
  (**(code **)(iVar1 + 0x3c))(*(int *)(param_1 + 0x60) + (int)*(short *)(iVar1 + 0x38),param_2);
  return;
}
