/* @k10d invoke_virtual_slot_5_if_flag_set @ 0x1051ba48
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_5_if_flag_set(cls_105d6afc *param_1)

{
  if (param_1->field_0x4 != 0) {
    (((vtbl_entry*)(param_1->field_0x20))[6].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x20))[6].adj);
  }
  return;
}
