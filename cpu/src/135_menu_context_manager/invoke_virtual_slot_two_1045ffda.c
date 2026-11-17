/* @k10d invoke_virtual_slot_two_1045ffda @ 0x1045ffda
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 135_menu_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t invoke_virtual_slot_two_1045ffda(int *param_1)

{
  uint8_t uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x14))((int)*(short *)(*param_1 + 0x10) + (int)param_1,0);
  return uVar1;
}
