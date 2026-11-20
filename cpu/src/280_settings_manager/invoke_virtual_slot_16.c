/* @k10d invoke_virtual_slot_16 @ 0x105219b4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_16(cls_105d7f58 *param_1)

{
  (((vtbl_entry*)(param_1->field_0xc))[16].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0xc))[16].adj);
  return;
}
