/* @k10d invoke_virtual_slot_two_104602ce @ 0x104602ce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 135_menu_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_104602ce(int *param_1)

{
  uint32_t uVar1;
  
  uVar1 = (((vtbl_entry*)(*param_1))[2].fn)((int)((vtbl_entry*)(*param_1))[2].adj + (int)param_1,0);
  return uVar1;
}
