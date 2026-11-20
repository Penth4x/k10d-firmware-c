/* @k10d invoke_virtual_slot_two_1039ca9a @ 0x1039ca9a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_1039ca9a(void *param_1,int param_2,uint32_t param_3)

{
  (((vtbl_entry*)(*(int *)(param_2 + 0xc)))[1].fn)
            (*(short *)(*(int *)(param_2 + 0xc) + 8) + param_2,param_3);
  return;
}
