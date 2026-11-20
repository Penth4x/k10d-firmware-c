/* @k10d manage_object_state_transition @ 0x1041054a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void manage_object_state_transition(cls_1059be70 *param_1,int param_2)

{
  if (param_2 == 0) {
    if (param_1->field_0x10 != 0) {
      (((vtbl_entry*)(param_1->field_0x4))[15].fn)
                (&param_1->field_0x0 + ((vtbl_entry*)(param_1->field_0x4))[15].adj,1);
      toggle_state_machine(param_1,1);
      param_1->field_0x10 = 0;
    }
  }
  else if ((param_2 == 1) && (param_1->field_0x10 != 3)) {
    toggle_state_machine(param_1,0);
    param_1->field_0x10 = 3;
  }
  return;
}
