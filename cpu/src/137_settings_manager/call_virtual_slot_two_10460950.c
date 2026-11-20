/* @k10d call_virtual_slot_two_10460950 @ 0x10460950
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 137_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t call_virtual_slot_two_10460950(int *param_1)

{
  uint16_t uVar1;
  
  uVar1 = (((vtbl_entry*)(*param_1))[2].fn)((int)((vtbl_entry*)(*param_1))[2].adj + (int)param_1,0);
  return uVar1;
}
