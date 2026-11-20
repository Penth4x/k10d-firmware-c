/* @k10d invoke_virtual_slot_two_10460a3e @ 0x10460a3e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 137_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t invoke_virtual_slot_two_10460a3e(int *param_1)

{
  uint8_t uVar1;
  
  uVar1 = (((vtbl_entry*)(*param_1))[2].fn)((int)((vtbl_entry*)(*param_1))[2].adj + (int)param_1,6);
  return uVar1;
}
