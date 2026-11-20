/* @k10d call_virtual_slot_17 @ 0x105219d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_17(cls_105d7f58 *param_1)

{
  (((vtbl_entry*)(param_1->field_0xc))[17].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0xc))[17].adj);
  return;
}
