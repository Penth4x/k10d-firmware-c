/* @k10d invoke_virtual_slot_14_1039cab4 @ 0x1039cab4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_14_1039cab4(void *param_1,int param_2,uint32_t param_3)

{
  (((vtbl_entry*)(*(int *)(param_2 + 0xc)))[14].fn)
            (((vtbl_entry*)(*(int *)(param_2 + 0xc)))[14].adj + param_2,param_3);
  return;
}
