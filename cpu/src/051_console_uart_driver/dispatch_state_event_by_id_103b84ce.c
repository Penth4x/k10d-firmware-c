/* @k10d dispatch_state_event_by_id_103b84ce @ 0x103b84ce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_event_by_id_103b84ce(cls_1056ac8c *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)&param_1->field_0x40;
  if (((iVar1 == 3) || (iVar1 == 9)) || (iVar1 == 0x65)) {
    if (param_2 == 0x1a) {
      (((vtbl_entry*)(param_1->field_0x0))[14].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,0x1120004,0);
    }
  }
  else if (iVar1 == 1) {
    if (param_2 == 0x1a) {
      toggle_object_state_flags(param_1,0);
    }
  }
  else if ((iVar1 == 100) && (param_2 == 0x1a)) {
    (((vtbl_entry*)(param_1->field_0x0))[14].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,0x1120009,0);
  }
  return;
}
