/* @k10d dispatch_virtual_slot_18 @ 0x1047d4b2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_18(cls_105aac00 *param_1,uint32_t param_2,uint32_t param_3)

{
  int *piVar1;
  
  piVar1 = (int *)dispatch_on_state_check((int)param_1,param_3);
  (((vtbl_entry*)(*piVar1))[18].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[18].adj,param_2,param_3);
  return;
}
