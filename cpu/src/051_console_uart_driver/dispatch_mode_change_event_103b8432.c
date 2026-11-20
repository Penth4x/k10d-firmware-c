/* @k10d dispatch_mode_change_event_103b8432 @ 0x103b8432
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_change_event_103b8432(cls_1056ac8c *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)&param_1->field_0x40;
  if (((iVar1 == 3) || (iVar1 == 9)) || (iVar1 == 0x65)) {
    iVar1 = get_setting_delay_ms_104f1820(param_1->field_0x28);
    if (iVar1 != 0) {
      (((vtbl_entry*)(param_1->field_0x0))[14].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,0x112000b,0);
    }
  }
  else if (((((iVar1 == 1) || (iVar1 == 2)) || ((iVar1 == 4 || ((iVar1 == 5 || (iVar1 == 8)))))) ||
           (iVar1 == 7)) || (iVar1 == 6)) {
    iVar1 = *(int *)&param_1->field_0x2c;
    (((vtbl_entry*)(iVar1))[2].fn)
              ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[2].adj,0x1120065,0);
    iVar1 = call_two_helpers_in_sequence_10491ff0();
    if (iVar1 == 0) {
      toggle_object_state_flags(param_1,1);
    }
  }
  return;
}
