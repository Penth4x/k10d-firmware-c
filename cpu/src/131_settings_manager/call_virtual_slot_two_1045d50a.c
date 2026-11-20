/* @k10d call_virtual_slot_two_1045d50a @ 0x1045d50a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 131_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t call_virtual_slot_two_1045d50a(int *param_1)

{
  uint8_t uVar1;
  
  uVar1 = (((vtbl_entry*)(*param_1))[2].fn)((int)((vtbl_entry*)(*param_1))[2].adj + (int)param_1,4);
  return uVar1;
}
