/* @k10d call_virtual_slot_6_1046096e @ 0x1046096e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 137_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_virtual_slot_6_1046096e(int *param_1)

{
  uint32_t uVar1;
  
  uVar1 = (((vtbl_entry*)(*param_1))[6].fn)((int)((vtbl_entry*)(*param_1))[6].adj + (int)param_1,2,0xff);
  return uVar1;
}
