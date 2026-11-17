/* @k10d dispatch_state_event_by_id_103b84ce @ 0x103b84ce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_event_by_id_103b84ce(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0x10];
  if (((iVar1 == 3) || (iVar1 == 9)) || (iVar1 == 0x65)) {
    if (param_2 == 0x1a) {
      (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120004,0);
    }
  }
  else if (iVar1 == 1) {
    if (param_2 == 0x1a) {
      toggle_object_state_flags(param_1,0);
    }
  }
  else if ((iVar1 == 100) && (param_2 == 0x1a)) {
    (**(code **)(*param_1 + 0x74))((int)*(short *)(*param_1 + 0x70) + (int)param_1,0x1120009,0);
  }
  return;
}
