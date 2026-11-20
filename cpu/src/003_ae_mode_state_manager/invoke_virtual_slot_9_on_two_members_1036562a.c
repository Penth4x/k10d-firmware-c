/* @k10d invoke_virtual_slot_9_on_two_members_1036562a @ 0x1036562a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_9_on_two_members_1036562a(cls_105576e0 *param_1)

{
  (((vtbl_entry*)(param_1->field_0x18))[9].fn)
            ((int)&param_1->field_0x18 + (int)((vtbl_entry*)(param_1->field_0x18))[9].adj);
  (((vtbl_entry*)(param_1->field_0x40))[9].fn)
            ((int)&param_1->field_0x40 + (int)((vtbl_entry*)(param_1->field_0x40))[9].adj);
  return;
}
