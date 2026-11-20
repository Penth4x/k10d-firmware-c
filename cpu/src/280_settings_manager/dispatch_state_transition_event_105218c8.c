/* @k10d dispatch_state_transition_event_105218c8 @ 0x105218c8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object if the state field matches specific values and
 *   the event ID is valid, then resets the state to zero.
 * summary:
 *   The function checks the integer at offset 0x24 of param_1. If it is 5 and param_2 is 3,
 *   or if it is 6 and param_2 is 5, it dereferences the pointer at offset 0x2c to get an
 *   object, then calls the virtual method at vtable offset 0x44 with an adjusted this
 *   pointer. Finally, it sets the state field at offset 0x24 to 0. No specific camera
 *   subsystem is identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_transition_event_105218c8(cls_105d7b7c *param_1,int param_2)

{
  int iVar1;
  
  if (param_1->field_0x24 == 5) {
    if (param_2 == 3) {
      iVar1 = *(int *)param_1->field_0x2c;
      (((vtbl_entry*)(iVar1))[8].fn)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[8].adj);
    }
  }
  else if ((param_1->field_0x24 == 6) && (param_2 == 5)) {
    iVar1 = *(int *)param_1->field_0x2c;
    (((vtbl_entry*)(iVar1))[8].fn)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[8].adj);
  }
  param_1->field_0x24 = 0;
  return;
}
