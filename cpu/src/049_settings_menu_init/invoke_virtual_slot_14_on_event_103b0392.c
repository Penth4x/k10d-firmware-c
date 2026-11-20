/* @k10d invoke_virtual_slot_14_on_event_103b0392 @ 0x103b0392
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_14_on_event_103b0392(cls_10565d08 *param_1,int param_2)

{
  (*(code *)0x1039fe1a/*ROM*/)();
  if ((param_2 == 0x17) || (param_2 == 0x1a)) {
    (((vtbl_entry*)(param_1->field_0x0))[14].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,0x1120004,0);
  }
  return;
}
