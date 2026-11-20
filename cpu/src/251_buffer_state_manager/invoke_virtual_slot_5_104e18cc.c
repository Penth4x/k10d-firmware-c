/* @k10d invoke_virtual_slot_5_104e18cc @ 0x104e18cc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_5_104e18cc(int *param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = *(int *)param_1[1];
  (((vtbl_entry*)(iVar1))[5].fn)
            (param_1[1] + (int)((vtbl_entry*)(iVar1))[5].adj,*(uint32_t *)(*param_1 + 8),param_2);
  return;
}
