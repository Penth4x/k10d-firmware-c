/* @k10d check_state_and_dispatch_event @ 0x103b7ec6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Checks a state field at offset 0x40 and either returns true, dispatches a virtual
 *   event, or calls a helper.
 * summary:
 *   Reads an integer from param_1 + 0x40. If the value is 3, 9, or 0x65, it returns 1. If
 *   the value is 100, it performs a virtual call via the vtable at param_1 + 0x2c (slot 2)
 *   with arguments 0x1120009 and 0, then returns 0. Otherwise, it calls
 *   toggle_object_state_flags with param_1 and 0, and returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_state_and_dispatch_event(cls_1056ac8c *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = *(int *)&param_1->field_0x40;
  if (((iVar1 == 3) || (iVar1 == 9)) || (iVar1 == 0x65)) {
    uVar2 = 1;
  }
  else if (iVar1 == 100) {
    iVar1 = *(int *)param_1->field_0x2c;
    (((vtbl_entry*)(iVar1))[2].fn)
              ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[2].adj,0x1120009,0);
    uVar2 = 0;
  }
  else {
    toggle_object_state_flags(param_1,0);
    uVar2 = 0;
  }
  return uVar2;
}
