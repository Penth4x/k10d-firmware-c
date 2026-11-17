/* @k10d invoke_virtual_slot_two_10460a5c @ 0x10460a5c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 137_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t invoke_virtual_slot_two_10460a5c(int *param_1)

{
  uint8_t uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x14))((int)*(short *)(*param_1 + 0x10) + (int)param_1,7);
  return uVar1;
}
