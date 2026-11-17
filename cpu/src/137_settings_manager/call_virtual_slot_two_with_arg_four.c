/* @k10d call_virtual_slot_two_with_arg_four @ 0x10460a02
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 137_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t call_virtual_slot_two_with_arg_four(int *param_1)

{
  uint8_t uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x14))((int)*(short *)(*param_1 + 0x10) + (int)param_1,4);
  return uVar1;
}
