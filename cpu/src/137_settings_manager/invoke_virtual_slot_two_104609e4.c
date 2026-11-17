/* @k10d invoke_virtual_slot_two_104609e4 @ 0x104609e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 137_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t invoke_virtual_slot_two_104609e4(int *param_1)

{
  uint16_t uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x14))((int)*(short *)(*param_1 + 0x10) + (int)param_1,3);
  return uVar1;
}
