/* @k10d invoke_virtual_slot_14_on_event_103abfda @ 0x103abfda
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_14_on_event_103abfda(cls_10565770 *param_1,int param_2)

{
  (*(code *)0x1039fe1a/*ROM*/)();
  if ((param_2 == 0x17) || (param_2 == 0x1a)) {
    (((vtbl_entry*)(param_1->field_0x0))[14].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,0x1120004,0);
  }
  return;
}
